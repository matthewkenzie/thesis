{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Apr  2 09:49:32 2014) by ROOT version5.34/03
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,700,500);
   c1->SetHighLightColor(2);
   c1->Range(-0.125,-1,1.125,4);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH2F *dummy = new TH2F("dummy","",1,0,1,1,-0.5,3.5);
   dummy->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   dummy->SetLineColor(ci);
   dummy->GetXaxis()->SetTitle("|cos#theta*|");
   dummy->GetXaxis()->SetLabelFont(42);
   dummy->GetXaxis()->SetLabelSize(0.035);
   dummy->GetXaxis()->SetTitleSize(0.035);
   dummy->GetXaxis()->SetTitleFont(42);
   dummy->GetYaxis()->SetTitle("#sigma/#sigma_{SM}");
   dummy->GetYaxis()->SetLabelFont(42);
   dummy->GetYaxis()->SetLabelSize(0.035);
   dummy->GetYaxis()->SetTitleSize(0.035);
   dummy->GetYaxis()->SetTitleFont(42);
   dummy->GetZaxis()->SetLabelFont(42);
   dummy->GetZaxis()->SetLabelSize(0.035);
   dummy->GetZaxis()->SetTitleSize(0.035);
   dummy->GetZaxis()->SetTitleFont(42);
   dummy->Draw("AXISG");
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5);
   grae->SetName("Data");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,0.1,1.132694);
   grae->SetPointError(0,0,0,0.4282843,0.4792552);
   grae->SetPoint(1,0.2875,1.481415);
   grae->SetPointError(1,0,0,0.5744885,0.6115909);
   grae->SetPoint(2,0.4625,1.671589);
   grae->SetPointError(2,0,0,0.6250745,0.6658648);
   grae->SetPoint(3,0.65,0.671602);
   grae->SetPointError(3,0,0,0.7403724,0.7878143);
   grae->SetPoint(4,0.875,1.733639);
   grae->SetPointError(4,0,0,1.444888,1.33443);
   
   TH1F *Graph_Data1 = new TH1F("Graph_Data1","",100,0.0225,0.9525);
   Graph_Data1->SetMinimum(-0.3824544);
   Graph_Data1->SetMaximum(3.381754);
   Graph_Data1->SetDirectory(0);
   Graph_Data1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Data1->SetLineColor(ci);
   Graph_Data1->GetXaxis()->SetLabelFont(42);
   Graph_Data1->GetXaxis()->SetLabelSize(0.035);
   Graph_Data1->GetXaxis()->SetTitleSize(0.035);
   Graph_Data1->GetXaxis()->SetTitleFont(42);
   Graph_Data1->GetYaxis()->SetLabelFont(42);
   Graph_Data1->GetYaxis()->SetLabelSize(0.035);
   Graph_Data1->GetYaxis()->SetTitleSize(0.035);
   Graph_Data1->GetYaxis()->SetTitleFont(42);
   Graph_Data1->GetZaxis()->SetLabelFont(42);
   Graph_Data1->GetZaxis()->SetLabelSize(0.035);
   Graph_Data1->GetZaxis()->SetTitleSize(0.035);
   Graph_Data1->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Data1);
   
   grae->Draw("pe");
   
   grae = new TGraphAsymmErrors(5);
   grae->SetName("Grav50GG50QQ");
   grae->SetTitle("");
   grae->SetFillColor(1);

   ci = TColor::GetColor("#ff00ff");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#ff00ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(33);
   grae->SetPoint(0,0.1,1.068365);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.2875,1.197239);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,0.4625,1.398209);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,0.65,1.641504);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,0.875,1.22656);
   grae->SetPointError(4,0,0,0,0);
   
   TH1F *Graph_Grav50GG50QQ2 = new TH1F("Graph_Grav50GG50QQ2","",100,0.0225,0.9525);
   Graph_Grav50GG50QQ2->SetMinimum(1.011051);
   Graph_Grav50GG50QQ2->SetMaximum(1.698818);
   Graph_Grav50GG50QQ2->SetDirectory(0);
   Graph_Grav50GG50QQ2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Grav50GG50QQ2->SetLineColor(ci);
   Graph_Grav50GG50QQ2->GetXaxis()->SetLabelFont(42);
   Graph_Grav50GG50QQ2->GetXaxis()->SetLabelSize(0.035);
   Graph_Grav50GG50QQ2->GetXaxis()->SetTitleSize(0.035);
   Graph_Grav50GG50QQ2->GetXaxis()->SetTitleFont(42);
   Graph_Grav50GG50QQ2->GetYaxis()->SetLabelFont(42);
   Graph_Grav50GG50QQ2->GetYaxis()->SetLabelSize(0.035);
   Graph_Grav50GG50QQ2->GetYaxis()->SetTitleSize(0.035);
   Graph_Grav50GG50QQ2->GetYaxis()->SetTitleFont(42);
   Graph_Grav50GG50QQ2->GetZaxis()->SetLabelFont(42);
   Graph_Grav50GG50QQ2->GetZaxis()->SetLabelSize(0.035);
   Graph_Grav50GG50QQ2->GetZaxis()->SetTitleSize(0.035);
   Graph_Grav50GG50QQ2->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Grav50GG50QQ2);
   
   grae->Draw("lp");
   
   grae = new TGraphAsymmErrors(5);
   grae->SetName("GravGG");
   grae->SetTitle("");
   grae->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(22);
   grae->SetPoint(0,0.1,0.7424424);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.2875,0.9825212);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,0.4625,1.400495);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,0.65,2.017842);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,0.875,2.019046);
   grae->SetPointError(4,0,0,0,0);
   
   TH1F *Graph_GravGG3 = new TH1F("Graph_GravGG3","",100,0.0225,0.9525);
   Graph_GravGG3->SetMinimum(0.614782);
   Graph_GravGG3->SetMaximum(2.146706);
   Graph_GravGG3->SetDirectory(0);
   Graph_GravGG3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_GravGG3->SetLineColor(ci);
   Graph_GravGG3->GetXaxis()->SetLabelFont(42);
   Graph_GravGG3->GetXaxis()->SetLabelSize(0.035);
   Graph_GravGG3->GetXaxis()->SetTitleSize(0.035);
   Graph_GravGG3->GetXaxis()->SetTitleFont(42);
   Graph_GravGG3->GetYaxis()->SetLabelFont(42);
   Graph_GravGG3->GetYaxis()->SetLabelSize(0.035);
   Graph_GravGG3->GetYaxis()->SetTitleSize(0.035);
   Graph_GravGG3->GetYaxis()->SetTitleFont(42);
   Graph_GravGG3->GetZaxis()->SetLabelFont(42);
   Graph_GravGG3->GetZaxis()->SetLabelSize(0.035);
   Graph_GravGG3->GetZaxis()->SetTitleSize(0.035);
   Graph_GravGG3->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_GravGG3);
   
   grae->Draw("lp");
   
   grae = new TGraphAsymmErrors(5);
   grae->SetName("GravQQ");
   grae->SetTitle("");
   grae->SetFillColor(1);

   ci = TColor::GetColor("#00ff00");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#00ff00");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(23);
   grae->SetPoint(0,0.1,1.230636);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.2875,1.236762);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,0.4625,1.205521);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,0.65,1.0634);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,0.875,0.3190042);
   grae->SetPointError(4,0,0,0,0);
   
   TH1F *Graph_GravQQ4 = new TH1F("Graph_GravQQ4","",100,0.0225,0.9525);
   Graph_GravQQ4->SetMinimum(0.2272284);
   Graph_GravQQ4->SetMaximum(1.328538);
   Graph_GravQQ4->SetDirectory(0);
   Graph_GravQQ4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_GravQQ4->SetLineColor(ci);
   Graph_GravQQ4->GetXaxis()->SetLabelFont(42);
   Graph_GravQQ4->GetXaxis()->SetLabelSize(0.035);
   Graph_GravQQ4->GetXaxis()->SetTitleSize(0.035);
   Graph_GravQQ4->GetXaxis()->SetTitleFont(42);
   Graph_GravQQ4->GetYaxis()->SetLabelFont(42);
   Graph_GravQQ4->GetYaxis()->SetLabelSize(0.035);
   Graph_GravQQ4->GetYaxis()->SetTitleSize(0.035);
   Graph_GravQQ4->GetYaxis()->SetTitleFont(42);
   Graph_GravQQ4->GetZaxis()->SetLabelFont(42);
   Graph_GravQQ4->GetZaxis()->SetLabelSize(0.035);
   Graph_GravQQ4->GetZaxis()->SetTitleSize(0.035);
   Graph_GravQQ4->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_GravQQ4);
   
   grae->Draw("lp");
   
   grae = new TGraphAsymmErrors(5);
   grae->SetName("SM");
   grae->SetTitle("");
   grae->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(21);
   grae->SetPoint(0,0.1,1.304574);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.2875,1.310469);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,0.4625,1.310328);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,0.65,1.310379);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,0.875,1.309308);
   grae->SetPointError(4,0,0,0,0);
   
   TH1F *Graph_SM5 = new TH1F("Graph_SM5","",100,0.0225,0.9525);
   Graph_SM5->SetMinimum(1.303984);
   Graph_SM5->SetMaximum(1.311058);
   Graph_SM5->SetDirectory(0);
   Graph_SM5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_SM5->SetLineColor(ci);
   Graph_SM5->GetXaxis()->SetLabelFont(42);
   Graph_SM5->GetXaxis()->SetLabelSize(0.035);
   Graph_SM5->GetXaxis()->SetTitleSize(0.035);
   Graph_SM5->GetXaxis()->SetTitleFont(42);
   Graph_SM5->GetYaxis()->SetLabelFont(42);
   Graph_SM5->GetYaxis()->SetLabelSize(0.035);
   Graph_SM5->GetYaxis()->SetTitleSize(0.035);
   Graph_SM5->GetYaxis()->SetTitleFont(42);
   Graph_SM5->GetZaxis()->SetLabelFont(42);
   Graph_SM5->GetZaxis()->SetLabelSize(0.035);
   Graph_SM5->GetZaxis()->SetTitleSize(0.035);
   Graph_SM5->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_SM5);
   
   grae->Draw("lp");
   TLine *line = new TLine(0,0,1,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TLegend *leg = new TLegend(0.11,0.65,0.4,0.89,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Data","Observed","EP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Grav50GG50QQ","2^{+}_{m}(f_{q#bar{q}}=0.5)","LP");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff00ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(33);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("GravGG","2^{+}_{m}(f_{q#bar{q}}=0.0)","LP");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("GravQQ","2^{+}_{m}(f_{q#bar{q}}=1.0)","LP");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#00ff00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(23);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("SM","0^{+}","LP");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   grae = new TGraphAsymmErrors(5);
   grae->SetName("Data");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,0.1,1.132694);
   grae->SetPointError(0,0,0,0.4282843,0.4792552);
   grae->SetPoint(1,0.2875,1.481415);
   grae->SetPointError(1,0,0,0.5744885,0.6115909);
   grae->SetPoint(2,0.4625,1.671589);
   grae->SetPointError(2,0,0,0.6250745,0.6658648);
   grae->SetPoint(3,0.65,0.671602);
   grae->SetPointError(3,0,0,0.7403724,0.7878143);
   grae->SetPoint(4,0.875,1.733639);
   grae->SetPointError(4,0,0,1.444888,1.33443);
   
   TH1F *Graph_Graph_Data16 = new TH1F("Graph_Graph_Data16","",100,0.0225,0.9525);
   Graph_Graph_Data16->SetMinimum(-0.3824544);
   Graph_Graph_Data16->SetMaximum(3.381754);
   Graph_Graph_Data16->SetDirectory(0);
   Graph_Graph_Data16->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Data16->SetLineColor(ci);
   Graph_Graph_Data16->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Data16->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Data16->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Data16->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Data16->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Data16->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Data16->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Data16->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Data16->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Data16->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Data16->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Data16->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Data16);
   
   grae->Draw("pe");
   TLatex *   tex = new TLatex(0.5,0.8,"X#rightarrow#gamma#gamma");
tex->SetNDC();
   tex->SetLineWidth(2);
   tex->Draw();
   
   TPaveText *pt = new TPaveText(0.1,0.91,0.45,0.99,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextAlign(12);
   pt->SetTextSize(0.04);
   text = pt->AddText("CMS");
   pt->Draw();
   
   pt = new TPaveText(0.75,0.9,0.9,0.99,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextAlign(32);
   pt->SetTextSize(0.04);
   text = pt->AddText("#splitline{#sqrt{s} = 7 TeV, L = 5.1 fb^{-1}}{#sqrt{s} = 8 TeV, L = 19.7 fb^{-1}}");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
