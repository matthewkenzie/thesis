{
//=========Macro generated from canvas: canv/canv
//=========  (Wed Apr  2 19:36:14 2014) by ROOT version5.34/03
   TCanvas *canv = new TCanvas("canv", "canv",0,0,1400,960);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canv->SetHighLightColor(2);
   canv->Range(0,0,1,1);
   canv->SetFillColor(0);
   canv->SetBorderMode(0);
   canv->SetBorderSize(2);
   canv->SetTickx(1);
   canv->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: Plots
   TPad *Plots = new TPad("Plots", "Plots",0,0,0.5,1);
   Plots->Draw();
   Plots->cd();
   Plots->Range(-35.71429,-2.527027,107.1429,17.74324);
   Plots->SetFillColor(0);
   Plots->SetBorderMode(0);
   Plots->SetBorderSize(2);
   Plots->SetTickx(1);
   Plots->SetLeftMargin(0.25);
   Plots->SetRightMargin(0.05);
   Plots->SetTopMargin(0.16);
   Plots->SetFrameBorderMode(0);
   Plots->SetFrameBorderMode(0);
   
   TH2F *dummy = new TH2F("dummy","",10,0,100,15,-0.5,14.5);
   dummy->SetStats(0);
   dummy->SetFillColor(3);
   dummy->GetXaxis()->SetTitle("Signal Fraction (%)");
   dummy->GetXaxis()->SetLabelFont(42);
   dummy->GetXaxis()->SetLabelSize(0.045);
   dummy->GetXaxis()->SetTitleSize(0.045);
   dummy->GetXaxis()->SetTickLength(0.01);
   dummy->GetXaxis()->SetTitleOffset(0.95);
   dummy->GetXaxis()->SetTitleFont(42);
   dummy->GetYaxis()->SetBinLabel(15,"Untagged 0");
   dummy->GetYaxis()->SetBinLabel(14,"Untagged 1");
   dummy->GetYaxis()->SetBinLabel(13,"Untagged 2");
   dummy->GetYaxis()->SetBinLabel(12,"Untagged 3");
   dummy->GetYaxis()->SetBinLabel(11,"Untagged 4");
   dummy->GetYaxis()->SetBinLabel(10,"Dijet Tag 0");
   dummy->GetYaxis()->SetBinLabel(9,"Dijet Tag 1");
   dummy->GetYaxis()->SetBinLabel(8,"Dijet Tag 2");
   dummy->GetYaxis()->SetBinLabel(7,"VH Lepton Tight");
   dummy->GetYaxis()->SetBinLabel(6,"VH Lepton Loose");
   dummy->GetYaxis()->SetBinLabel(5,"VH MET Tag");
   dummy->GetYaxis()->SetBinLabel(4,"VH Dijet Tag");
   dummy->GetYaxis()->SetBinLabel(3,"ttH Leptonic Tag");
   dummy->GetYaxis()->SetBinLabel(2,"ttH Multijet Tag");
   dummy->GetYaxis()->SetBinLabel(1,"Combined");
   dummy->GetYaxis()->SetLabelSize(0.035);
   dummy->GetYaxis()->SetTitleSize(0.045);
   dummy->GetYaxis()->SetTickLength(0);
   dummy->GetYaxis()->SetTitleOffset(1.1);
   dummy->GetYaxis()->SetTitleFont(42);
   dummy->GetZaxis()->SetLabelFont(42);
   dummy->GetZaxis()->SetLabelSize(0.035);
   dummy->GetZaxis()->SetTitleSize(0.035);
   dummy->GetZaxis()->SetTitleFont(42);
   dummy->Draw("");
   TPave *pave = new TPave(0,13.66,75.68272,14.34,0,"br");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#006600");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(75.68272,13.66,87.60501,14.34,0,"br");

   ci = TColor::GetColor("#990000");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(87.60501,13.66,94.52263,14.34,0,"br");

   ci = TColor::GetColor("#009999");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(94.52263,13.66,98.08444,14.34,0,"br");

   ci = TColor::GetColor("#003399");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(98.08444,13.66,100,14.34,0,"br");

   ci = TColor::GetColor("#ff6600");
   pave->SetFillColor(ci);
   pave->Draw();
   
   TPaveText *pt = new TPaveText(0.5,13.66,80,14.34,"br");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetLineColor(0);
   pt->SetTextAlign(12);
   pt->SetTextColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.035);
   TText *text = pt->AddText("6.0 total expected signal");
   pt->Draw();
   pave = new TPave(0,12.66,85.15305,13.34,0,"br");

   ci = TColor::GetColor("#006600");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(85.15305,12.66,93.00423,13.34,0,"br");

   ci = TColor::GetColor("#990000");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(93.00423,12.66,97.0354,13.34,0,"br");

   ci = TColor::GetColor("#009999");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(97.0354,12.66,99.40405,13.34,0,"br");

   ci = TColor::GetColor("#003399");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(99.40405,12.66,100,13.34,0,"br");

   ci = TColor::GetColor("#ff6600");
   pave->SetFillColor(ci);
   pave->Draw();
   
   pt = new TPaveText(0.5,12.66,80,13.34,"br");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetLineColor(0);
   pt->SetTextAlign(12);
   pt->SetTextColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.035);
   text = pt->AddText("50.8 total expected signal");
   pt->Draw();
   pave = new TPave(0,11.66,91.11147,12.34,0,"br");

   ci = TColor::GetColor("#006600");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(91.11147,11.66,95.85428,12.34,0,"br");

   ci = TColor::GetColor("#990000");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(95.85428,11.66,98.30478,12.34,0,"br");

   ci = TColor::GetColor("#009999");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(98.30478,11.66,99.73463,12.34,0,"br");

   ci = TColor::GetColor("#003399");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(99.73463,11.66,100,12.34,0,"br");

   ci = TColor::GetColor("#ff6600");
   pave->SetFillColor(ci);
   pave->Draw();
   
   pt = new TPaveText(0.5,11.66,80,12.34,"br");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetLineColor(0);
   pt->SetTextAlign(12);
   pt->SetTextColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.035);
   text = pt->AddText("117.2 total expected signal");
   pt->Draw();
   pave = new TPave(0,10.66,91.57154,11.34,0,"br");

   ci = TColor::GetColor("#006600");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(91.57154,10.66,95.96536,11.34,0,"br");

   ci = TColor::GetColor("#990000");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(95.96536,10.66,98.37147,11.34,0,"br");

   ci = TColor::GetColor("#009999");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(98.37147,10.66,99.74409,11.34,0,"br");

   ci = TColor::GetColor("#003399");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(99.74409,10.66,100,11.34,0,"br");

   ci = TColor::GetColor("#ff6600");
   pave->SetFillColor(ci);
   pave->Draw();
   
   pt = new TPaveText(0.5,10.66,80,11.34,"br");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetLineColor(0);
   pt->SetTextAlign(12);
   pt->SetTextColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.035);
   text = pt->AddText("153.1 total expected signal");
   pt->Draw();
   pave = new TPave(0,9.66,93.09585,10.34,0,"br");

   ci = TColor::GetColor("#006600");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(93.09585,9.66,96.65723,10.34,0,"br");

   ci = TColor::GetColor("#990000");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(96.65723,9.66,98.67382,10.34,0,"br");

   ci = TColor::GetColor("#009999");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(98.67382,9.66,99.78806,10.34,0,"br");

   ci = TColor::GetColor("#003399");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(99.78806,9.66,100,10.34,0,"br");

   ci = TColor::GetColor("#ff6600");
   pave->SetFillColor(ci);
   pave->Draw();
   
   pt = new TPaveText(0.5,9.66,80,10.34,"br");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetLineColor(0);
   pt->SetTextAlign(12);
   pt->SetTextColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.035);
   text = pt->AddText("121.4 total expected signal");
   pt->Draw();
   pave = new TPave(0,8.66,17.83613,9.34,0,"br");

   ci = TColor::GetColor("#006600");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(17.83613,8.66,99.61823,9.34,0,"br");

   ci = TColor::GetColor("#990000");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(99.61823,8.66,99.83946,9.34,0,"br");

   ci = TColor::GetColor("#009999");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(99.83946,8.66,99.90878,9.34,0,"br");

   ci = TColor::GetColor("#003399");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(99.90878,8.66,100,9.34,0,"br");

   ci = TColor::GetColor("#ff6600");
   pave->SetFillColor(ci);
   pave->Draw();
   
   pt = new TPaveText(0.5,8.66,80,9.34,"br");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetLineColor(0);
   pt->SetTextAlign(12);
   pt->SetTextColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.035);
   text = pt->AddText("4.5 total expected signal");
   pt->Draw();
   pave = new TPave(0,7.66,28.49795,8.34,0,"br");

   ci = TColor::GetColor("#006600");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(28.49795,7.66,99.04088,8.34,0,"br");

   ci = TColor::GetColor("#990000");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(99.04088,7.66,99.5964,8.34,0,"br");

   ci = TColor::GetColor("#009999");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(99.5964,7.66,99.8,8.34,0,"br");

   ci = TColor::GetColor("#003399");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(99.8,7.66,100,8.34,0,"br");

   ci = TColor::GetColor("#ff6600");
   pave->SetFillColor(ci);
   pave->Draw();
   
   pt = new TPaveText(0.5,7.66,80,8.34,"br");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetLineColor(0);
   pt->SetTextAlign(12);
   pt->SetTextColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.035);
   text = pt->AddText("5.6 total expected signal");
   pt->Draw();
   pave = new TPave(0,6.66,43.79896,7.34,0,"br");

   ci = TColor::GetColor("#006600");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(43.79896,6.66,97.02537,7.34,0,"br");

   ci = TColor::GetColor("#990000");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(97.02537,6.66,98.39635,7.34,0,"br");

   ci = TColor::GetColor("#009999");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(98.39635,6.66,99.16306,7.34,0,"br");

   ci = TColor::GetColor("#003399");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(99.16306,6.66,99.99999,7.34,0,"br");

   ci = TColor::GetColor("#ff6600");
   pave->SetFillColor(ci);
   pave->Draw();
   
   pt = new TPaveText(0.5,6.66,80,7.34,"br");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetLineColor(0);
   pt->SetTextAlign(12);
   pt->SetTextColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.035);
   text = pt->AddText("13.7 total expected signal");
   pt->Draw();
   pave = new TPave(0,5.66,0.2127363,6.34,0,"br");

   ci = TColor::GetColor("#006600");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(0.2127363,5.66,0.4005034,6.34,0,"br");

   ci = TColor::GetColor("#990000");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(0.4005034,5.66,77.27368,6.34,0,"br");

   ci = TColor::GetColor("#009999");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(77.27368,5.66,96.29089,6.34,0,"br");

   ci = TColor::GetColor("#003399");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(96.29089,5.66,100,6.34,0,"br");

   ci = TColor::GetColor("#ff6600");
   pave->SetFillColor(ci);
   pave->Draw();
   
   pt = new TPaveText(0.5,5.66,80,6.34,"br");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetLineColor(0);
   pt->SetTextAlign(12);
   pt->SetTextColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.035);
   text = pt->AddText("1.4 total expected signal");
   pt->Draw();
   pave = new TPave(0,4.66,2.582921,5.34,0,"br");

   ci = TColor::GetColor("#006600");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(2.582921,4.66,3.67987,5.34,0,"br");

   ci = TColor::GetColor("#990000");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(3.67987,4.66,81.61034,5.34,0,"br");

   ci = TColor::GetColor("#009999");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(81.61034,4.66,98.45885,5.34,0,"br");

   ci = TColor::GetColor("#003399");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(98.45885,4.66,100,5.34,0,"br");

   ci = TColor::GetColor("#ff6600");
   pave->SetFillColor(ci);
   pave->Draw();
   
   pt = new TPaveText(0.5,4.66,80,5.34,"br");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetLineColor(0);
   pt->SetTextAlign(12);
   pt->SetTextColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.035);
   text = pt->AddText("0.9 total expected signal");
   pt->Draw();
   pave = new TPave(0,3.66,16.29615,4.34,0,"br");

   ci = TColor::GetColor("#006600");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(16.29615,3.66,19.03255,4.34,0,"br");

   ci = TColor::GetColor("#990000");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(19.03255,3.66,53.45017,4.34,0,"br");

   ci = TColor::GetColor("#009999");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(53.45017,3.66,88.88519,4.34,0,"br");

   ci = TColor::GetColor("#003399");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(88.88519,3.66,100,4.34,0,"br");

   ci = TColor::GetColor("#ff6600");
   pave->SetFillColor(ci);
   pave->Draw();
   
   pt = new TPaveText(0.5,3.66,80,4.34,"br");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetLineColor(0);
   pt->SetTextAlign(12);
   pt->SetTextColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.035);
   text = pt->AddText("1.8 total expected signal");
   pt->Draw();
   pave = new TPave(0,2.66,30.33785,3.34,0,"br");

   ci = TColor::GetColor("#006600");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(30.33785,2.66,33.46066,3.34,0,"br");

   ci = TColor::GetColor("#990000");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(33.46066,2.66,74.08717,3.34,0,"br");

   ci = TColor::GetColor("#009999");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(74.08717,2.66,97.44858,3.34,0,"br");

   ci = TColor::GetColor("#003399");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(97.44858,2.66,100,3.34,0,"br");

   ci = TColor::GetColor("#ff6600");
   pave->SetFillColor(ci);
   pave->Draw();
   
   pt = new TPaveText(0.5,2.66,80,3.34,"br");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetLineColor(0);
   pt->SetTextAlign(12);
   pt->SetTextColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.035);
   text = pt->AddText("1.6 total expected signal");
   pt->Draw();
   pave = new TPave(0,1.66,0.004271071,2.34,0,"br");

   ci = TColor::GetColor("#006600");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(0.004271071,1.66,0.008542142,2.34,0,"br");

   ci = TColor::GetColor("#990000");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(0.008542142,1.66,1.631626,2.34,0,"br");

   ci = TColor::GetColor("#009999");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(1.631626,1.66,3.197547,2.34,0,"br");

   ci = TColor::GetColor("#003399");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(3.197547,1.66,100,2.34,0,"br");

   ci = TColor::GetColor("#ff6600");
   pave->SetFillColor(ci);
   pave->Draw();
   
   pt = new TPaveText(0.5,1.66,80,2.34,"br");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetLineColor(0);
   pt->SetTextAlign(12);
   pt->SetTextColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.035);
   text = pt->AddText("0.5 total expected signal");
   pt->Draw();
   pave = new TPave(0,0.66,4.081944,1.34,0,"br");

   ci = TColor::GetColor("#006600");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(4.081944,0.66,4.965905,1.34,0,"br");

   ci = TColor::GetColor("#990000");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(4.965905,0.66,5.742235,1.34,0,"br");

   ci = TColor::GetColor("#009999");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(5.742235,0.66,6.690413,1.34,0,"br");

   ci = TColor::GetColor("#003399");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(6.690413,0.66,100,1.34,0,"br");

   ci = TColor::GetColor("#ff6600");
   pave->SetFillColor(ci);
   pave->Draw();
   
   pt = new TPaveText(0.5,0.66,80,1.34,"br");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetLineColor(0);
   pt->SetTextAlign(12);
   pt->SetTextColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.035);
   text = pt->AddText("0.6 total expected signal");
   pt->Draw();
   pave = new TPave(0,-0.34,87.06181,0.34,0,"br");

   ci = TColor::GetColor("#006600");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(87.06181,-0.34,94.64183,0.34,0,"br");

   ci = TColor::GetColor("#990000");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(94.64183,-0.34,97.72468,0.34,0,"br");

   ci = TColor::GetColor("#009999");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(97.72468,-0.34,99.41755,0.34,0,"br");

   ci = TColor::GetColor("#003399");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(99.41755,-0.34,99.99999,0.34,0,"br");

   ci = TColor::GetColor("#ff6600");
   pave->SetFillColor(ci);
   pave->Draw();
   
   pt = new TPaveText(0.5,-0.34,80,0.34,"br");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetLineColor(0);
   pt->SetTextAlign(12);
   pt->SetTextColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.035);
   text = pt->AddText("479.0 total expected signal");
   pt->Draw();
   pave = new TPave(0.25,0.85,0.3,0.88,0,"brNDC");

   ci = TColor::GetColor("#006600");
   pave->SetFillColor(ci);
   pave->Draw();
      tex = new TLatex(0.32,0.865,"ggH");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(42);
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
   pave = new TPave(0.4,0.85,0.45,0.88,0,"brNDC");

   ci = TColor::GetColor("#990000");
   pave->SetFillColor(ci);
   pave->Draw();
      tex = new TLatex(0.47,0.865,"qqH");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(42);
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
   pave = new TPave(0.55,0.85,0.6,0.88,0,"brNDC");

   ci = TColor::GetColor("#009999");
   pave->SetFillColor(ci);
   pave->Draw();
      tex = new TLatex(0.62,0.865,"WH");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(42);
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
   pave = new TPave(0.7,0.85,0.75,0.88,0,"brNDC");

   ci = TColor::GetColor("#003399");
   pave->SetFillColor(ci);
   pave->Draw();
      tex = new TLatex(0.77,0.865,"ZH");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(42);
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
   pave = new TPave(0.85,0.85,0.9,0.88,0,"brNDC");

   ci = TColor::GetColor("#ff6600");
   pave->SetFillColor(ci);
   pave->Draw();
      tex = new TLatex(0.92,0.865,"ttH");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(42);
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
   TLine *line = new TLine(0,9.5,100,9.5);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,6.5,100,6.5);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,0.5,100,0.5);
   line->SetLineStyle(9);
   line->SetLineWidth(2);
   line->Draw();
   Plots->Modified();
   canv->cd();
  
