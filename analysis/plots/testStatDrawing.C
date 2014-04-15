{

  double mean0 = 16;
  double mean2 = 8.;
  double obs = 17.5;

  TF1 f0("f0","gaus",-10,60);
  f0.SetParameter(0,1);
  f0.SetParameter(1,mean0);
  f0.SetParameter(2,5);

  TF1 f2("f2","gaus",-10,60);
  f2.SetParameter(0,1);
  f2.SetParameter(1,mean2);
  f2.SetParameter(2,5);

  TArrow lObs(obs,0,obs,1,0.015,"<|---");
  lObs.SetLineWidth(2);

  TF1 f0S("f0S","gaus",obs,60);
  f0S.SetParameter(0,1);
  f0S.SetParameter(1,mean0);
  f0S.SetParameter(2,5);
  
  TF1 f2S("f2S","gaus",obs,60);
  f2S.SetParameter(0,1);
  f2S.SetParameter(1,mean2);
  f2S.SetParameter(2,5);

  f0.SetLineColor(kRed);
  f2.SetLineColor(kBlue);
  f0S.SetLineColor(kRed);
  f0S.SetFillColor(kRed);
  f0S.SetFillStyle(3001);
  f2S.SetLineColor(kBlue);
  f2S.SetFillColor(kBlue);
  f2S.SetFillStyle(3590);

  f0.SetTitle("");
  f0.GetXaxis().SetTitle("q_{#mu}(#mu=0.8,m_{H}=120 GeV)");
  f0.GetYaxis().SetTitle("Arbitrary Units");
  f0.GetXaxis().SetTitleSize(0.04);
  f0.GetXaxis().SetLabelSize(0.04);
  f0.GetYaxis().SetTitleSize(0.04);
  f0.GetYaxis().SetLabelSize(0.04);

  TLegend *leg = new TLegend(0.455,0.6,0.895,0.89);
  leg->SetFillColor(0);
  leg->AddEntry(&lObs,"Observed value in data","L");
  leg->AddEntry(&f0,"Expected distribution for B only","L");
  leg->AddEntry(&f2,"Expected distribution for S+B","L");
  TLegend *leg2 = new TLegend(0.605,0.4,0.895,0.58);
  leg2->SetFillColor(0);
  double clb = f0->Integral(obs,60)/f0->Integral(-10,60);
  double clsb = f2->Integral(obs,60)/f2->Integral(-10,60);
  leg2->AddEntry(&f0S,Form("CL_{b}    = %6.4f",clb),"F");
  leg2->AddEntry(&f2S,Form("CL_{s+b}  = %6.4f",clsb),"F");
  TLine null;
  leg2->AddEntry(&null,Form("CL_{s}    = %6.4f",clsb/clb),"0");
  
  TCanvas *c = new TCanvas();
  f0.Draw("L");
  f2.Draw("Lsame");
  f0S.Draw("LFsame");
  f2S.Draw("LFsame");
  lObs.Draw("ALsame");
  leg->Draw("same");
  leg2->Draw("same");
  c->Print("testStatDrawing.pdf");

}
