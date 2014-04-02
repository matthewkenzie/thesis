{
  
  TFile *tf = TFile::Open("diphobdt_transformed_bg_7TeV.root");

  TCanvas *canv = (TCanvas*)tf->Get("c3");
  TPad *upper = canv->GetPad(1);
  TPad *lower = canv->GetPad(2);

  TH1 *hResid = (TH1*)lower->GetPrimitive("hBDTOutput0");
  hResid->SetNdivisions(505);
  hResid->GetXaxis()->SetLabelSize(0.1);
  hResid->GetYaxis()->SetLabelSize(0.1);

  lower->cd();
  TLine *line = new TLine(0.,1.,1.,1.);
  line->SetLineWidth(3);
  line->SetLineColor(kRed);
  line->SetLineStyle(7);
  line->Draw("same");
  hResid->Draw("same");



}