// ------------>Primitives in pad: Width
   Width = new TPad("Width", "Width",0.5,0,0.75,1);
   Width->Draw();
   Width->cd();
   Width->Range(-0.2758621,-2.527027,3.172414,17.74324);
   Width->SetFillColor(0);
   Width->SetBorderMode(0);
   Width->SetBorderSize(2);
   Width->SetTickx(1);
   Width->SetLeftMargin(0.08);
   Width->SetRightMargin(0.05);
   Width->SetTopMargin(0.16);
   Width->SetFrameBorderMode(0);
   Width->SetFrameBorderMode(0);
   
   TH2F *dummy2 = new TH2F("dummy2","",1,0,3,15,-0.5,14.5);
   dummy2->SetStats(0);
   dummy2->GetXaxis()->SetTitle("Width (GeV)");
   dummy2->GetXaxis()->SetNdivisions(505);
   dummy2->GetXaxis()->SetLabelFont(42);
   dummy2->GetXaxis()->SetLabelOffset(-0.02);
   dummy2->GetXaxis()->SetLabelSize(0.07);
   dummy2->GetXaxis()->SetTitleSize(0.08);
   dummy2->GetXaxis()->SetTickLength(0.01);
   dummy2->GetXaxis()->SetTitleOffset(0.5);
   dummy2->GetXaxis()->SetTitleFont(42);
   dummy2->GetYaxis()->SetBinLabel(1,"");
   dummy2->GetYaxis()->SetNdivisions(505);
   dummy2->GetYaxis()->SetLabelSize(0.035);
   dummy2->GetYaxis()->SetTitleSize(0.045);
   dummy2->GetYaxis()->SetTickLength(0);
   dummy2->GetYaxis()->SetTitleOffset(1.1);
   dummy2->GetYaxis()->SetTitleFont(42);
   dummy2->GetZaxis()->SetLabelFont(42);
   dummy2->GetZaxis()->SetLabelSize(0.035);
   dummy2->GetZaxis()->SetTitleSize(0.035);
   dummy2->GetZaxis()->SetTitleFont(42);
   dummy2->Draw("");
   pave = new TPave(0,13.66,1.054,14.34,1,"br");

   ci = TColor::GetColor("#6666ff");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,13.66,0.7913191,14.34,1,"br");

   ci = TColor::GetColor("#ff0000");
   pave->SetFillColor(ci);
   pave->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,12.66,1.188,13.34,1,"br");

   ci = TColor::GetColor("#6666ff");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,12.66,0.9996596,13.34,1,"br");

   ci = TColor::GetColor("#ff0000");
   pave->SetFillColor(ci);
   pave->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,11.66,1.459,12.34,1,"br");

   ci = TColor::GetColor("#6666ff");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,11.66,1.152851,12.34,1,"br");

   ci = TColor::GetColor("#ff0000");
   pave->SetFillColor(ci);
   pave->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,10.66,2.04,11.34,1,"br");

   ci = TColor::GetColor("#6666ff");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,10.66,1.561021,11.34,1,"br");

   ci = TColor::GetColor("#ff0000");
   pave->SetFillColor(ci);
   pave->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,9.66,2.623,10.34,1,"br");

   ci = TColor::GetColor("#6666ff");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,9.66,2.136681,10.34,1,"br");

   ci = TColor::GetColor("#ff0000");
   pave->SetFillColor(ci);
   pave->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,8.66,1.299,9.34,1,"br");

   ci = TColor::GetColor("#6666ff");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,8.66,0.9417872,9.34,1,"br");

   ci = TColor::GetColor("#ff0000");
   pave->SetFillColor(ci);
   pave->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,7.66,1.429,8.34,1,"br");

   ci = TColor::GetColor("#6666ff");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,7.66,1.074213,8.34,1,"br");

   ci = TColor::GetColor("#ff0000");
   pave->SetFillColor(ci);
   pave->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,6.66,1.595,7.34,1,"br");

   ci = TColor::GetColor("#6666ff");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,6.66,1.243574,7.34,1,"br");

   ci = TColor::GetColor("#ff0000");
   pave->SetFillColor(ci);
   pave->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,5.66,1.632,6.34,1,"br");

   ci = TColor::GetColor("#6666ff");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,5.66,1.243404,6.34,1,"br");

   ci = TColor::GetColor("#ff0000");
   pave->SetFillColor(ci);
   pave->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,4.66,1.604,5.34,1,"br");

   ci = TColor::GetColor("#6666ff");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,4.66,1.15983,5.34,1,"br");

   ci = TColor::GetColor("#ff0000");
   pave->SetFillColor(ci);
   pave->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,3.66,1.676,4.34,1,"br");

   ci = TColor::GetColor("#6666ff");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,3.66,1.16766,4.34,1,"br");

   ci = TColor::GetColor("#ff0000");
   pave->SetFillColor(ci);
   pave->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,2.66,1.313,3.34,1,"br");

   ci = TColor::GetColor("#6666ff");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,2.66,1.063489,3.34,1,"br");

   ci = TColor::GetColor("#ff0000");
   pave->SetFillColor(ci);
   pave->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,1.66,1.34,2.34,1,"br");

   ci = TColor::GetColor("#6666ff");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,1.66,1.025021,2.34,1,"br");

   ci = TColor::GetColor("#ff0000");
   pave->SetFillColor(ci);
   pave->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,0.66,1.343,1.34,1,"br");

   ci = TColor::GetColor("#6666ff");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,0.66,1.033872,1.34,1,"br");

   ci = TColor::GetColor("#ff0000");
   pave->SetFillColor(ci);
   pave->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,-0.34,1.868,0.34,1,"br");

   ci = TColor::GetColor("#6666ff");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,-0.34,1.321021,0.34,1,"br");

   ci = TColor::GetColor("#ff0000");
   pave->SetFillColor(ci);
   pave->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0.15,0.85,0.23,0.88,1,"brNDC");

   ci = TColor::GetColor("#6666ff");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   pave->SetLineColor(ci);
   pave->Draw();
      tex = new TLatex(0.25,0.865,"#sigma_{eff}");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(42);
   tex->SetTextSize(0.055);
   tex->SetLineWidth(2);
   tex->Draw();
   pave = new TPave(0.6,0.85,0.68,0.88,1,"brNDC");

   ci = TColor::GetColor("#ff0000");
   pave->SetFillColor(ci);
   pave->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   pave->SetLineColor(ci);
   pave->Draw();
      tex = new TLatex(0.7,0.865,"#sigma_{FW}");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(42);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(0,9.5,3,9.5);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,6.5,3,6.5);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,0.5,3,0.5);
   line->SetLineStyle(9);
   line->SetLineWidth(2);
   line->Draw();
   
   TH2F *dummy2__31 = new TH2F("dummy2__31","",1,0,3,15,-0.5,14.5);
   dummy2__31->SetDirectory(0);
   dummy2__31->SetStats(0);
   dummy2__31->GetXaxis()->SetTitle("Width (GeV)");
   dummy2__31->GetXaxis()->SetNdivisions(505);
   dummy2__31->GetXaxis()->SetLabelFont(42);
   dummy2__31->GetXaxis()->SetLabelOffset(-0.02);
   dummy2__31->GetXaxis()->SetLabelSize(0.07);
   dummy2__31->GetXaxis()->SetTitleSize(0.08);
   dummy2__31->GetXaxis()->SetTickLength(0.01);
   dummy2__31->GetXaxis()->SetTitleOffset(0.5);
   dummy2__31->GetXaxis()->SetTitleFont(42);
   dummy2__31->GetYaxis()->SetBinLabel(1,"");
   dummy2__31->GetYaxis()->SetNdivisions(505);
   dummy2__31->GetYaxis()->SetLabelSize(0.035);
   dummy2__31->GetYaxis()->SetTitleSize(0.045);
   dummy2__31->GetYaxis()->SetTickLength(0);
   dummy2__31->GetYaxis()->SetTitleOffset(1.1);
   dummy2__31->GetYaxis()->SetTitleFont(42);
   dummy2__31->GetZaxis()->SetLabelFont(42);
   dummy2__31->GetZaxis()->SetLabelSize(0.035);
   dummy2__31->GetZaxis()->SetTitleSize(0.035);
   dummy2__31->GetZaxis()->SetTitleFont(42);
   dummy2__31->Draw("sameaxis");
   Width->Modified();
   canv->cd();
  
