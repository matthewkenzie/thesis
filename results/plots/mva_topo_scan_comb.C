{
//=========Macro generated from canvas: c/c
//=========  (Mon Mar 24 09:48:38 2014) by ROOT version5.34/03
   TCanvas *c = new TCanvas("c", "c",0,0,700,700);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-1.754473,-0.5,8.01343,4.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0.18);
   c->SetRightMargin(0.05);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH2F *dummy = new TH2F("dummy","",1,-1.5,6.5,4,0,4);
   dummy->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#009900");
   dummy->SetFillColor(ci);
   dummy->GetXaxis()->SetTitle("#sigma/#sigma_{SM}");
   dummy->GetXaxis()->SetLabelFont(42);
   dummy->GetXaxis()->SetLabelSize(0.035);
   dummy->GetXaxis()->SetTitleSize(0.035);
   dummy->GetXaxis()->SetTitleFont(42);
   dummy->GetYaxis()->SetBinLabel(1,"Untagged");
   dummy->GetYaxis()->SetBinLabel(2,"VBF Tagged");
   dummy->GetYaxis()->SetBinLabel(3,"VH Tagged");
   dummy->GetYaxis()->SetBinLabel(4,"ttH Tagged");
   dummy->GetYaxis()->SetLabelSize(0.038);
   dummy->GetYaxis()->SetTitleSize(0.035);
   dummy->GetYaxis()->SetTitleFont(42);
   dummy->GetZaxis()->SetLabelFont(42);
   dummy->GetZaxis()->SetLabelSize(0.035);
   dummy->GetZaxis()->SetTitleSize(0.035);
   dummy->GetZaxis()->SetTitleFont(42);
   dummy->Draw("");
   TBox *box = new TBox(0.913335,0,1.404494,4);

   ci = TColor::GetColor("#009900");
   box->SetFillColor(ci);
   box->SetLineStyle(0);
   box->Draw();
   TLine *line = new TLine(1.140982,0,1.140982,4);
   line->SetLineWidth(2);
   line->Draw();
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(21);
   grae->SetMarkerSize(1.5);
   grae->SetPoint(0,1.03,0.5);
   grae->SetPointError(0,0.2481942,0.3142837,0,0);
   grae->SetPoint(1,1.54,1.5);
   grae->SetPointError(1,0.4702273,0.5364767,0,0);
   grae->SetPoint(2,0.2575,2.5);
   grae->SetPointError(2,0.245,0.9452167,0,0);
   grae->SetPoint(3,2.613191,3.5);
   grae->SetPointError(3,1.728897,2.403499,0,0);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,0,5.517109);
   Graph_Graph1->SetMinimum(0.2);
   Graph_Graph1->SetMaximum(3.8);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph1);
   
   grae->Draw("ep");
   
   TLegend *leg = new TLegend(0.68,0.5,0.94,0.68,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("dummy","Combined #pm 1#sigma","LF");

   ci = TColor::GetColor("#009900");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("","Per category #pm 1#sigma","LP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.5);
   leg->Draw();
   TLatex *   tex = new TLatex(0.12,0.92,"CMS Preliminary");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.72,0.94,"#splitline{#sqrt{s}=7TeV L=5.1fb^{-1}}{#sqrt{s}=8TeV L=19.7fb^{-1}}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}