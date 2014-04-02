{
//=========Macro generated from canvas: canv/canv
//=========  (Wed Apr  2 19:38:07 2014) by ROOT version5.34/03
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
   Plots->Range(-35.71429,-2.121622,107.1429,14.09459);
   Plots->SetFillColor(0);
   Plots->SetBorderMode(0);
   Plots->SetBorderSize(2);
   Plots->SetTickx(1);
   Plots->SetLeftMargin(0.25);
   Plots->SetRightMargin(0.05);
   Plots->SetTopMargin(0.16);
   Plots->SetFrameBorderMode(0);
   Plots->SetFrameBorderMode(0);
   
   TH2F *dummy = new TH2F("dummy","",10,0,100,12,-0.5,11.5);
   dummy->SetStats(0);
   dummy->SetFillColor(3);
   dummy->GetXaxis()->SetTitle("Signal Fraction (%)");
   dummy->GetXaxis()->SetLabelFont(42);
   dummy->GetXaxis()->SetLabelSize(0.045);
   dummy->GetXaxis()->SetTitleSize(0.045);
   dummy->GetXaxis()->SetTickLength(0.01);
   dummy->GetXaxis()->SetTitleOffset(0.95);
   dummy->GetXaxis()->SetTitleFont(42);
   dummy->GetYaxis()->SetBinLabel(12,"Untagged 0");
   dummy->GetYaxis()->SetBinLabel(11,"Untagged 1");
   dummy->GetYaxis()->SetBinLabel(10,"Untagged 2");
   dummy->GetYaxis()->SetBinLabel(9,"Untagged 3");
   dummy->GetYaxis()->SetBinLabel(8,"Dijet Tag 0");
   dummy->GetYaxis()->SetBinLabel(7,"Dijet Tag 1");
   dummy->GetYaxis()->SetBinLabel(6,"VH Lepton Tight");
   dummy->GetYaxis()->SetBinLabel(5,"VH Lepton Loose");
   dummy->GetYaxis()->SetBinLabel(4,"VH MET Tag");
   dummy->GetYaxis()->SetBinLabel(3,"VH Dijet Tag");
   dummy->GetYaxis()->SetBinLabel(2,"ttH Tags");
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
   TPave *pave = new TPave(0,10.66,79.84911,11.34,0,"br");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#006600");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(79.84911,10.66,89.75967,11.34,0,"br");

   ci = TColor::GetColor("#990000");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(89.75967,10.66,95.74823,11.34,0,"br");

   ci = TColor::GetColor("#009999");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(95.74823,10.66,99.23685,11.34,0,"br");

   ci = TColor::GetColor("#003399");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(99.23685,10.66,100,11.34,0,"br");

   ci = TColor::GetColor("#ff6600");
   pave->SetFillColor(ci);
   pave->Draw();
   
   TPaveText *pt = new TPaveText(0.5,10.66,80,11.34,"br");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetLineColor(0);
   pt->SetTextAlign(12);
   pt->SetTextColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.035);
   TText *text = pt->AddText("5.8 total expected signal");
   pt->Draw();
   pave = new TPave(0,9.66,91.88805,10.34,0,"br");

   ci = TColor::GetColor("#006600");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(91.88805,9.66,96.11075,10.34,0,"br");

   ci = TColor::GetColor("#990000");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(96.11075,9.66,98.48002,10.34,0,"br");

   ci = TColor::GetColor("#009999");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(98.48002,9.66,99.81712,10.34,0,"br");

   ci = TColor::GetColor("#003399");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(99.81712,9.66,100,10.34,0,"br");

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
   text = pt->AddText("22.7 total expected signal");
   pt->Draw();
   pave = new TPave(0,8.66,91.91209,9.34,0,"br");

   ci = TColor::GetColor("#006600");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(91.91209,8.66,96.05027,9.34,0,"br");

   ci = TColor::GetColor("#990000");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(96.05027,8.66,98.48206,9.34,0,"br");

   ci = TColor::GetColor("#009999");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(98.48206,8.66,99.83336,9.34,0,"br");

   ci = TColor::GetColor("#003399");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(99.83336,8.66,100,9.34,0,"br");

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
   text = pt->AddText("27.1 total expected signal");
   pt->Draw();
   pave = new TPave(0,7.66,92.07935,8.34,0,"br");

   ci = TColor::GetColor("#006600");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(92.07935,7.66,96.08163,8.34,0,"br");

   ci = TColor::GetColor("#990000");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(96.08163,7.66,98.45483,8.34,0,"br");

   ci = TColor::GetColor("#009999");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(98.45483,7.66,99.77085,8.34,0,"br");

   ci = TColor::GetColor("#003399");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(99.77085,7.66,100,8.34,0,"br");

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
   text = pt->AddText("34.1 total expected signal");
   pt->Draw();
   pave = new TPave(0,6.66,19.28729,7.34,0,"br");

   ci = TColor::GetColor("#006600");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(19.28729,6.66,99.41242,7.34,0,"br");

   ci = TColor::GetColor("#990000");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(99.41242,6.66,99.70872,7.34,0,"br");

   ci = TColor::GetColor("#009999");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(99.70872,6.66,99.91353,7.34,0,"br");

   ci = TColor::GetColor("#003399");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(99.91353,6.66,100,7.34,0,"br");

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
   text = pt->AddText("1.6 total expected signal");
   pt->Draw();
   pave = new TPave(0,5.66,38.09451,6.34,0,"br");

   ci = TColor::GetColor("#006600");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(38.09451,5.66,97.6437,6.34,0,"br");

   ci = TColor::GetColor("#990000");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(97.6437,5.66,98.86176,6.34,0,"br");

   ci = TColor::GetColor("#009999");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(98.86176,5.66,99.57865,6.34,0,"br");

   ci = TColor::GetColor("#003399");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(99.57865,5.66,100,6.34,0,"br");

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
   text = pt->AddText("3.0 total expected signal");
   pt->Draw();
   pave = new TPave(0,4.66,0.006742953,5.34,0,"br");

   ci = TColor::GetColor("#006600");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(0.006742953,4.66,0.05305996,5.34,0,"br");

   ci = TColor::GetColor("#990000");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(0.05305996,4.66,77.26708,5.34,0,"br");

   ci = TColor::GetColor("#009999");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(77.26708,4.66,97.83733,5.34,0,"br");

   ci = TColor::GetColor("#003399");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(97.83733,4.66,99.99999,5.34,0,"br");

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
   text = pt->AddText("0.3 total expected signal");
   pt->Draw();
   pave = new TPave(0,3.66,3.555022,4.34,0,"br");

   ci = TColor::GetColor("#006600");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(3.555022,3.66,4.686416,4.34,0,"br");

   ci = TColor::GetColor("#990000");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(4.686416,3.66,83.83388,4.34,0,"br");

   ci = TColor::GetColor("#009999");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(83.83388,3.66,99.04964,4.34,0,"br");

   ci = TColor::GetColor("#003399");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(99.04964,3.66,100,4.34,0,"br");

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
   text = pt->AddText("0.2 total expected signal");
   pt->Draw();
   pave = new TPave(0,2.66,4.536174,3.34,0,"br");

   ci = TColor::GetColor("#006600");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(4.536174,2.66,5.683818,3.34,0,"br");

   ci = TColor::GetColor("#990000");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(5.683818,2.66,47.19204,3.34,0,"br");

   ci = TColor::GetColor("#009999");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(47.19204,2.66,91.7503,3.34,0,"br");

   ci = TColor::GetColor("#003399");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(91.7503,2.66,100,3.34,0,"br");

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
   text = pt->AddText("0.3 total expected signal");
   pt->Draw();
   pave = new TPave(0,1.66,27.06231,2.34,0,"br");

   ci = TColor::GetColor("#006600");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(27.06231,1.66,29.87288,2.34,0,"br");

   ci = TColor::GetColor("#990000");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(29.87288,1.66,73.54859,2.34,0,"br");

   ci = TColor::GetColor("#009999");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(73.54859,1.66,97.87,2.34,0,"br");

   ci = TColor::GetColor("#003399");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(97.87,1.66,99.99999,2.34,0,"br");

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
   text = pt->AddText("0.4 total expected signal");
   pt->Draw();
   pave = new TPave(0,0.66,3.051905,1.34,0,"br");

   ci = TColor::GetColor("#006600");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(3.051905,0.66,4.130076,1.34,0,"br");

   ci = TColor::GetColor("#990000");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(4.130076,0.66,6.347132,1.34,0,"br");

   ci = TColor::GetColor("#009999");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(6.347132,0.66,7.674886,1.34,0,"br");

   ci = TColor::GetColor("#003399");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(7.674886,0.66,100,1.34,0,"br");

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
   text = pt->AddText("0.2 total expected signal");
   pt->Draw();
   pave = new TPave(0,-0.34,87.07816,0.34,0,"br");

   ci = TColor::GetColor("#006600");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(87.07816,-0.34,94.53848,0.34,0,"br");

   ci = TColor::GetColor("#990000");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(94.53848,-0.34,97.75991,0.34,0,"br");

   ci = TColor::GetColor("#009999");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(97.75991,-0.34,99.50124,0.34,0,"br");

   ci = TColor::GetColor("#003399");
   pave->SetFillColor(ci);
   pave->Draw();
   pave = new TPave(99.50124,-0.34,100,0.34,0,"br");

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
   text = pt->AddText("95.8 total expected signal");
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
   TLine *line = new TLine(0,7.5,100,7.5);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,5.5,100,5.5);
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
   Width->Range(-0.2758621,-2.121622,3.172414,14.09459);
   Width->SetFillColor(0);
   Width->SetBorderMode(0);
   Width->SetBorderSize(2);
   Width->SetTickx(1);
   Width->SetLeftMargin(0.08);
   Width->SetRightMargin(0.05);
   Width->SetTopMargin(0.16);
   Width->SetFrameBorderMode(0);
   Width->SetFrameBorderMode(0);
   
   TH2F *dummy2 = new TH2F("dummy2","",1,0,3,12,-0.5,11.5);
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
   pave = new TPave(0,10.66,1.111,11.34,1,"br");

   ci = TColor::GetColor("#6666ff");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,10.66,0.9780426,11.34,1,"br");

   ci = TColor::GetColor("#ff0000");
   pave->SetFillColor(ci);
   pave->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,9.66,1.275,10.34,1,"br");

   ci = TColor::GetColor("#6666ff");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,9.66,1.093617,10.34,1,"br");

   ci = TColor::GetColor("#ff0000");
   pave->SetFillColor(ci);
   pave->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,8.66,1.779,9.34,1,"br");

   ci = TColor::GetColor("#6666ff");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,8.66,1.40034,9.34,1,"br");

   ci = TColor::GetColor("#ff0000");
   pave->SetFillColor(ci);
   pave->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,7.66,2.357,8.34,1,"br");

   ci = TColor::GetColor("#6666ff");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,7.66,2.013106,8.34,1,"br");

   ci = TColor::GetColor("#ff0000");
   pave->SetFillColor(ci);
   pave->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,6.66,1.415,7.34,1,"br");

   ci = TColor::GetColor("#6666ff");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,6.66,1.167489,7.34,1,"br");

   ci = TColor::GetColor("#ff0000");
   pave->SetFillColor(ci);
   pave->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,5.66,1.648,6.34,1,"br");

   ci = TColor::GetColor("#6666ff");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,5.66,1.315574,6.34,1,"br");

   ci = TColor::GetColor("#ff0000");
   pave->SetFillColor(ci);
   pave->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,4.66,1.615,5.34,1,"br");

   ci = TColor::GetColor("#6666ff");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,4.66,1.314723,5.34,1,"br");

   ci = TColor::GetColor("#ff0000");
   pave->SetFillColor(ci);
   pave->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,3.66,1.626,4.34,1,"br");

   ci = TColor::GetColor("#6666ff");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,3.66,1.316936,4.34,1,"br");

   ci = TColor::GetColor("#ff0000");
   pave->SetFillColor(ci);
   pave->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,2.66,1.598,3.34,1,"br");

   ci = TColor::GetColor("#6666ff");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,2.66,1.136851,3.34,1,"br");

   ci = TColor::GetColor("#ff0000");
   pave->SetFillColor(ci);
   pave->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,1.66,1.544,2.34,1,"br");

   ci = TColor::GetColor("#6666ff");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,1.66,1.238638,2.34,1,"br");

   ci = TColor::GetColor("#ff0000");
   pave->SetFillColor(ci);
   pave->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,0.66,1.405,1.34,1,"br");

   ci = TColor::GetColor("#6666ff");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,0.66,1.12766,1.34,1,"br");

   ci = TColor::GetColor("#ff0000");
   pave->SetFillColor(ci);
   pave->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,-0.34,1.769,0.34,1,"br");

   ci = TColor::GetColor("#6666ff");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   pave->SetLineColor(ci);
   pave->Draw();
   pave = new TPave(0,-0.34,1.338894,0.34,1,"br");

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
   line = new TLine(0,7.5,3,7.5);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,5.5,3,5.5);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,0.5,3,0.5);
   line->SetLineStyle(9);
   line->SetLineWidth(2);
   line->Draw();
   
   TH2F *dummy2__57 = new TH2F("dummy2__57","",1,0,3,12,-0.5,11.5);
   dummy2__57->SetDirectory(0);
   dummy2__57->SetStats(0);
   dummy2__57->GetXaxis()->SetTitle("Width (GeV)");
   dummy2__57->GetXaxis()->SetNdivisions(505);
   dummy2__57->GetXaxis()->SetLabelFont(42);
   dummy2__57->GetXaxis()->SetLabelOffset(-0.02);
   dummy2__57->GetXaxis()->SetLabelSize(0.07);
   dummy2__57->GetXaxis()->SetTitleSize(0.08);
   dummy2__57->GetXaxis()->SetTickLength(0.01);
   dummy2__57->GetXaxis()->SetTitleOffset(0.5);
   dummy2__57->GetXaxis()->SetTitleFont(42);
   dummy2__57->GetYaxis()->SetBinLabel(1,"");
   dummy2__57->GetYaxis()->SetNdivisions(505);
   dummy2__57->GetYaxis()->SetLabelSize(0.035);
   dummy2__57->GetYaxis()->SetTitleSize(0.045);
   dummy2__57->GetYaxis()->SetTickLength(0);
   dummy2__57->GetYaxis()->SetTitleOffset(1.1);
   dummy2__57->GetYaxis()->SetTitleFont(42);
   dummy2__57->GetZaxis()->SetLabelFont(42);
   dummy2__57->GetZaxis()->SetLabelSize(0.035);
   dummy2__57->GetZaxis()->SetTitleSize(0.035);
   dummy2__57->GetZaxis()->SetTitleFont(42);
   dummy2__57->Draw("sameaxis");
   Width->Modified();
   canv->cd();
  