// ------------>Primitives in pad: SOB
   SOB = new TPad("SOB", "SOB",0.75,0,1,1);
   SOB->Draw();
   SOB->cd();
   SOB->Range(-0.07356322,-2.527027,0.845977,17.74324);
   SOB->SetFillColor(0);
   SOB->SetBorderMode(0);
   SOB->SetBorderSize(2);
   SOB->SetTickx(1);
   SOB->SetLeftMargin(0.08);
   SOB->SetRightMargin(0.05);
   SOB->SetTopMargin(0.16);
   SOB->SetFrameBorderMode(0);
   SOB->SetFrameBorderMode(0);
   
   TH2F *dummy3 = new TH2F("dummy3","",1,0,0.8,15,-0.5,14.5);
   dummy3->SetStats(0);
   dummy3->GetXaxis()->SetTitle("S/(S+B) in #pm #sigma_{eff}");
   dummy3->GetXaxis()->SetNdivisions(505);
   dummy3->GetXaxis()->SetLabelFont(42);
   dummy3->GetXaxis()->SetLabelOffset(-0.02);
   dummy3->GetXaxis()->SetLabelSize(0.07);
   dummy3->GetXaxis()->SetTitleSize(0.08);
   dummy3->GetXaxis()->SetTickLength(0.01);
   dummy3->GetXaxis()->SetTitleOffset(0.5);
   dummy3->GetXaxis()->SetTitleFont(42);
   dummy3->GetYaxis()->SetBinLabel(1,"");
   dummy3->GetYaxis()->SetNdivisions(505);
   dummy3->GetYaxis()->SetLabelSize(0.035);
   dummy3->GetYaxis()->SetTitleSize(0.045);
   dummy3->GetYaxis()->SetTickLength(0);
   dummy3->GetYaxis()->SetTitleOffset(1.1);
   dummy3->GetYaxis()->SetTitleFont(42);
   dummy3->GetZaxis()->SetLabelFont(42);
   dummy3->GetZaxis()->SetLabelSize(0.035);
   dummy3->GetZaxis()->SetTitleSize(0.035);
   dummy3->GetZaxis()->SetTitleFont(42);
   dummy3->Draw("");
   pave = new TPave(0,13.66,0.291264,14.34,0,"br");

   ci = TColor::GetColor("#cc3333");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#cc3333");
   pave->SetLineColor(ci);
   pave->SetLineWidth(2);
   pave->Draw();
   pave = new TPave(0,12.66,0.1077201,13.34,0,"br");

   ci = TColor::GetColor("#cc3333");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#cc3333");
   pave->SetLineColor(ci);
   pave->SetLineWidth(2);
   pave->Draw();
   pave = new TPave(0,11.66,0.06067372,12.34,0,"br");

   ci = TColor::GetColor("#cc3333");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#cc3333");
   pave->SetLineColor(ci);
   pave->SetLineWidth(2);
   pave->Draw();
   pave = new TPave(0,10.66,0.02829499,11.34,0,"br");

   ci = TColor::GetColor("#cc3333");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#cc3333");
   pave->SetLineColor(ci);
   pave->SetLineWidth(2);
   pave->Draw();
   pave = new TPave(0,9.66,0.01103313,10.34,0,"br");

   ci = TColor::GetColor("#cc3333");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#cc3333");
   pave->SetLineColor(ci);
   pave->SetLineWidth(2);
   pave->Draw();
   pave = new TPave(0,8.66,0.6076107,9.34,0,"br");

   ci = TColor::GetColor("#cc3333");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#cc3333");
   pave->SetLineColor(ci);
   pave->SetLineWidth(2);
   pave->Draw();
   pave = new TPave(0,7.66,0.3296469,8.34,0,"br");

   ci = TColor::GetColor("#cc3333");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#cc3333");
   pave->SetLineColor(ci);
   pave->SetLineWidth(2);
   pave->Draw();
   pave = new TPave(0,6.66,0.1170488,7.34,0,"br");

   ci = TColor::GetColor("#cc3333");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#cc3333");
   pave->SetLineColor(ci);
   pave->SetLineWidth(2);
   pave->Draw();
   pave = new TPave(0,5.66,0.4413076,6.34,0,"br");

   ci = TColor::GetColor("#cc3333");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#cc3333");
   pave->SetLineColor(ci);
   pave->SetLineWidth(2);
   pave->Draw();
   pave = new TPave(0,4.66,0.1395059,5.34,0,"br");

   ci = TColor::GetColor("#cc3333");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#cc3333");
   pave->SetLineColor(ci);
   pave->SetLineWidth(2);
   pave->Draw();
   pave = new TPave(0,3.66,0.229874,4.34,0,"br");

   ci = TColor::GetColor("#cc3333");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#cc3333");
   pave->SetLineColor(ci);
   pave->SetLineWidth(2);
   pave->Draw();
   pave = new TPave(0,2.66,0.2935418,3.34,0,"br");

   ci = TColor::GetColor("#cc3333");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#cc3333");
   pave->SetLineColor(ci);
   pave->SetLineWidth(2);
   pave->Draw();
   pave = new TPave(0,1.66,0.4454098,2.34,0,"br");

   ci = TColor::GetColor("#cc3333");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#cc3333");
   pave->SetLineColor(ci);
   pave->SetLineWidth(2);
   pave->Draw();
   pave = new TPave(0,0.66,0.2046433,1.34,0,"br");

   ci = TColor::GetColor("#cc3333");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#cc3333");
   pave->SetLineColor(ci);
   pave->SetLineWidth(2);
   pave->Draw();
   pave = new TPave(0,-0.34,0.0252124,0.34,0,"br");

   ci = TColor::GetColor("#cc3333");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#cc3333");
   pave->SetLineColor(ci);
   pave->SetLineWidth(2);
   pave->Draw();
   pave = new TPave(0.15,0.85,0.23,0.88,0,"brNDC");

   ci = TColor::GetColor("#cc3333");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#cc3333");
   pave->SetLineColor(ci);
   pave->SetLineWidth(2);
   pave->Draw();
      tex = new TLatex(0.25,0.865,"S/(S+B) in #pm #sigma_{eff}");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   line = new TLine(0,9.5,0.8,9.5);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,6.5,0.8,6.5);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,0.5,0.8,0.5);
   line->SetLineStyle(9);
   line->SetLineWidth(2);
   line->Draw();
   
   TH2F *dummy3__32 = new TH2F("dummy3__32","",1,0,0.8,15,-0.5,14.5);
   dummy3__32->SetDirectory(0);
   dummy3__32->SetStats(0);
   dummy3__32->GetXaxis()->SetTitle("S/(S+B) in #pm #sigma_{eff}");
   dummy3__32->GetXaxis()->SetNdivisions(505);
   dummy3__32->GetXaxis()->SetLabelFont(42);
   dummy3__32->GetXaxis()->SetLabelOffset(-0.02);
   dummy3__32->GetXaxis()->SetLabelSize(0.07);
   dummy3__32->GetXaxis()->SetTitleSize(0.08);
   dummy3__32->GetXaxis()->SetTickLength(0.01);
   dummy3__32->GetXaxis()->SetTitleOffset(0.5);
   dummy3__32->GetXaxis()->SetTitleFont(42);
   dummy3__32->GetYaxis()->SetBinLabel(1,"");
   dummy3__32->GetYaxis()->SetNdivisions(505);
   dummy3__32->GetYaxis()->SetLabelSize(0.035);
   dummy3__32->GetYaxis()->SetTitleSize(0.045);
   dummy3__32->GetYaxis()->SetTickLength(0);
   dummy3__32->GetYaxis()->SetTitleOffset(1.1);
   dummy3__32->GetYaxis()->SetTitleFont(42);
   dummy3__32->GetZaxis()->SetLabelFont(42);
   dummy3__32->GetZaxis()->SetLabelSize(0.035);
   dummy3__32->GetZaxis()->SetTitleSize(0.035);
   dummy3__32->GetZaxis()->SetTitleFont(42);
   dummy3__32->Draw("sameaxis");
   SOB->Modified();
   canv->cd();
      tex = new TLatex(0.11,0.935,"H#rightarrow#gamma#gamma (m_{H}=125 GeV) #sqrt{s}=7TeV L=19.7fb^{-1}");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(42);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
