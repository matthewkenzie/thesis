#include <iostream>
#include <string>
#include <vector>

#include "TH1F.h"
#include "TGraph.h"
#include "TLegend.h"
#include "TLine.h"
#include "TCanvas.h"
#include "TObject.h"
#include "TF1.h"
#include "TMath.h"

#include "RooRandom.h"
#include "RooRealVar.h"
#include "RooExponential.h"
#include "RooGaussian.h"
#include "RooPlot.h"
#include "RooGenericPdf.h"
#include "RooAddPdf.h"
#include "RooArgList.h"
#include "RooConstVar.h"
#include "RooFormulaVar.h"  
#include "RooDataSet.h"
#include "RooFitResult.h"
#include "RooAbsPdf.h"

using namespace std;
using namespace RooFit;

vector<double> ret_errors(TGraph *graph, double bestFitVal, int nSigma){
  TGraph *low = new TGraph();
  TGraph *up = new TGraph();
  double x,y;
  int lP=0;
  int uP=0;
  for (int p=0;p<graph->GetN(); p++){
    graph->GetPoint(p,x,y);
    if (x<bestFitVal){
      low->SetPoint(lP,y,x);
      lP++;
    }
    else {
      up->SetPoint(uP,y,x);
      uP++;
    }
  }
  vector<double> result;
  result.push_back(bestFitVal);
  for (int s=1; s<=nSigma; s++){
    result.push_back(low->Eval(nSigma*nSigma));
    result.push_back(up->Eval(nSigma*nSigma));
  }
  return result;

}

