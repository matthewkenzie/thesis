{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Apr  2 09:53:44 2014) by ROOT version5.34/03
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,700,500);
   c1->SetHighLightColor(2);
   c1->Range(-12.5,-7.125,112.5,14.125);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *d = new TH1F("d","",100,0,100);
   d->SetMinimum(-5);
   d->SetMaximum(12);
   d->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   d->SetLineColor(ci);
   d->GetXaxis()->SetTitle("f_{q#bar{q}} (%)");
   d->GetXaxis()->SetLabelFont(42);
   d->GetXaxis()->SetLabelSize(0.05);
   d->GetXaxis()->SetTitleSize(0.05);
   d->GetXaxis()->SetTitleOffset(0.9);
   d->GetXaxis()->SetTitleFont(42);
   d->GetYaxis()->SetTitle("-2#times ln (L_{2^{+}_{m}}/L_{0^{+}}) ");
   d->GetYaxis()->SetLabelFont(42);
   d->GetYaxis()->SetLabelSize(0.05);
   d->GetYaxis()->SetTitleSize(0.05);
   d->GetYaxis()->SetTitleOffset(0.9);
   d->GetYaxis()->SetTitleFont(42);
   d->GetZaxis()->SetLabelFont(42);
   d->GetZaxis()->SetLabelSize(0.035);
   d->GetZaxis()->SetTitleSize(0.035);
   d->GetZaxis()->SetTitleFont(42);
   d->Draw("AXIS");
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffff00");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   grae->SetLineColor(ci);
   grae->SetPoint(0,0,3.079001);
   grae->SetPointError(0,0,0,7.204001,7.795999);
   grae->SetPoint(1,25,1.716377);
   grae->SetPointError(1,0,0,5.391377,5.708623);
   grae->SetPoint(2,50,1.094548);
   grae->SetPointError(2,0,0,4.419548,4.530452);
   grae->SetPoint(3,75,1.268083);
   grae->SetPointError(3,0,0,4.593083,4.806917);
   grae->SetPoint(4,100,2.160119);
   grae->SetPointError(4,0,0,5.835119,6.314881);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,0,110);
   Graph_Graph1->SetMinimum(-5.625);
   Graph_Graph1->SetMaximum(12.375);
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
   
   grae->Draw("e3");
   
   grae = new TGraphAsymmErrors(5);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#00ff00");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ff00");
   grae->SetLineColor(ci);
   grae->SetPoint(0,0,3.079001);
   grae->SetPointError(0,0,0,3.604001,3.645999);
   grae->SetPoint(1,25,1.716377);
   grae->SetPointError(1,0,0,2.641377,2.658623);
   grae->SetPoint(2,50,1.094548);
   grae->SetPointError(2,0,0,2.119548,2.130452);
   grae->SetPoint(3,75,1.268083);
   grae->SetPointError(3,0,0,2.243083,2.256917);
   grae->SetPoint(4,100,2.160119);
   grae->SetPointError(4,0,0,2.935119,2.914881);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","",100,0,110);
   Graph_Graph2->SetMinimum(-1.8);
   Graph_Graph2->SetMaximum(7.5);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph2);
   
   grae->Draw("e3");
   
   TGraph *graph = new TGraph(5);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(22);
   graph->SetPoint(0,0,-2.626360823);
   graph->SetPoint(1,25,-1.444325435);
   graph->SetPoint(2,50,-0.7959931074);
   graph->SetPoint(3,75,-0.8851469382);
   graph->SetPoint(4,100,-1.541330962);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,0,110);
   Graph_Graph1->SetMinimum(-2.809398);
   Graph_Graph1->SetMaximum(-0.6129563);
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
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("lp");
   
   graph = new TGraph(5);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   graph->SetPoint(0,0,3.079000717);
   graph->SetPoint(1,25,1.716376644);
   graph->SetPoint(2,50,1.094548482);
   graph->SetPoint(3,75,1.268083026);
   graph->SetPoint(4,100,2.160119042);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","",100,0,110);
   Graph_Graph2->SetMinimum(0.8961033);
   Graph_Graph2->SetMaximum(3.277446);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2);
   
   graph->Draw("lp");
   
   graph = new TGraph(5);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,0,3.791098118);
   graph->SetPoint(1,25,2.344347);
   graph->SetPoint(2,50,1.636468768);
   graph->SetPoint(3,75,1.728133678);
   graph->SetPoint(4,100,2.525061846);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","",100,0,110);
   Graph_Graph3->SetMinimum(1.421006);
   Graph_Graph3->SetMaximum(4.006561);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3->SetLineColor(ci);
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph3);
   
   graph->Draw("lp");
   
   TLegend *leg = new TLegend(0.6,0.65,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","0^{+}","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("","#pm 1#sigma expected","f");

   ci = TColor::GetColor("#00ff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("","#pm 2#sigma expected","f");

   ci = TColor::GetColor("#ffff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ffff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("","2^{+}_{m}","lp");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("","Observed","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TF1 *f = new TF1("f","0.",0,100);
   f->SetFillColor(19);
   f->SetFillStyle(0);
   f->SetLineWidth(2);
   f->SetLineStyle(2);
   f->GetXaxis()->SetLabelFont(42);
   f->GetXaxis()->SetLabelSize(0.035);
   f->GetXaxis()->SetTitleSize(0.035);
   f->GetXaxis()->SetTitleFont(42);
   f->GetYaxis()->SetLabelFont(42);
   f->GetYaxis()->SetLabelSize(0.035);
   f->GetYaxis()->SetTitleSize(0.035);
   f->GetYaxis()->SetTitleFont(42);
   f->Draw("same");
   
   TPaveText *pt = new TPaveText(0.1,0.91,0.45,0.99,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextAlign(12);
   pt->SetTextSize(0.04);
   TText *text = pt->AddText("CMS");
   pt->Draw();
   
   pt = new TPaveText(0.75,0.9,0.9,0.99,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextAlign(32);
   pt->SetTextSize(0.04);
   text = pt->AddText("#splitline{#sqrt{s} = 7 TeV, L = 5.1 fb^{-1}}{#sqrt{s} = 8 TeV, L = 19.7 fb^{-1}}");
   pt->Draw();
      tex = new TLatex(0.2,0.8,"X#rightarrow#gamma#gamma");
tex->SetNDC();
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *d = new TH1F("d","",100,0,100);
   d->SetMinimum(-5);
   d->SetMaximum(12);
   d->SetStats(0);

   ci = TColor::GetColor("#000099");
   d->SetLineColor(ci);
   d->GetXaxis()->SetTitle("f_{q#bar{q}} (%)");
   d->GetXaxis()->SetLabelFont(42);
   d->GetXaxis()->SetLabelSize(0.05);
   d->GetXaxis()->SetTitleSize(0.05);
   d->GetXaxis()->SetTitleOffset(0.9);
   d->GetXaxis()->SetTitleFont(42);
   d->GetYaxis()->SetTitle("-2#times ln (L_{2^{+}_{m}}/L_{0^{+}}) ");
   d->GetYaxis()->SetLabelFont(42);
   d->GetYaxis()->SetLabelSize(0.05);
   d->GetYaxis()->SetTitleSize(0.05);
   d->GetYaxis()->SetTitleOffset(0.9);
   d->GetYaxis()->SetTitleFont(42);
   d->GetZaxis()->SetLabelFont(42);
   d->GetZaxis()->SetLabelSize(0.035);
   d->GetZaxis()->SetTitleSize(0.035);
   d->GetZaxis()->SetTitleFont(42);
   d->Draw("AXISGsame");
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
