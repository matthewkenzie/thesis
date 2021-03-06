{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr  2 19:34:48 2014) by ROOT version5.34/03
   TCanvas *c = new TCanvas("c", "c",0,0,600,600);
   gStyle->SetOptStat(0);
   c->Range(100.625,-0.1703193,144.375,1.532874);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1D *frame_3a30ac40__3 = new TH1D("frame_3a30ac40__3","",70,105,140);
   frame_3a30ac40__3->SetBinContent(1,1.362554);
   frame_3a30ac40__3->SetMaximum(1.362554);
   frame_3a30ac40__3->SetEntries(2);
   frame_3a30ac40__3->SetDirectory(0);
   frame_3a30ac40__3->SetStats(0);
   frame_3a30ac40__3->GetXaxis()->SetTitle("m_{#gamma#gamma} (GeV)");
   frame_3a30ac40__3->GetXaxis()->SetNdivisions(509);
   frame_3a30ac40__3->GetYaxis()->SetTitle("Events / ( 0.5 GeV )");
   frame_3a30ac40__3->Draw("FUNC");
   
   TGraph *graph = new TGraph(74);
   graph->SetName("sigpdfrelcat0_allProcs_Norm[CMS_hgg_mass]_Range[123.758000_125.866000]_NormRange[]");
   graph->SetTitle("Projection of sigpdfrelcat0_allProcs");
   graph->SetFillColor(19);
   graph->SetLineColor(15);
   graph->SetLineWidth(2);
   graph->SetPoint(0,123.758,0);
   graph->SetPoint(1,123.758,0.5578805539);
   graph->SetPoint(2,123.7881143,0.5749497464);
   graph->SetPoint(3,123.8182286,0.5926472006);
   graph->SetPoint(4,123.8483429,0.6110139294);
   graph->SetPoint(5,123.8784571,0.6300903103);
   graph->SetPoint(6,123.9085714,0.6499147336);
   graph->SetPoint(7,123.9386857,0.670522039);
   graph->SetPoint(8,123.9688,0.6919417564);
   graph->SetPoint(9,123.9989143,0.7141961797);
   graph->SetPoint(10,124.0290286,0.7372983132);
   graph->SetPoint(11,124.0591429,0.7612497438);
   graph->SetPoint(12,124.0892571,0.7860385002);
   graph->SetPoint(13,124.1193714,0.811636974);
   graph->SetPoint(14,124.1494857,0.8379999837);
   graph->SetPoint(15,124.1796,0.8650630698);
   graph->SetPoint(16,124.2097143,0.8927411099);
   graph->SetPoint(17,124.2398286,0.9209273442);
   graph->SetPoint(18,124.2699429,0.9494928949);
   graph->SetPoint(19,124.3000571,0.9782868527);
   graph->SetPoint(20,124.3301714,1.007136992);
   graph->SetPoint(21,124.3602857,1.035851155);
   graph->SetPoint(22,124.3904,1.064219327);
   graph->SetPoint(23,124.4205143,1.09201639);
   graph->SetPoint(24,124.4506286,1.119005537);
   graph->SetPoint(25,124.4807429,1.14494227);
   graph->SetPoint(26,124.5108571,1.169578903);
   graph->SetPoint(27,124.5409714,1.192669454);
   graph->SetPoint(28,124.5710857,1.213974792);
   graph->SetPoint(29,124.6012,1.23326788);
   graph->SetPoint(30,124.6313143,1.250338952);
   graph->SetPoint(31,124.6614286,1.265000446);
   graph->SetPoint(32,124.6915429,1.27709153);
   graph->SetPoint(33,124.7216571,1.286482049);
   graph->SetPoint(34,124.7517714,1.293075757);
   graph->SetPoint(35,124.7818857,1.296812705);
   graph->SetPoint(36,124.812,1.297670687);
   graph->SetPoint(37,124.8421143,1.295665698);
   graph->SetPoint(38,124.8722286,1.290851363);
   graph->SetPoint(39,124.9023429,1.283317359);
   graph->SetPoint(40,124.9324571,1.273186889);
   graph->SetPoint(41,124.9625714,1.260613279);
   graph->SetPoint(42,124.9926857,1.245775832);
   graph->SetPoint(43,125.0228,1.228875079);
   graph->SetPoint(44,125.0529143,1.210127595);
   graph->SetPoint(45,125.0830286,1.189760557);
   graph->SetPoint(46,125.1131429,1.16800623);
   graph->SetPoint(47,125.1432571,1.145096564);
   graph->SetPoint(48,125.1733714,1.121258071);
   graph->SetPoint(49,125.2034857,1.096707144);
   graph->SetPoint(50,125.2336,1.071645935);
   graph->SetPoint(51,125.2637143,1.046258921);
   graph->SetPoint(52,125.2938286,1.02071021);
   graph->SetPoint(53,125.3239429,0.9951416542);
   graph->SetPoint(54,125.3540571,0.9696717586);
   graph->SetPoint(55,125.3841714,0.944395392);
   graph->SetPoint(56,125.4142857,0.9193842366);
   graph->SetPoint(57,125.4444,0.8946879168);
   graph->SetPoint(58,125.4745143,0.8703357148);
   graph->SetPoint(59,125.5046286,0.8463387697);
   graph->SetPoint(60,125.5347429,0.8226926475);
   graph->SetPoint(61,125.5648571,0.7993801628);
   graph->SetPoint(62,125.5949714,0.7763743372);
   graph->SetPoint(63,125.6250857,0.7536413791);
   graph->SetPoint(64,125.6552,0.7311435845);
   graph->SetPoint(65,125.6853143,0.7088420648);
   graph->SetPoint(66,125.7154286,0.6866992267);
   graph->SetPoint(67,125.7455429,0.6646809405);
   graph->SetPoint(68,125.7756571,0.6427583545);
   graph->SetPoint(69,125.8057714,0.6209093258);
   graph->SetPoint(70,125.8358857,0.599119456);
   graph->SetPoint(71,125.866,0.5773827359);
   graph->SetPoint(72,125.866,0.5773827359);
   graph->SetPoint(73,125.866,0);
   
   TH1F *Graph_sigpdfrelcat0_allProcs_Norm[CMS_hgg_mass]_Range[123.758000_125.866000]_NormRange[]4 = new TH1F("Graph_sigpdfrelcat0_allProcs_Norm[CMS_hgg_mass]_Range[123.758000_125.866000]_NormRange[]4","Projection of sigpdfrelcat0_allProcs",100,123.5472,126.0768);
   Graph_sigpdfrelcat0_allProcs_Norm[CMS_hgg_mass]_Range[123.758000_125.866000]_NormRange[]4->SetMinimum(0);
   Graph_sigpdfrelcat0_allProcs_Norm[CMS_hgg_mass]_Range[123.758000_125.866000]_NormRange[]4->SetMaximum(1.427438);
   Graph_sigpdfrelcat0_allProcs_Norm[CMS_hgg_mass]_Range[123.758000_125.866000]_NormRange[]4->SetDirectory(0);
   Graph_sigpdfrelcat0_allProcs_Norm[CMS_hgg_mass]_Range[123.758000_125.866000]_NormRange[]4->SetStats(0);
   graph->SetHistogram(Graph_sigpdfrelcat0_allProcs_Norm[CMS_hgg_mass]_Range[123.758000_125.866000]_NormRange[]4);
   
   graph->Draw("f");
   
   graph = new TGraph(74);
   graph->SetName("sigpdfrelcat0_allProcs_Norm[CMS_hgg_mass]_Range[123.758000_125.866000]_NormRange[]");
   graph->SetTitle("Projection of sigpdfrelcat0_allProcs");
   graph->SetFillColor(1);
   graph->SetLineColor(15);
   graph->SetLineWidth(2);
   graph->SetPoint(0,123.758,0);
   graph->SetPoint(1,123.758,0.5578805539);
   graph->SetPoint(2,123.7881143,0.5749497464);
   graph->SetPoint(3,123.8182286,0.5926472006);
   graph->SetPoint(4,123.8483429,0.6110139294);
   graph->SetPoint(5,123.8784571,0.6300903103);
   graph->SetPoint(6,123.9085714,0.6499147336);
   graph->SetPoint(7,123.9386857,0.670522039);
   graph->SetPoint(8,123.9688,0.6919417564);
   graph->SetPoint(9,123.9989143,0.7141961797);
   graph->SetPoint(10,124.0290286,0.7372983132);
   graph->SetPoint(11,124.0591429,0.7612497438);
   graph->SetPoint(12,124.0892571,0.7860385002);
   graph->SetPoint(13,124.1193714,0.811636974);
   graph->SetPoint(14,124.1494857,0.8379999837);
   graph->SetPoint(15,124.1796,0.8650630698);
   graph->SetPoint(16,124.2097143,0.8927411099);
   graph->SetPoint(17,124.2398286,0.9209273442);
   graph->SetPoint(18,124.2699429,0.9494928949);
   graph->SetPoint(19,124.3000571,0.9782868527);
   graph->SetPoint(20,124.3301714,1.007136992);
   graph->SetPoint(21,124.3602857,1.035851155);
   graph->SetPoint(22,124.3904,1.064219327);
   graph->SetPoint(23,124.4205143,1.09201639);
   graph->SetPoint(24,124.4506286,1.119005537);
   graph->SetPoint(25,124.4807429,1.14494227);
   graph->SetPoint(26,124.5108571,1.169578903);
   graph->SetPoint(27,124.5409714,1.192669454);
   graph->SetPoint(28,124.5710857,1.213974792);
   graph->SetPoint(29,124.6012,1.23326788);
   graph->SetPoint(30,124.6313143,1.250338952);
   graph->SetPoint(31,124.6614286,1.265000446);
   graph->SetPoint(32,124.6915429,1.27709153);
   graph->SetPoint(33,124.7216571,1.286482049);
   graph->SetPoint(34,124.7517714,1.293075757);
   graph->SetPoint(35,124.7818857,1.296812705);
   graph->SetPoint(36,124.812,1.297670687);
   graph->SetPoint(37,124.8421143,1.295665698);
   graph->SetPoint(38,124.8722286,1.290851363);
   graph->SetPoint(39,124.9023429,1.283317359);
   graph->SetPoint(40,124.9324571,1.273186889);
   graph->SetPoint(41,124.9625714,1.260613279);
   graph->SetPoint(42,124.9926857,1.245775832);
   graph->SetPoint(43,125.0228,1.228875079);
   graph->SetPoint(44,125.0529143,1.210127595);
   graph->SetPoint(45,125.0830286,1.189760557);
   graph->SetPoint(46,125.1131429,1.16800623);
   graph->SetPoint(47,125.1432571,1.145096564);
   graph->SetPoint(48,125.1733714,1.121258071);
   graph->SetPoint(49,125.2034857,1.096707144);
   graph->SetPoint(50,125.2336,1.071645935);
   graph->SetPoint(51,125.2637143,1.046258921);
   graph->SetPoint(52,125.2938286,1.02071021);
   graph->SetPoint(53,125.3239429,0.9951416542);
   graph->SetPoint(54,125.3540571,0.9696717586);
   graph->SetPoint(55,125.3841714,0.944395392);
   graph->SetPoint(56,125.4142857,0.9193842366);
   graph->SetPoint(57,125.4444,0.8946879168);
   graph->SetPoint(58,125.4745143,0.8703357148);
   graph->SetPoint(59,125.5046286,0.8463387697);
   graph->SetPoint(60,125.5347429,0.8226926475);
   graph->SetPoint(61,125.5648571,0.7993801628);
   graph->SetPoint(62,125.5949714,0.7763743372);
   graph->SetPoint(63,125.6250857,0.7536413791);
   graph->SetPoint(64,125.6552,0.7311435845);
   graph->SetPoint(65,125.6853143,0.7088420648);
   graph->SetPoint(66,125.7154286,0.6866992267);
   graph->SetPoint(67,125.7455429,0.6646809405);
   graph->SetPoint(68,125.7756571,0.6427583545);
   graph->SetPoint(69,125.8057714,0.6209093258);
   graph->SetPoint(70,125.8358857,0.599119456);
   graph->SetPoint(71,125.866,0.5773827359);
   graph->SetPoint(72,125.866,0.5773827359);
   graph->SetPoint(73,125.866,0);
   
   TH1F *Graph_sigpdfrelcat0_allProcs_Norm[CMS_hgg_mass]_Range[123.758000_125.866000]_NormRange[]5 = new TH1F("Graph_sigpdfrelcat0_allProcs_Norm[CMS_hgg_mass]_Range[123.758000_125.866000]_NormRange[]5","Projection of sigpdfrelcat0_allProcs",100,123.5472,126.0768);
   Graph_sigpdfrelcat0_allProcs_Norm[CMS_hgg_mass]_Range[123.758000_125.866000]_NormRange[]5->SetMinimum(0);
   Graph_sigpdfrelcat0_allProcs_Norm[CMS_hgg_mass]_Range[123.758000_125.866000]_NormRange[]5->SetMaximum(1.427438);
   Graph_sigpdfrelcat0_allProcs_Norm[CMS_hgg_mass]_Range[123.758000_125.866000]_NormRange[]5->SetDirectory(0);
   Graph_sigpdfrelcat0_allProcs_Norm[CMS_hgg_mass]_Range[123.758000_125.866000]_NormRange[]5->SetStats(0);
   graph->SetHistogram(Graph_sigpdfrelcat0_allProcs_Norm[CMS_hgg_mass]_Range[123.758000_125.866000]_NormRange[]5);
   
   graph->Draw("l");
   
   graph = new TGraph(119);
   graph->SetName("sigpdfrelcat0_allProcs_Norm[CMS_hgg_mass]_Range[higgsRange]_NormRange[higgsRange]");
   graph->SetTitle("Projection of sigpdfrelcat0_allProcs");
   graph->SetFillColor(1);
   graph->SetFillStyle(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,105,3.870993204e-05);
   graph->SetPoint(1,105.5,4.284070789e-05);
   graph->SetPoint(2,106,4.789420999e-05);
   graph->SetPoint(3,106.5,5.428288514e-05);
   graph->SetPoint(4,107,6.261644509e-05);
   graph->SetPoint(5,107.5,7.378885807e-05);
   graph->SetPoint(6,108,8.909710548e-05);
   graph->SetPoint(7,108.5,0.0001103978825);
   graph->SetPoint(8,109,0.0001403057905);
   graph->SetPoint(9,109.5,0.0001824310098);
   graph->SetPoint(10,110,0.0002416451965);
   graph->SetPoint(11,110.5,0.0003243512479);
   graph->SetPoint(12,111,0.0004387165553);
   graph->SetPoint(13,111.5,0.0005948130189);
   graph->SetPoint(14,112,0.0008045950203);
   graph->SetPoint(15,112.5,0.001081645148);
   graph->SetPoint(16,113,0.001440633857);
   graph->SetPoint(17,113.5,0.001896478989);
   graph->SetPoint(18,114,0.002463255134);
   graph->SetPoint(19,114.5,0.003152985408);
   graph->SetPoint(20,115,0.00397454127);
   graph->SetPoint(21,115.5,0.004932990083);
   graph->SetPoint(22,116,0.006029945358);
   graph->SetPoint(23,116.5,0.007266011522);
   graph->SetPoint(24,117,0.008647626428);
   graph->SetPoint(25,117.5,0.01020261835);
   graph->SetPoint(26,118,0.01201046487);
   graph->SetPoint(27,118.5,0.01425067797);
   graph->SetPoint(28,119,0.01725950073);
   graph->SetPoint(29,119.5,0.0215584358);
   graph->SetPoint(30,120,0.02779714099);
   graph->SetPoint(31,120.5,0.03661814106);
   graph->SetPoint(32,121,0.04877372255);
   graph->SetPoint(33,121.5,0.06639437441);
   graph->SetPoint(34,121.75,0.07904289698);
   graph->SetPoint(35,122,0.09611573953);
   graph->SetPoint(36,122.25,0.1197321287);
   graph->SetPoint(37,122.375,0.1348100683);
   graph->SetPoint(38,122.5,0.1525585203);
   graph->SetPoint(39,122.625,0.1733638125);
   graph->SetPoint(40,122.75,0.1976088042);
   graph->SetPoint(41,122.875,0.2256522571);
   graph->SetPoint(42,123,0.2578057968);
   graph->SetPoint(43,123.125,0.2943167186);
   graph->SetPoint(44,123.25,0.3353758842);
   graph->SetPoint(45,123.375,0.381184377);
   graph->SetPoint(46,123.5,0.4321191503);
   graph->SetPoint(47,123.625,0.4890101937);
   graph->SetPoint(48,123.75,0.5534464923);
   graph->SetPoint(49,123.8125,0.5892303585);
   graph->SetPoint(50,123.875,0.6278630182);
   graph->SetPoint(51,123.9375,0.6696954595);
   graph->SetPoint(52,124,0.7150143078);
   graph->SetPoint(53,124.0625,0.7639720905);
   graph->SetPoint(54,124.125,0.8165079771);
   graph->SetPoint(55,124.1875,0.8722684166);
   graph->SetPoint(56,124.25,0.9305403218);
   graph->SetPoint(57,124.375,1.049769129);
   graph->SetPoint(58,124.4375,1.107354275);
   graph->SetPoint(59,124.5,1.160862083);
   graph->SetPoint(60,124.5625,1.208095983);
   graph->SetPoint(61,124.625,1.246953288);
   graph->SetPoint(62,124.6875,1.275622711);
   graph->SetPoint(63,124.75,1.292766563);
   graph->SetPoint(64,124.8125,1.297660673);
   graph->SetPoint(65,124.875,1.290269995);
   graph->SetPoint(66,124.9375,1.271247087);
   graph->SetPoint(67,125,1.241852596);
   graph->SetPoint(68,125.0625,1.203809229);
   graph->SetPoint(69,125.125,1.159110981);
   graph->SetPoint(70,125.1875,1.109815646);
   graph->SetPoint(71,125.25,1.057849794);
   graph->SetPoint(72,125.375,0.9520681844);
   graph->SetPoint(73,125.5,0.8500040152);
   graph->SetPoint(74,125.625,0.7537057318);
   graph->SetPoint(75,125.75,0.6614308125);
   graph->SetPoint(76,126,0.4815617105);
   graph->SetPoint(77,126.125,0.3951674658);
   graph->SetPoint(78,126.25,0.314880922);
   graph->SetPoint(79,126.3125,0.2780611808);
   graph->SetPoint(80,126.375,0.2439003972);
   graph->SetPoint(81,126.4375,0.212618665);
   graph->SetPoint(82,126.5,0.1843340096);
   graph->SetPoint(83,126.5625,0.1590647178);
   graph->SetPoint(84,126.625,0.1367398886);
   graph->SetPoint(85,126.6875,0.1172154702);
   graph->SetPoint(86,126.75,0.1002930453);
   graph->SetPoint(87,126.875,0.07330198677);
   graph->SetPoint(88,127,0.05377235796);
   graph->SetPoint(89,127.125,0.03982398597);
   graph->SetPoint(90,127.25,0.02990488464);
   graph->SetPoint(91,127.5,0.01778642595);
   graph->SetPoint(92,127.75,0.01153548755);
   graph->SetPoint(93,128,0.008256276637);
   graph->SetPoint(94,128.5,0.005255514762);
   graph->SetPoint(95,129,0.003596384724);
   graph->SetPoint(96,129.5,0.002574061453);
   graph->SetPoint(97,130,0.001868828839);
   graph->SetPoint(98,130.5,0.001340035629);
   graph->SetPoint(99,131,0.0009458731653);
   graph->SetPoint(100,131.5,0.0006573278353);
   graph->SetPoint(101,132,0.0004502904908);
   graph->SetPoint(102,132.5,0.0003047041245);
   graph->SetPoint(103,133,0.0002043122494);
   graph->SetPoint(104,133.5,0.0001363551587);
   graph->SetPoint(105,134,9.113191481e-05);
   graph->SetPoint(106,134.5,6.148495204e-05);
   graph->SetPoint(107,135,4.227926693e-05);
   graph->SetPoint(108,135.5,2.992725561e-05);
   graph->SetPoint(109,136,2.198541875e-05);
   graph->SetPoint(110,136.5,1.683026235e-05);
   graph->SetPoint(111,137,1.340907886e-05);
   graph->SetPoint(112,137.5,1.105542754e-05);
   graph->SetPoint(113,138,9.357121374e-06);
   graph->SetPoint(114,138.5,8.064786409e-06);
   graph->SetPoint(115,139,7.030481875e-06);
   graph->SetPoint(116,139.5,6.167755041e-06);
   graph->SetPoint(117,140,5.426432999e-06);
   graph->SetPoint(118,140,5.426432999e-06);
   
   TH1F *Graph_sigpdfrelcat0_allProcs_Norm[CMS_hgg_mass]_Range[higgsRange]_NormRange[higgsRange]6 = new TH1F("Graph_sigpdfrelcat0_allProcs_Norm[CMS_hgg_mass]_Range[higgsRange]_NormRange[higgsRange]6","Projection of sigpdfrelcat0_allProcs",119,101.5,143.5);
   Graph_sigpdfrelcat0_allProcs_Norm[CMS_hgg_mass]_Range[higgsRange]_NormRange[higgsRange]6->SetMinimum(0);
   Graph_sigpdfrelcat0_allProcs_Norm[CMS_hgg_mass]_Range[higgsRange]_NormRange[higgsRange]6->SetMaximum(1.427426);
   Graph_sigpdfrelcat0_allProcs_Norm[CMS_hgg_mass]_Range[higgsRange]_NormRange[higgsRange]6->SetDirectory(0);
   Graph_sigpdfrelcat0_allProcs_Norm[CMS_hgg_mass]_Range[higgsRange]_NormRange[higgsRange]6->SetStats(0);
   graph->SetHistogram(Graph_sigpdfrelcat0_allProcs_Norm[CMS_hgg_mass]_Range[higgsRange]_NormRange[higgsRange]6);
   
   graph->Draw("l");
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(70);
   grae->SetName("h_sig_mass_m125_cat0");
   grae->SetTitle("Histogram of sig_mass_m125_cat0_plot__CMS_hgg_mass");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(25);
   grae->SetPoint(0,105.25,0);
   grae->SetPointError(0,0.25,0.25,0,0);
   grae->SetPoint(1,105.75,0);
   grae->SetPointError(1,0.25,0.25,0,0);
   grae->SetPoint(2,106.25,0);
   grae->SetPointError(2,0.25,0.25,0,0);
   grae->SetPoint(3,106.75,0);
   grae->SetPointError(3,0.25,0.25,0,0);
   grae->SetPoint(4,107.25,0);
   grae->SetPointError(4,0.25,0.25,0,0);
   grae->SetPoint(5,107.75,5.323292e-05);
   grae->SetPointError(5,0.25,0.25,5.323292e-05,5.323292e-05);
   grae->SetPoint(6,108.25,0);
   grae->SetPointError(6,0.25,0.25,0,0);
   grae->SetPoint(7,108.75,5.90652e-05);
   grae->SetPointError(7,0.25,0.25,5.90652e-05,5.90652e-05);
   grae->SetPoint(8,109.25,0);
   grae->SetPointError(8,0.25,0.25,0,0);
   grae->SetPoint(9,109.75,6.233638e-05);
   grae->SetPointError(9,0.25,0.25,6.233638e-05,6.233638e-05);
   grae->SetPoint(10,110.25,0.0001242397);
   grae->SetPointError(10,0.25,0.25,8.816723e-05,8.816723e-05);
   grae->SetPoint(11,110.75,0.001239618);
   grae->SetPointError(11,0.25,0.25,0.000880517,0.000880517);
   grae->SetPoint(12,111.25,0.0004817922);
   grae->SetPointError(12,0.25,0.25,0.0004817922,0.0004817922);
   grae->SetPoint(13,111.75,0.002020869);
   grae->SetPointError(13,0.25,0.25,0.00120181,0.00120181);
   grae->SetPoint(14,112.25,0.001927837);
   grae->SetPointError(14,0.25,0.25,0.001141877,0.001141877);
   grae->SetPoint(15,112.75,0.001769509);
   grae->SetPointError(15,0.25,0.25,0.00118111,0.00118111);
   grae->SetPoint(16,113.25,0.00120571);
   grae->SetPointError(16,0.25,0.25,0.0008499706,0.0008499706);
   grae->SetPoint(17,113.75,0.002250566);
   grae->SetPointError(17,0.25,0.25,0.001301543,0.001301543);
   grae->SetPoint(18,114.25,0.0007768328);
   grae->SetPointError(18,0.25,0.25,0.0007768328,0.0007768328);
   grae->SetPoint(19,114.75,0.002458823);
   grae->SetPointError(19,0.25,0.25,0.001199168,0.001199168);
   grae->SetPoint(20,115.25,0.002120474);
   grae->SetPointError(20,0.25,0.25,0.001175759,0.001175759);
   grae->SetPoint(21,115.75,0.004892586);
   grae->SetPointError(21,0.25,0.25,0.001841131,0.001841131);
   grae->SetPoint(22,116.25,0.007845972);
   grae->SetPointError(22,0.25,0.25,0.002291045,0.002291045);
   grae->SetPoint(23,116.75,0.005407348);
   grae->SetPointError(23,0.25,0.25,0.001932178,0.001932178);
   grae->SetPoint(24,117.25,0.01178322);
   grae->SetPointError(24,0.25,0.25,0.002968035,0.002968035);
   grae->SetPoint(25,117.75,0.009104433);
   grae->SetPointError(25,0.25,0.25,0.00272997,0.00272997);
   grae->SetPoint(26,118.25,0.01779163);
   grae->SetPointError(26,0.25,0.25,0.003754554,0.003754554);
   grae->SetPoint(27,118.75,0.01560481);
   grae->SetPointError(27,0.25,0.25,0.003401601,0.003401601);
   grae->SetPoint(28,119.25,0.0158662);
   grae->SetPointError(28,0.25,0.25,0.003638824,0.003638824);
   grae->SetPoint(29,119.75,0.02297802);
   grae->SetPointError(29,0.25,0.25,0.004224953,0.004224953);
   grae->SetPoint(30,120.25,0.0360287);
   grae->SetPointError(30,0.25,0.25,0.005330412,0.005330412);
   grae->SetPoint(31,120.75,0.04261742);
   grae->SetPointError(31,0.25,0.25,0.005630711,0.005630711);
   grae->SetPoint(32,121.25,0.05302255);
   grae->SetPointError(32,0.25,0.25,0.006584382,0.006584382);
   grae->SetPoint(33,121.75,0.08489767);
   grae->SetPointError(33,0.25,0.25,0.008004469,0.008004469);
   grae->SetPoint(34,122.25,0.1036283);
   grae->SetPointError(34,0.25,0.25,0.009216185,0.009216185);
   grae->SetPoint(35,122.75,0.2091091);
   grae->SetPointError(35,0.25,0.25,0.01284666,0.01284666);
   grae->SetPoint(36,123.25,0.3564674);
   grae->SetPointError(36,0.25,0.25,0.01706067,0.01706067);
   grae->SetPoint(37,123.75,0.539166);
   grae->SetPointError(37,0.25,0.25,0.02122688,0.02122688);
   grae->SetPoint(38,124.25,0.9372398);
   grae->SetPointError(38,0.25,0.25,0.02741514,0.02741514);
   grae->SetPoint(39,124.75,1.260046);
   grae->SetPointError(39,0.25,0.25,0.03204428,0.03204428);
   grae->SetPoint(40,125.25,1.073218);
   grae->SetPointError(40,0.25,0.25,0.02907539,0.02907539);
   grae->SetPoint(41,125.75,0.664304);
   grae->SetPointError(41,0.25,0.25,0.02275563,0.02275563);
   grae->SetPoint(42,126.25,0.3204773);
   grae->SetPointError(42,0.25,0.25,0.01601669,0.01601669);
   grae->SetPoint(43,126.75,0.1038112);
   grae->SetPointError(43,0.25,0.25,0.008920981,0.008920981);
   grae->SetPoint(44,127.25,0.03343553);
   grae->SetPointError(44,0.25,0.25,0.00515377,0.00515377);
   grae->SetPoint(45,127.75,0.01121646);
   grae->SetPointError(45,0.25,0.25,0.002945432,0.002945432);
   grae->SetPoint(46,128.25,0.002412882);
   grae->SetPointError(46,0.25,0.25,0.001297749,0.001297749);
   grae->SetPoint(47,128.75,0.003946823);
   grae->SetPointError(47,0.25,0.25,0.001799558,0.001799558);
   grae->SetPoint(48,129.25,0.0007031095);
   grae->SetPointError(48,0.25,0.25,0.0007031095,0.0007031095);
   grae->SetPoint(49,129.75,0.001256651);
   grae->SetPointError(49,0.25,0.25,0.0009121725,0.0009121725);
   grae->SetPoint(50,130.25,0.001445498);
   grae->SetPointError(50,0.25,0.25,0.001026009,0.001026009);
   grae->SetPoint(51,130.75,0.0008319491);
   grae->SetPointError(51,0.25,0.25,0.0006212478,0.0006212478);
   grae->SetPoint(52,131.25,0.0005619678);
   grae->SetPointError(52,0.25,0.25,0.0005619678,0.0005619678);
   grae->SetPoint(53,131.75,6.435617e-05);
   grae->SetPointError(53,0.25,0.25,6.435617e-05,6.435617e-05);
   grae->SetPoint(54,132.25,0);
   grae->SetPointError(54,0.25,0.25,0,0);
   grae->SetPoint(55,132.75,0.0008894706);
   grae->SetPointError(55,0.25,0.25,0.000630326,0.000630326);
   grae->SetPoint(56,133.25,0);
   grae->SetPointError(56,0.25,0.25,0,0);
   grae->SetPoint(57,133.75,0);
   grae->SetPointError(57,0.25,0.25,0,0);
   grae->SetPoint(58,134.25,0);
   grae->SetPointError(58,0.25,0.25,0,0);
   grae->SetPoint(59,134.75,0);
   grae->SetPointError(59,0.25,0.25,0,0);
   grae->SetPoint(60,135.25,0);
   grae->SetPointError(60,0.25,0.25,0,0);
   grae->SetPoint(61,135.75,0);
   grae->SetPointError(61,0.25,0.25,0,0);
   grae->SetPoint(62,136.25,0);
   grae->SetPointError(62,0.25,0.25,0,0);
   grae->SetPoint(63,136.75,0);
   grae->SetPointError(63,0.25,0.25,0,0);
   grae->SetPoint(64,137.25,0);
   grae->SetPointError(64,0.25,0.25,0,0);
   grae->SetPoint(65,137.75,5.563129e-05);
   grae->SetPointError(65,0.25,0.25,5.563129e-05,5.563129e-05);
   grae->SetPoint(66,138.25,0);
   grae->SetPointError(66,0.25,0.25,0,0);
   grae->SetPoint(67,138.75,0);
   grae->SetPointError(67,0.25,0.25,0,0);
   grae->SetPoint(68,139.25,0);
   grae->SetPointError(68,0.25,0.25,0,0);
   grae->SetPoint(69,139.75,0);
   grae->SetPointError(69,0.25,0.25,0,0);
   
   TH1F *Graph_h_sig_mass_m125_cat02 = new TH1F("Graph_h_sig_mass_m125_cat02","Histogram of sig_mass_m125_cat0_plot__CMS_hgg_mass",100,101.5,143.5);
   Graph_h_sig_mass_m125_cat02->SetMinimum(0);
   Graph_h_sig_mass_m125_cat02->SetMaximum(1.421299);
   Graph_h_sig_mass_m125_cat02->SetDirectory(0);
   Graph_h_sig_mass_m125_cat02->SetStats(0);
   grae->SetHistogram(Graph_h_sig_mass_m125_cat02);
   
   grae->Draw("p");
   
   TH1D *frame_3a30ac40__4 = new TH1D("frame_3a30ac40__4","",70,105,140);
   frame_3a30ac40__4->SetBinContent(1,1.362554);
   frame_3a30ac40__4->SetMaximum(1.362554);
   frame_3a30ac40__4->SetEntries(2);
   frame_3a30ac40__4->SetDirectory(0);
   frame_3a30ac40__4->SetStats(0);
   frame_3a30ac40__4->GetXaxis()->SetTitle("m_{#gamma#gamma} (GeV)");
   frame_3a30ac40__4->GetXaxis()->SetNdivisions(509);
   frame_3a30ac40__4->GetYaxis()->SetTitle("Events / ( 0.5 GeV )");
   frame_3a30ac40__4->Draw("AXISSAME");
   
   TLegend *leg = new TLegend(0.15,0.55,0.5,0.89,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.03);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(19);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("h_sig_mass_m125_cat0","Simulation","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("sigpdfrelcat0_allProcs_Norm[CMS_hgg_mass]_Range[higgsRange]_NormRange[higgsRange]","Parametric model","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("sigpdfrelcat0_allProcs_Norm[CMS_hgg_mass]_Range[123.758000_125.866000]_NormRange[]","#sigma_{eff} = 1.05 GeV","fl");
   entry->SetFillColor(19);
   entry->SetFillStyle(1001);
   entry->SetLineColor(15);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TArrow *arrow = new TArrow(123.9074,0.6489577,125.767,0.6489577,0.02,"same <>");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineWidth(2);
   arrow->Draw();
   
   TPaveText *pt = new TPaveText(0.15,0.45,0.45,0.58,"brNDC");
   pt->SetFillColor(0);
   pt->SetLineColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.03);
   TText *text = pt->AddText("FWHM = 1.86 GeV");
   pt->Draw();
      tex = new TLatex(0.65,0.85,"Simulation #sqrt{s}=7TeV");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.65,0.75,"Untagged 0");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