void envelope_explain(){
  // PLOT 1
  TH1F dummy("d","",1,120,130);
  dummy.GetYaxis()->SetRangeUser(0.,5.5);
  dummy.SetStats(0);
  dummy.GetXaxis()->SetTitle("x");
  dummy.GetYaxis()->SetTitle("-2#DeltaLL");

  TCanvas c("c","c",800,600);
  c.SetGrid();

  TLegend *leg = new TLegend(0.2,0.65,0.8,0.89);
  leg->SetFillColor(0);

  dummy.Draw("G");

  TLine l1(120,1,130,1);
  l1.SetLineWidth(1);
  l1.SetLineColor(kBlack);
  l1.SetLineStyle(kDashed);

  TLine l2(120,4,130,4);
  l2.SetLineWidth(1);
  l2.SetLineColor(kBlack);
  l2.SetLineStyle(kDashed);

  
  TF1 f("f1","(0.5*(x-125))*(0.5*(x-125))",120,130);
  f.SetLineColor(kBlack);
  f.SetLineWidth(3);
  leg->AddEntry(&f,"Full profile fit","L");

  TF1 f2("f2","(1.5*(x-125))*(1.5*(x-125))",120,130);
  f2.SetLineColor(kBlue);
  f2.SetLineWidth(3);
  leg->AddEntry(&f2,"Fit freezing nuisance parameter to best fit","L");

  
  TGraph *envelope = new TGraph();
  envelope->SetLineWidth(3);
  envelope->SetLineStyle(4);
  envelope->SetLineColor(kMagenta);
  int npoints = 500;
  double x,y;
  for (int p=0; p<npoints; p++){
    double mh = 120.+p*((130.-120.)/double(npoints));
    envelope->SetPoint(p,mh,100.);
  }


  for (int m=122; m<=128; m+=1){
    double yval = f.Eval(m);
    yval *= 1.+0.05*TMath::Abs(m-125.); 
    TF1 *fS = new TF1(Form("fS_%d",m),Form("(1.5*(x-%d))*(1.5*(x-%d))+%6.3f",m,m,yval),120,130);
    fS->SetLineColor(kRed);
    fS->SetLineStyle(kDashed);
    fS->Draw("Lsame");
    if (m==122) {
      leg->AddEntry(fS,"Fits freezing nuisance parameter to arbitary values","L");
    }
    for (int p=0; p<npoints; p++){
      envelope->GetPoint(p,x,y);
      if (fS->Eval(x)<y) envelope->SetPoint(p,x,fS->Eval(x));
    }
  
  }
  leg->AddEntry(envelope,"Envelope","L");
  envelope->Draw("Csame");
  f2.Draw("Lsame");
  f.Draw("Lsame");
  leg->Draw("same");
  c.Update();
  c.Modified();
  c.Print("envelope_explain_plot.pdf");
  c.Print("envelope_explain_plot.C");

  exit(0);


  // PLOT 2
  RooRandom::randomGenerator()->SetSeed(242);
  RooRealVar *mass = new RooRealVar("mass","m_{#gamma#gamma}",100,180);
  mass->setUnit("GeV");
  RooRealVar *pexp = new RooRealVar("pexp","",-0.02,-2,0.);
  RooRealVar *ppow = new RooRealVar("ppow","",-4.,-10.,0.);

  RooExponential *exp = new RooExponential("exp","",*mass,*pexp);
  RooGenericPdf *pow = new RooGenericPdf("pow","","TMath::Power(@0,@1)",RooArgList(*mass,*ppow));

  RooRealVar *pmean = new RooRealVar("pmean","",125.,123,127);
  pmean->setConstant();
  RooRealVar *psigma = new RooRealVar("psigma","",2.5,0.5,6.);
  psigma->setConstant();
  RooGaussian *signal = new RooGaussian("signal","",*mass,*pmean,*psigma);

  RooRealVar *bkgY = new RooRealVar("bkgY","",1000.,0.,1.e6);
  RooRealVar *mu = new RooRealVar("mu","",1.,-10.,10.);
  RooFormulaVar *sigY = new RooFormulaVar("sigY","","@0*@1",RooArgList(*mu,RooConst(5.)));

  RooAddPdf *expS = new RooAddPdf("expS","",RooArgList(*exp,*signal),RooArgList(*bkgY,*sigY));
  RooAddPdf *powS = new RooAddPdf("powS","",RooArgList(*pow,*signal),RooArgList(*bkgY,*sigY));

  RooDataSet *data = expS->generate(RooArgSet(*mass),500);
  RooFitResult *eFR = expS->fitTo(*data,Save(true));
  double bestFitMuExp = mu->getVal();
  RooFitResult *pFR = powS->fitTo(*data,Save(true));
  double bestFitMuPow = mu->getVal();
  double globalMinNLL = 2.*TMath::Min(eFR->minNll(),pFR->minNll());
  double globalBestFitMu=0.;
  if (eFR->minNll()<pFR->minNll()) globalBestFitMu = bestFitMuExp;
  else globalBestFitMu = bestFitMuPow;
  delete eFR;
  delete pFR;

  TLegend *leg2 = new TLegend(0.6,0.7,0.89,0.89);
  leg2->SetFillColor(0);
  RooPlot *plot = mass->frame();
  plot->SetTitle("");
  data->plotOn(plot,Binning(80));
  TObject *dataObj = plot->getObject(plot->numItems()-1);
  leg2->AddEntry(dataObj,"Pseudo-data","LEP");
  expS->plotOn(plot,LineColor(kBlue));
  TObject *expObj = plot->getObject(plot->numItems()-1);
  leg2->AddEntry(expObj,"Exponential Fit","L");
  powS->plotOn(plot,LineColor(kRed));
  TObject *powObj = plot->getObject(plot->numItems()-1);
  leg2->AddEntry(powObj,"Power Law Fit","L");
  TCanvas *c2 = new TCanvas("c2","",800,800);
  plot->Draw();
  leg2->Draw("same");
  c2->Print("envelope_explain2.pdf");

  TGraph *expLL = new TGraph();
  TGraph *powLL = new TGraph();
  TGraph *env = new TGraph();
  int points=100;
  double muMin=-2.;
  double muMax=8.;
  for (int p=0; p<points; p++) {
    double muV = muMin + p*(muMax-muMin)/points;
    mu->setConstant(false);
    mu->setVal(muV);
    mu->setConstant(true);
    RooFitResult *expFR = expS->fitTo(*data,Save(true));
    double expNLLVal = expFR->minNll();
    expLL->SetPoint(p,muV,(2.*expNLLVal)-globalMinNLL);
    RooFitResult *powFR = powS->fitTo(*data,Save(true));
    double powNLLVal = powFR->minNll();
    powLL->SetPoint(p,muV,(2.*powNLLVal)-globalMinNLL);
    env->SetPoint(p,muV,2.*TMath::Min(powNLLVal,expNLLVal)-globalMinNLL);
  }
  expLL->SetLineWidth(4);
  expLL->SetLineColor(kBlue);
  expLL->GetXaxis()->SetTitle("#mu");
  expLL->GetYaxis()->SetTitle("-2#DeltaLL");
  expLL->GetXaxis()->SetRangeUser(muMin,muMax);
  powLL->SetLineWidth(4);
  powLL->SetLineColor(kRed);
  env->SetLineWidth(4);
  env->SetLineStyle(7);
  env->SetLineColor(kYellow);


  TLegend *leg3 = new TLegend(0.35,0.7,0.65,0.89);
  leg3->SetFillColor(0);
  leg3->AddEntry(expLL,"Exponential Likelihood","L");
  leg3->AddEntry(powLL,"Power Law Likelihood","L");
  leg3->AddEntry(env,"Envelope","L");
  TCanvas *c3 = new TCanvas("c3","",800,800);
  expLL->Draw("AL");
  powLL->Draw("Lsame");
  env->Draw("Lsame");
  leg3->Draw("same");
  
  // ERROR LINES
  vector<double> errsPow = ret_errors(powLL,bestFitMuPow,2);
  vector<double> errs = ret_errors(env,globalBestFitMu,2);
  TLine l;
  l.SetLineWidth(3);
  l.SetLineStyle(kDashed);
  l.SetLineColor(kRed);
  l.DrawLine(muMin,4,muMax,4);
  l.DrawLine(errsPow[3],0,errsPow[3],4);
  l.DrawLine(errsPow[4],0,errsPow[4],4);
  l.SetLineColor(kBlue);
  l.DrawLine(errs[3],0,errs[3],4);

  c3->Print("envelope_explain3.pdf");

  for (unsigned int i=0; i<errs.size(); i++){
    cout << i << " : " << errs[i] << endl;
  }

  cout << "Global:      " << globalBestFitMu << endl; 
  cout << "BestFit exp: " << bestFitMuExp << endl;
  cout << "BestFit pow: " << bestFitMuPow << endl;

}
