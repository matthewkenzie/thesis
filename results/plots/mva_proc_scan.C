{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr  4 15:02:10 2014) by ROOT version5.34/18
   TCanvas *c = new TCanvas("c", "c",1437,44,700,700);
   c->SetHighLightColor(2);
   c->Range(-2.441177,-0.5,6.970588,4.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.05);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH2F *dummy__1 = new TH2F("dummy__1","",1,-1.5,6.5,4,0,4);
   dummy__1->SetDirectory(0);
   dummy__1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#009900");
   dummy__1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   dummy__1->SetLineColor(ci);
   dummy__1->GetXaxis()->SetTitle("#sigma/#sigma_{SM}");
   dummy__1->GetXaxis()->SetLabelFont(42);
   dummy__1->GetXaxis()->SetLabelSize(0.035);
   dummy__1->GetXaxis()->SetTitleFont(42);
   dummy__1->GetYaxis()->SetBinLabel(1,"ggH");
   dummy__1->GetYaxis()->SetBinLabel(2,"VBF");
   dummy__1->GetYaxis()->SetBinLabel(3,"VH");
   dummy__1->GetYaxis()->SetBinLabel(4,"ttH");
   dummy__1->GetYaxis()->SetLabelFont(42);
   dummy__1->GetYaxis()->SetLabelSize(0.038);
   dummy__1->GetYaxis()->SetTitleSize(0.035);
   dummy__1->GetYaxis()->SetTitleFont(42);
   dummy__1->GetZaxis()->SetLabelFont(42);
   dummy__1->GetZaxis()->SetLabelSize(0.035);
   dummy__1->GetZaxis()->SetTitleSize(0.035);
   dummy__1->GetZaxis()->SetTitleFont(42);
   dummy__1->Draw("");
   TBox *box = new TBox(0.913335,0,1.404494,4);

   ci = TColor::GetColor("#009900");
   box->SetFillColor(ci);
   box->SetLineStyle(0);
   box->Draw();
   TLine *line = new TLine(1.140982,0,1.140982,4);
   line->SetLineWidth(2);
   line->Draw();
   TLatex *   tex = new TLatex(-0.9,0.7,"1.12^{#font[122]{+}0.37}_{#font[122]{-}0.32}");
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(-0.9,1.7,"1.58^{#font[122]{+}0.77}_{#font[122]{-}0.68}");
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(-0.9,2.7,"-0.16^{#font[122]{+}1.16}_{#font[122]{-}0.79}");
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(-0.9,3.7,"2.69^{#font[122]{+}2.51}_{#font[122]{-}1.81}");
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(3,0.5,"#mu_{combined} = 1.14^{#font[122]{+}0.26}_{#font[122]{-}0.23}");
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(21);
   grae->SetMarkerSize(1.5);
   grae->SetPoint(0,1.121332,0.5);
   grae->SetPointError(0,0.3164924,0.3678819,0,0);
   grae->SetPoint(1,1.575731,1.5);
   grae->SetPointError(1,0.6800762,0.7701341,0,0);
   grae->SetPoint(2,-0.1626297,2.5);
   grae->SetPointError(2,0.7873703,1.158178,0,0);
   grae->SetPoint(3,2.685489,3.5);
   grae->SetPointError(3,1.805553,2.513409,0,0);
   
   TH1F *Graph_Graph_Graph11 = new TH1F("Graph_Graph_Graph11","",100,-1.56489,5.813787);
   Graph_Graph_Graph11->SetMinimum(0.2);
   Graph_Graph_Graph11->SetMaximum(3.8);
   Graph_Graph_Graph11->SetDirectory(0);
   Graph_Graph_Graph11->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph11->SetLineColor(ci);
   Graph_Graph_Graph11->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph11->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph11->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph11->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph11->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph11->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph11);
   
   grae->Draw("ep");
   
   TLegend *leg = new TLegend(0.6,0.41,0.89,0.74,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("dummy","Combined #pm 1#sigma","LF");

   ci = TColor::GetColor("#009900");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","Per process #pm 1#sigma","LP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.48,0.92,"#sqrt{s}=7TeV L=5.1fb^{-1}, #sqrt{s}=8TeV L=19.7fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