// ------------>Primitives in pad: SOB
   SOB = new TPad("SOB", "SOB",0.75,0,1,1);
   SOB->Draw();
   SOB->cd();
   SOB->Range(-0.05517241,-2.121622,0.6344828,14.09459);
   SOB->SetFillColor(0);
   SOB->SetBorderMode(0);
   SOB->SetBorderSize(2);
   SOB->SetTickx(1);
   SOB->SetLeftMargin(0.08);
   SOB->SetRightMargin(0.05);
   SOB->SetTopMargin(0.16);
   SOB->SetFrameBorderMode(0);
   SOB->SetFrameBorderMode(0);
   
   TH2F *dummy3 = new TH2F("dummy3","",1,0,0.6,12,-0.5,11.5);
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
   pave = new TPave(6.938894e-18,10.66,0.1395084,11.34,0,"br");

   ci = TColor::GetColor("#cc3333");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#cc3333");
   pave->SetLineColor(ci);
   pave->SetLineWidth(2);
   pave->Draw();
   pave = new TPave(6.938894e-18,9.66,0.0798512,10.34,0,"br");

   ci = TColor::GetColor("#cc3333");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#cc3333");
   pave->SetLineColor(ci);
   pave->SetLineWidth(2);
   pave->Draw();
   pave = new TPave(6.938894e-18,8.66,0.03714095,9.34,0,"br");

   ci = TColor::GetColor("#cc3333");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#cc3333");
   pave->SetLineColor(ci);
   pave->SetLineWidth(2);
   pave->Draw();
   pave = new TPave(6.938894e-18,7.66,0.01540034,8.34,0,"br");

   ci = TColor::GetColor("#cc3333");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#cc3333");
   pave->SetLineColor(ci);
   pave->SetLineWidth(2);
   pave->Draw();
   pave = new TPave(6.938894e-18,6.66,0.4339596,7.34,0,"br");

   ci = TColor::GetColor("#cc3333");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#cc3333");
   pave->SetLineColor(ci);
   pave->SetLineWidth(2);
   pave->Draw();
   pave = new TPave(6.938894e-18,5.66,0.1455943,6.34,0,"br");

   ci = TColor::GetColor("#cc3333");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#cc3333");
   pave->SetLineColor(ci);
   pave->SetLineWidth(2);
   pave->Draw();
   pave = new TPave(6.938894e-18,4.66,0.4067653,5.34,0,"br");

   ci = TColor::GetColor("#cc3333");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#cc3333");
   pave->SetLineColor(ci);
   pave->SetLineWidth(2);
   pave->Draw();
   pave = new TPave(6.938894e-18,3.66,0.1631415,4.34,0,"br");

   ci = TColor::GetColor("#cc3333");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#cc3333");
   pave->SetLineColor(ci);
   pave->SetLineWidth(2);
   pave->Draw();
   pave = new TPave(6.938894e-18,2.66,0.2689392,3.34,0,"br");

   ci = TColor::GetColor("#cc3333");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#cc3333");
   pave->SetLineColor(ci);
   pave->SetLineWidth(2);
   pave->Draw();
   pave = new TPave(6.938894e-18,1.66,0.1453148,2.34,0,"br");

   ci = TColor::GetColor("#cc3333");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#cc3333");
   pave->SetLineColor(ci);
   pave->SetLineWidth(2);
   pave->Draw();
   pave = new TPave(6.938894e-18,0.66,0.2635161,1.34,0,"br");

   ci = TColor::GetColor("#cc3333");
   pave->SetFillColor(ci);

   ci = TColor::GetColor("#cc3333");
   pave->SetLineColor(ci);
   pave->SetLineWidth(2);
   pave->Draw();
   pave = new TPave(6.938894e-18,-0.34,0.0290682,0.34,0,"br");

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
   line = new TLine(0,7.5,0.6,7.5);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,5.5,0.6,5.5);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0,0.5,0.6,0.5);
   line->SetLineStyle(9);
   line->SetLineWidth(2);
   line->Draw();
   
   TH2F *dummy3__58 = new TH2F("dummy3__58","",1,0,0.6,12,-0.5,11.5);
   dummy3__58->SetDirectory(0);
   dummy3__58->SetStats(0);
   dummy3__58->GetXaxis()->SetTitle("S/(S+B) in #pm #sigma_{eff}");
   dummy3__58->GetXaxis()->SetNdivisions(505);
   dummy3__58->GetXaxis()->SetLabelFont(42);
   dummy3__58->GetXaxis()->SetLabelOffset(-0.02);
   dummy3__58->GetXaxis()->SetLabelSize(0.07);
   dummy3__58->GetXaxis()->SetTitleSize(0.08);
   dummy3__58->GetXaxis()->SetTickLength(0.01);
   dummy3__58->GetXaxis()->SetTitleOffset(0.5);
   dummy3__58->GetXaxis()->SetTitleFont(42);
   dummy3__58->GetYaxis()->SetBinLabel(1,"");
   dummy3__58->GetYaxis()->SetNdivisions(505);
   dummy3__58->GetYaxis()->SetLabelSize(0.035);
   dummy3__58->GetYaxis()->SetTitleSize(0.045);
   dummy3__58->GetYaxis()->SetTickLength(0);
   dummy3__58->GetYaxis()->SetTitleOffset(1.1);
   dummy3__58->GetYaxis()->SetTitleFont(42);
   dummy3__58->GetZaxis()->SetLabelFont(42);
   dummy3__58->GetZaxis()->SetLabelSize(0.035);
   dummy3__58->GetZaxis()->SetTitleSize(0.035);
   dummy3__58->GetZaxis()->SetTitleFont(42);
   dummy3__58->Draw("sameaxis");
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
