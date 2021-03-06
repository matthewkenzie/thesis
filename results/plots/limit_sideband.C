{
//=========Macro generated from canvas: c/c
//=========  (Sun Apr  6 19:50:38 2014) by ROOT version5.34/03
   TCanvas *c = new TCanvas("c", "c",0,0,700,700);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(105,-0.25,155,2.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1D *dummy = new TH1D("dummy","",1,110,150);
   dummy->SetMinimum(0);
   dummy->SetMaximum(2);
   dummy->SetStats(0);
   dummy->SetLineColor(0);
   dummy->GetXaxis()->SetTitle("m_{H} (GeV)");
   dummy->GetXaxis()->SetLabelFont(42);
   dummy->GetXaxis()->SetLabelSize(0.035);
   dummy->GetXaxis()->SetTitleSize(0.05);
   dummy->GetXaxis()->SetTitleOffset(0.75);
   dummy->GetXaxis()->SetTitleFont(42);
   dummy->GetYaxis()->SetTitle("\sigma(H#rightarrow #gamma #gamma)_{95%%CL} / \sigma(H#rightarrow #gamma #gamma)_{SM}");
   dummy->GetYaxis()->SetLabelFont(42);
   dummy->GetYaxis()->SetLabelSize(0.035);
   dummy->GetYaxis()->SetTitleSize(0.05);
   dummy->GetYaxis()->SetTitleOffset(0.75);
   dummy->GetYaxis()->SetTitleFont(42);
   dummy->GetZaxis()->SetLabelFont(42);
   dummy->GetZaxis()->SetLabelSize(0.035);
   dummy->GetZaxis()->SetTitleSize(0.035);
   dummy->GetZaxis()->SetTitleFont(42);
   dummy->Draw("AXIS");
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(28);
   grae->SetName("");
   grae->SetTitle("");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ffff00");
   grae->SetFillColor(ci);
   grae->SetLineStyle(2);
   grae->SetPoint(0,115,0.4316406);
   grae->SetPointError(0,0,0,0.2014885,0.4209068);
   grae->SetPoint(1,116,0.4277344);
   grae->SetPointError(1,0,0,0.2013359,0.4105642);
   grae->SetPoint(2,117,0.4199219);
   grae->SetPointError(2,0,0,0.1960182,0.4041833);
   grae->SetPoint(3,118,0.4121094);
   grae->SetPointError(3,0,0,0.1939812,0.3966637);
   grae->SetPoint(4,119,0.4082031);
   grae->SetPointError(4,0,0,0.1913452,0.3991263);
   grae->SetPoint(5,120,0.3964844);
   grae->SetPointError(5,0,0,0.1866264,0.3876681);
   grae->SetPoint(6,121,0.4042969);
   grae->SetPointError(6,0,0,0.1910934,0.386991);
   grae->SetPoint(7,122,0.4042969);
   grae->SetPointError(7,0,0,0.1903038,0.389144);
   grae->SetPoint(8,123,0.4003906);
   grae->SetPointError(8,0,0,0.1884651,0.3904338);
   grae->SetPoint(9,124,0.4003906);
   grae->SetPointError(9,0,0,0.1869011,0.3925411);
   grae->SetPoint(10,125,0.4042969);
   grae->SetPointError(10,0,0,0.1895142,0.389144);
   grae->SetPoint(11,126,0.4042969);
   grae->SetPointError(11,0,0,0.1887245,0.3912969);
   grae->SetPoint(12,127,0.4042969);
   grae->SetPointError(12,0,0,0.1903038,0.386991);
   grae->SetPoint(13,128,0.3964844);
   grae->SetPointError(13,0,0,0.1866264,0.3866248);
   grae->SetPoint(14,129,0.3964844);
   grae->SetPointError(14,0,0,0.1881752,0.3816243);
   grae->SetPoint(15,130,0.3964844);
   grae->SetPointError(15,0,0,0.1866264,0.3866248);
   grae->SetPoint(16,131,0.4003906);
   grae->SetPointError(16,0,0,0.1884651,0.3904338);
   grae->SetPoint(17,132,0.4082031);
   grae->SetPointError(17,0,0,0.1921425,0.3980521);
   grae->SetPoint(18,134,0.4199219);
   grae->SetPointError(18,0,0,0.1984787,0.4041833);
   grae->SetPoint(19,135,0.4277344);
   grae->SetPointError(19,0,0,0.2013359,0.4117031);
   grae->SetPoint(20,141,0.4785156);
   grae->SetPointError(20,0,0,0.2252388,0.4691344);
   grae->SetPoint(21,142,0.4902344);
   grae->SetPointError(21,0,0,0.2307549,0.4718606);
   grae->SetPoint(22,143,0.5019531);
   grae->SetPointError(22,0,0,0.2352905,0.4921125);
   grae->SetPoint(23,144,0.5214844);
   grae->SetPointError(23,0,0,0.2454643,0.5085163);
   grae->SetPoint(24,146,0.5566406);
   grae->SetPointError(24,0,0,0.2620125,0.5427983);
   grae->SetPoint(25,147,0.5722656);
   grae->SetPointError(25,0,0,0.2693672,0.5610465);
   grae->SetPoint(26,148,0.5996094);
   grae->SetPointError(26,0,0,0.282238,0.5846986);
   grae->SetPoint(27,149,0.6269531);
   grae->SetPointError(27,0,0,0.2951088,0.6113623);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,111.6,152.4);
   Graph_Graph1->SetMinimum(0.1053085);
   Graph_Graph1->SetMaximum(1.341316);
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
   
   multigraph->Add(grae,"");
   
   grae = new TGraphAsymmErrors(28);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#00ff00");
   grae->SetFillColor(ci);
   grae->SetLineStyle(2);
   grae->SetPoint(0,115,0.4316406);
   grae->SetPointError(0,0,0,0.1235691,0.1840976);
   grae->SetPoint(1,116,0.4277344);
   grae->SetPointError(1,0,0,0.1234756,0.1807266);
   grae->SetPoint(2,117,0.4199219);
   grae->SetPointError(2,0,0,0.1202143,0.1790994);
   grae->SetPoint(3,118,0.4121094);
   grae->SetPointError(3,0,0,0.118965,0.1757674);
   grae->SetPoint(4,119,0.4082031);
   grae->SetPointError(4,0,0,0.1173484,0.1757284);
   grae->SetPoint(5,120,0.3964844);
   grae->SetPointError(5,0,0,0.1144545,0.1706836);
   grae->SetPoint(6,121,0.4042969);
   grae->SetPointError(6,0,0,0.1186869,0.1692122);
   grae->SetPoint(7,122,0.4042969);
   grae->SetPointError(7,0,0,0.1167098,0.1724353);
   grae->SetPoint(8,123,0.4003906);
   grae->SetPointError(8,0,0,0.1155821,0.1707692);
   grae->SetPoint(9,124,0.4003906);
   grae->SetPointError(9,0,0,0.114623,0.1739612);
   grae->SetPoint(10,125,0.4042969);
   grae->SetPointError(10,0,0,0.1162255,0.1724353);
   grae->SetPoint(11,126,0.4042969);
   grae->SetPointError(11,0,0,0.1157412,0.1756583);
   grae->SetPoint(12,127,0.4042969);
   grae->SetPointError(12,0,0,0.1181965,0.1692122);
   grae->SetPoint(13,128,0.3964844);
   grae->SetPointError(13,0,0,0.1144545,0.1691032);
   grae->SetPoint(14,129,0.3964844);
   grae->SetPointError(14,0,0,0.1161394,0.1691032);
   grae->SetPoint(15,130,0.3964844);
   grae->SetPointError(15,0,0,0.1144545,0.1691032);
   grae->SetPoint(16,131,0.4003906);
   grae->SetPointError(16,0,0,0.1170545,0.1707692);
   grae->SetPoint(17,132,0.4082031);
   grae->SetPointError(17,0,0,0.1178374,0.1741013);
   grae->SetPoint(18,134,0.4199219);
   grae->SetPointError(18,0,0,0.1232739,0.1790994);
   grae->SetPoint(19,135,0.4277344);
   grae->SetPointError(19,0,0,0.1250485,0.1824315);
   grae->SetPoint(20,141,0.4785156);
   grae->SetPointError(20,0,0,0.1381347,0.2079048);
   grae->SetPoint(21,142,0.4902344);
   grae->SetPointError(21,0,0,0.1433204,0.2090882);
   grae->SetPoint(22,143,0.5019531);
   grae->SetPointError(22,0,0,0.1442993,0.2180879);
   grae->SetPoint(23,144,0.5214844);
   grae->SetPointError(23,0,0,0.1505387,0.2224165);
   grae->SetPoint(24,146,0.5566406);
   grae->SetPointError(24,0,0,0.1627343,0.2374109);
   grae->SetPoint(25,147,0.5722656);
   grae->SetPointError(25,0,0,0.1651978,0.2486372);
   grae->SetPoint(26,148,0.5996094);
   grae->SetPointError(26,0,0,0.1752962,0.2557374);
   grae->SetPoint(27,149,0.6269531);
   grae->SetPointError(27,0,0,0.1809847,0.2673996);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","",100,111.6,152.4);
   Graph_Graph2->SetMinimum(0.2189442);
   Graph_Graph2->SetMaximum(0.9557535);
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
   
   multigraph->Add(grae,"");
   
   grae = new TGraphAsymmErrors(28);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineStyle(2);
   grae->SetLineWidth(2);
   grae->SetPoint(0,115,0.4316406);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,116,0.4277344);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,117,0.4199219);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,118,0.4121094);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,119,0.4082031);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,120,0.3964844);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,121,0.4042969);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,122,0.4042969);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,123,0.4003906);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,124,0.4003906);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,125,0.4042969);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,126,0.4042969);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,127,0.4042969);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,128,0.3964844);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,129,0.3964844);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,130,0.3964844);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,131,0.4003906);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,132,0.4082031);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,134,0.4199219);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,135,0.4277344);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,141,0.4785156);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,142,0.4902344);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,143,0.5019531);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,144,0.5214844);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,146,0.5566406);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,147,0.5722656);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,148,0.5996094);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,149,0.6269531);
   grae->SetPointError(27,0,0,0,0);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","",100,111.6,152.4);
   Graph_Graph3->SetMinimum(0.3734375);
   Graph_Graph3->SetMaximum(0.65);
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
   grae->SetHistogram(Graph_Graph3);
   
   multigraph->Add(grae,"");
   
   grae = new TGraphAsymmErrors(28);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(21);
   grae->SetMarkerSize(0.5);
   grae->SetPoint(0,115,0.2790056);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,116,0.361635);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,117,0.2809513);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,118,0.3406825);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,119,0.3534404);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,120,0.345871);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,121,0.529241);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,122,0.8292678);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,123,1.299203);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,124,1.660337);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,125,1.487651);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,126,1.036547);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,127,0.5848793);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,128,0.4122775);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,129,0.2916405);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,130,0.2921454);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,131,0.3689874);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,132,0.3950678);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,134,0.4452865);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,135,0.4498196);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,141,0.41969);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,142,0.4026815);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,143,0.3960286);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,144,0.3750756);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,146,0.3108159);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,147,0.3926485);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,148,0.6424061);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,149,0.9379071);
   grae->SetPointError(27,0,0,0,0);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","",100,111.6,152.4);
   Graph_Graph4->SetMinimum(0.1408725);
   Graph_Graph4->SetMaximum(1.79847);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph4->SetLineColor(ci);
   Graph_Graph4->GetXaxis()->SetLabelFont(42);
   Graph_Graph4->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetXaxis()->SetTitleFont(42);
   Graph_Graph4->GetYaxis()->SetLabelFont(42);
   Graph_Graph4->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetYaxis()->SetTitleFont(42);
   Graph_Graph4->GetZaxis()->SetLabelFont(42);
   Graph_Graph4->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph4);
   
   multigraph->Add(grae,"");
   multigraph->Draw("3");
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   grae = new TGraphAsymmErrors(28);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffff00");
   grae->SetFillColor(ci);
   grae->SetLineStyle(2);
   grae->SetPoint(0,115,0.4316406);
   grae->SetPointError(0,0,0,0.2014885,0.4209068);
   grae->SetPoint(1,116,0.4277344);
   grae->SetPointError(1,0,0,0.2013359,0.4105642);
   grae->SetPoint(2,117,0.4199219);
   grae->SetPointError(2,0,0,0.1960182,0.4041833);
   grae->SetPoint(3,118,0.4121094);
   grae->SetPointError(3,0,0,0.1939812,0.3966637);
   grae->SetPoint(4,119,0.4082031);
   grae->SetPointError(4,0,0,0.1913452,0.3991263);
   grae->SetPoint(5,120,0.3964844);
   grae->SetPointError(5,0,0,0.1866264,0.3876681);
   grae->SetPoint(6,121,0.4042969);
   grae->SetPointError(6,0,0,0.1910934,0.386991);
   grae->SetPoint(7,122,0.4042969);
   grae->SetPointError(7,0,0,0.1903038,0.389144);
   grae->SetPoint(8,123,0.4003906);
   grae->SetPointError(8,0,0,0.1884651,0.3904338);
   grae->SetPoint(9,124,0.4003906);
   grae->SetPointError(9,0,0,0.1869011,0.3925411);
   grae->SetPoint(10,125,0.4042969);
   grae->SetPointError(10,0,0,0.1895142,0.389144);
   grae->SetPoint(11,126,0.4042969);
   grae->SetPointError(11,0,0,0.1887245,0.3912969);
   grae->SetPoint(12,127,0.4042969);
   grae->SetPointError(12,0,0,0.1903038,0.386991);
   grae->SetPoint(13,128,0.3964844);
   grae->SetPointError(13,0,0,0.1866264,0.3866248);
   grae->SetPoint(14,129,0.3964844);
   grae->SetPointError(14,0,0,0.1881752,0.3816243);
   grae->SetPoint(15,130,0.3964844);
   grae->SetPointError(15,0,0,0.1866264,0.3866248);
   grae->SetPoint(16,131,0.4003906);
   grae->SetPointError(16,0,0,0.1884651,0.3904338);
   grae->SetPoint(17,132,0.4082031);
   grae->SetPointError(17,0,0,0.1921425,0.3980521);
   grae->SetPoint(18,134,0.4199219);
   grae->SetPointError(18,0,0,0.1984787,0.4041833);
   grae->SetPoint(19,135,0.4277344);
   grae->SetPointError(19,0,0,0.2013359,0.4117031);
   grae->SetPoint(20,141,0.4785156);
   grae->SetPointError(20,0,0,0.2252388,0.4691344);
   grae->SetPoint(21,142,0.4902344);
   grae->SetPointError(21,0,0,0.2307549,0.4718606);
   grae->SetPoint(22,143,0.5019531);
   grae->SetPointError(22,0,0,0.2352905,0.4921125);
   grae->SetPoint(23,144,0.5214844);
   grae->SetPointError(23,0,0,0.2454643,0.5085163);
   grae->SetPoint(24,146,0.5566406);
   grae->SetPointError(24,0,0,0.2620125,0.5427983);
   grae->SetPoint(25,147,0.5722656);
   grae->SetPointError(25,0,0,0.2693672,0.5610465);
   grae->SetPoint(26,148,0.5996094);
   grae->SetPointError(26,0,0,0.282238,0.5846986);
   grae->SetPoint(27,149,0.6269531);
   grae->SetPointError(27,0,0,0.2951088,0.6113623);
   
   TH1F *Graph_Graph_Graph15 = new TH1F("Graph_Graph_Graph15","",100,111.6,152.4);
   Graph_Graph_Graph15->SetMinimum(0.1053085);
   Graph_Graph_Graph15->SetMaximum(1.341316);
   Graph_Graph_Graph15->SetDirectory(0);
   Graph_Graph_Graph15->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph15->SetLineColor(ci);
   Graph_Graph_Graph15->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph15->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph15->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph15->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph15->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph15->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph15->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph15->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph15->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph15->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph15->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph15->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph15);
   
   multigraph->Add(grae,"");
   
   grae = new TGraphAsymmErrors(28);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#00ff00");
   grae->SetFillColor(ci);
   grae->SetLineStyle(2);
   grae->SetPoint(0,115,0.4316406);
   grae->SetPointError(0,0,0,0.1235691,0.1840976);
   grae->SetPoint(1,116,0.4277344);
   grae->SetPointError(1,0,0,0.1234756,0.1807266);
   grae->SetPoint(2,117,0.4199219);
   grae->SetPointError(2,0,0,0.1202143,0.1790994);
   grae->SetPoint(3,118,0.4121094);
   grae->SetPointError(3,0,0,0.118965,0.1757674);
   grae->SetPoint(4,119,0.4082031);
   grae->SetPointError(4,0,0,0.1173484,0.1757284);
   grae->SetPoint(5,120,0.3964844);
   grae->SetPointError(5,0,0,0.1144545,0.1706836);
   grae->SetPoint(6,121,0.4042969);
   grae->SetPointError(6,0,0,0.1186869,0.1692122);
   grae->SetPoint(7,122,0.4042969);
   grae->SetPointError(7,0,0,0.1167098,0.1724353);
   grae->SetPoint(8,123,0.4003906);
   grae->SetPointError(8,0,0,0.1155821,0.1707692);
   grae->SetPoint(9,124,0.4003906);
   grae->SetPointError(9,0,0,0.114623,0.1739612);
   grae->SetPoint(10,125,0.4042969);
   grae->SetPointError(10,0,0,0.1162255,0.1724353);
   grae->SetPoint(11,126,0.4042969);
   grae->SetPointError(11,0,0,0.1157412,0.1756583);
   grae->SetPoint(12,127,0.4042969);
   grae->SetPointError(12,0,0,0.1181965,0.1692122);
   grae->SetPoint(13,128,0.3964844);
   grae->SetPointError(13,0,0,0.1144545,0.1691032);
   grae->SetPoint(14,129,0.3964844);
   grae->SetPointError(14,0,0,0.1161394,0.1691032);
   grae->SetPoint(15,130,0.3964844);
   grae->SetPointError(15,0,0,0.1144545,0.1691032);
   grae->SetPoint(16,131,0.4003906);
   grae->SetPointError(16,0,0,0.1170545,0.1707692);
   grae->SetPoint(17,132,0.4082031);
   grae->SetPointError(17,0,0,0.1178374,0.1741013);
   grae->SetPoint(18,134,0.4199219);
   grae->SetPointError(18,0,0,0.1232739,0.1790994);
   grae->SetPoint(19,135,0.4277344);
   grae->SetPointError(19,0,0,0.1250485,0.1824315);
   grae->SetPoint(20,141,0.4785156);
   grae->SetPointError(20,0,0,0.1381347,0.2079048);
   grae->SetPoint(21,142,0.4902344);
   grae->SetPointError(21,0,0,0.1433204,0.2090882);
   grae->SetPoint(22,143,0.5019531);
   grae->SetPointError(22,0,0,0.1442993,0.2180879);
   grae->SetPoint(23,144,0.5214844);
   grae->SetPointError(23,0,0,0.1505387,0.2224165);
   grae->SetPoint(24,146,0.5566406);
   grae->SetPointError(24,0,0,0.1627343,0.2374109);
   grae->SetPoint(25,147,0.5722656);
   grae->SetPointError(25,0,0,0.1651978,0.2486372);
   grae->SetPoint(26,148,0.5996094);
   grae->SetPointError(26,0,0,0.1752962,0.2557374);
   grae->SetPoint(27,149,0.6269531);
   grae->SetPointError(27,0,0,0.1809847,0.2673996);
   
   TH1F *Graph_Graph_Graph26 = new TH1F("Graph_Graph_Graph26","",100,111.6,152.4);
   Graph_Graph_Graph26->SetMinimum(0.2189442);
   Graph_Graph_Graph26->SetMaximum(0.9557535);
   Graph_Graph_Graph26->SetDirectory(0);
   Graph_Graph_Graph26->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph26->SetLineColor(ci);
   Graph_Graph_Graph26->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph26->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph26->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph26->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph26->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph26->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph26->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph26->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph26->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph26->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph26->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph26->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph26);
   
   multigraph->Add(grae,"");
   
   grae = new TGraphAsymmErrors(28);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineStyle(2);
   grae->SetLineWidth(2);
   grae->SetPoint(0,115,0.4316406);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,116,0.4277344);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,117,0.4199219);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,118,0.4121094);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,119,0.4082031);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,120,0.3964844);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,121,0.4042969);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,122,0.4042969);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,123,0.4003906);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,124,0.4003906);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,125,0.4042969);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,126,0.4042969);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,127,0.4042969);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,128,0.3964844);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,129,0.3964844);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,130,0.3964844);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,131,0.4003906);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,132,0.4082031);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,134,0.4199219);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,135,0.4277344);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,141,0.4785156);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,142,0.4902344);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,143,0.5019531);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,144,0.5214844);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,146,0.5566406);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,147,0.5722656);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,148,0.5996094);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,149,0.6269531);
   grae->SetPointError(27,0,0,0,0);
   
   TH1F *Graph_Graph_Graph37 = new TH1F("Graph_Graph_Graph37","",100,111.6,152.4);
   Graph_Graph_Graph37->SetMinimum(0.3734375);
   Graph_Graph_Graph37->SetMaximum(0.65);
   Graph_Graph_Graph37->SetDirectory(0);
   Graph_Graph_Graph37->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph37->SetLineColor(ci);
   Graph_Graph_Graph37->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph37->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph37->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph37->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph37->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph37->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph37->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph37->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph37->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph37->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph37->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph37->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph37);
   
   multigraph->Add(grae,"");
   
   grae = new TGraphAsymmErrors(28);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(21);
   grae->SetMarkerSize(0.5);
   grae->SetPoint(0,115,0.2790056);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,116,0.361635);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,117,0.2809513);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,118,0.3406825);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,119,0.3534404);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,120,0.345871);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,121,0.529241);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,122,0.8292678);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,123,1.299203);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,124,1.660337);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,125,1.487651);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,126,1.036547);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,127,0.5848793);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,128,0.4122775);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,129,0.2916405);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,130,0.2921454);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,131,0.3689874);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,132,0.3950678);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,134,0.4452865);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,135,0.4498196);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,141,0.41969);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,142,0.4026815);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,143,0.3960286);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,144,0.3750756);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,146,0.3108159);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,147,0.3926485);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,148,0.6424061);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,149,0.9379071);
   grae->SetPointError(27,0,0,0,0);
   
   TH1F *Graph_Graph_Graph48 = new TH1F("Graph_Graph_Graph48","",100,111.6,152.4);
   Graph_Graph_Graph48->SetMinimum(0.1408725);
   Graph_Graph_Graph48->SetMaximum(1.79847);
   Graph_Graph_Graph48->SetDirectory(0);
   Graph_Graph_Graph48->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph48->SetLineColor(ci);
   Graph_Graph_Graph48->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph48->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph48->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph48->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph48->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph48->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph48->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph48->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph48->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph48->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph48->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph48->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph48);
   
   multigraph->Add(grae,"");
   multigraph->Draw("LPX");
   
   TH1D *dummy = new TH1D("dummy","",1,110,150);
   dummy->SetMinimum(0);
   dummy->SetMaximum(2);
   dummy->SetStats(0);
   dummy->SetLineColor(0);
   dummy->GetXaxis()->SetTitle("m_{H} (GeV)");
   dummy->GetXaxis()->SetLabelFont(42);
   dummy->GetXaxis()->SetLabelSize(0.035);
   dummy->GetXaxis()->SetTitleSize(0.05);
   dummy->GetXaxis()->SetTitleOffset(0.75);
   dummy->GetXaxis()->SetTitleFont(42);
   dummy->GetYaxis()->SetTitle("\sigma(H#rightarrow #gamma #gamma)_{95%%CL} / \sigma(H#rightarrow #gamma #gamma)_{SM}");
   dummy->GetYaxis()->SetLabelFont(42);
   dummy->GetYaxis()->SetLabelSize(0.035);
   dummy->GetYaxis()->SetTitleSize(0.05);
   dummy->GetYaxis()->SetTitleOffset(0.75);
   dummy->GetYaxis()->SetTitleFont(42);
   dummy->GetZaxis()->SetLabelFont(42);
   dummy->GetZaxis()->SetLabelSize(0.035);
   dummy->GetZaxis()->SetTitleSize(0.035);
   dummy->GetZaxis()->SetTitleFont(42);
   dummy->Draw("AXIGSAME");
   TLine *line = new TLine(110,1,150,1);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   TLatex *   tex = new TLatex(0.12,0.92,"CMS VERY Preliminary");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.67,0.94,"");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.6,0.7,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Observed","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("","Expected #pm 1#sigma","FL");

   ci = TColor::GetColor("#00ff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("","Expected #pm 2#sigma","FL");

   ci = TColor::GetColor("#ffff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TH1D *dummy__1 = new TH1D("dummy__1","",1,110,150);
   dummy__1->SetMinimum(0);
   dummy__1->SetMaximum(2);
   dummy__1->SetDirectory(0);
   dummy__1->SetStats(0);
   dummy__1->SetLineColor(0);
   dummy__1->GetXaxis()->SetTitle("m_{H} (GeV)");
   dummy__1->GetXaxis()->SetLabelFont(42);
   dummy__1->GetXaxis()->SetLabelSize(0.035);
   dummy__1->GetXaxis()->SetTitleSize(0.05);
   dummy__1->GetXaxis()->SetTitleOffset(0.75);
   dummy__1->GetXaxis()->SetTitleFont(42);
   dummy__1->GetYaxis()->SetTitle("\sigma(H#rightarrow #gamma #gamma)_{95%%CL} / \sigma(H#rightarrow #gamma #gamma)_{SM}");
   dummy__1->GetYaxis()->SetLabelFont(42);
   dummy__1->GetYaxis()->SetLabelSize(0.035);
   dummy__1->GetYaxis()->SetTitleSize(0.05);
   dummy__1->GetYaxis()->SetTitleOffset(0.75);
   dummy__1->GetYaxis()->SetTitleFont(42);
   dummy__1->GetZaxis()->SetLabelFont(42);
   dummy__1->GetZaxis()->SetLabelSize(0.035);
   dummy__1->GetZaxis()->SetTitleSize(0.035);
   dummy__1->GetZaxis()->SetTitleFont(42);
   dummy__1->Draw("sameaxis");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
