{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr  2 19:37:32 2014) by ROOT version5.34/03
   TCanvas *c = new TCanvas("c", "c",0,0,600,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->Range(100.625,-0.03586709,144.375,0.3228038);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1D *frame_5e0d01e0__45 = new TH1D("frame_5e0d01e0__45","",70,105,140);
   frame_5e0d01e0__45->SetBinContent(1,0.2869367);
   frame_5e0d01e0__45->SetMaximum(0.2869367);
   frame_5e0d01e0__45->SetEntries(1);
   frame_5e0d01e0__45->SetDirectory(0);
   frame_5e0d01e0__45->SetStats(0);
   frame_5e0d01e0__45->GetXaxis()->SetTitle("m_{#gamma#gamma} (GeV)");
   frame_5e0d01e0__45->GetXaxis()->SetNdivisions(509);
   frame_5e0d01e0__45->GetYaxis()->SetTitle("Events / ( 0.5 GeV )");
   frame_5e0d01e0__45->Draw("FUNC");
   
   TGraph *graph = new TGraph(74);
   graph->SetName("sigpdfrelcat4_allProcs_Norm[CMS_hgg_mass]_Range[123.372000_126.202000]_NormRange[]");
   graph->SetTitle("Projection of sigpdfrelcat4_allProcs");
   graph->SetFillColor(19);
   graph->SetLineColor(15);
   graph->SetLineWidth(2);
   graph->SetPoint(0,123.372,0);
   graph->SetPoint(1,123.372,0.1183972602);
   graph->SetPoint(2,123.4124286,0.1228209993);
   graph->SetPoint(3,123.4528571,0.1273372241);
   graph->SetPoint(4,123.4932857,0.1319385075);
   graph->SetPoint(5,123.5337143,0.1366166084);
   graph->SetPoint(6,123.5741429,0.1413624771);
   graph->SetPoint(7,123.6145714,0.1461662666);
   graph->SetPoint(8,123.655,0.1510173511);
   graph->SetPoint(9,123.6954286,0.1559043505);
   graph->SetPoint(10,123.7358571,0.1608151629);
   graph->SetPoint(11,123.7762857,0.1657370034);
   graph->SetPoint(12,123.8167143,0.1706564499);
   graph->SetPoint(13,123.8571429,0.1755594961);
   graph->SetPoint(14,123.8975714,0.1804316106);
   graph->SetPoint(15,123.938,0.1852578034);
   graph->SetPoint(16,123.9784286,0.1900226968);
   graph->SetPoint(17,124.0188571,0.1947106041);
   graph->SetPoint(18,124.0592857,0.199305611);
   graph->SetPoint(19,124.0997143,0.2037916637);
   graph->SetPoint(20,124.1401429,0.2081526598);
   graph->SetPoint(21,124.1805714,0.2123725423);
   graph->SetPoint(22,124.221,0.2164353968);
   graph->SetPoint(23,124.2614286,0.2203255495);
   graph->SetPoint(24,124.3018571,0.224027667);
   graph->SetPoint(25,124.3422857,0.2275268551);
   graph->SetPoint(26,124.3827143,0.2308087573);
   graph->SetPoint(27,124.4231429,0.2338596512);
   graph->SetPoint(28,124.4635714,0.2366665421);
   graph->SetPoint(29,124.504,0.2392172537);
   graph->SetPoint(30,124.5444286,0.2415005132);
   graph->SetPoint(31,124.5848571,0.2435060321);
   graph->SetPoint(32,124.6252857,0.2452245807);
   graph->SetPoint(33,124.6657143,0.2466480553);
   graph->SetPoint(34,124.7061429,0.2477695392);
   graph->SetPoint(35,124.7465714,0.2485833538);
   graph->SetPoint(36,124.787,0.2490851029);
   graph->SetPoint(37,124.8274286,0.2492717068);
   graph->SetPoint(38,124.8678571,0.249141427);
   graph->SetPoint(39,124.9082857,0.2486938817);
   graph->SetPoint(40,124.9487143,0.2479300508);
   graph->SetPoint(41,124.9891429,0.2468522714);
   graph->SetPoint(42,125.0295714,0.2454642226);
   graph->SetPoint(43,125.07,0.2437709009);
   graph->SetPoint(44,125.1104286,0.241778586);
   graph->SetPoint(45,125.1508571,0.2394947973);
   graph->SetPoint(46,125.1912857,0.2369282411);
   graph->SetPoint(47,125.2317143,0.2340887505);
   graph->SetPoint(48,125.2721429,0.2309872162);
   graph->SetPoint(49,125.3125714,0.2276355125);
   graph->SetPoint(50,125.353,0.2240464146);
   graph->SetPoint(51,125.3934286,0.2202335127);
   graph->SetPoint(52,125.4338571,0.2162111204);
   graph->SetPoint(53,125.4742857,0.2119941797);
   graph->SetPoint(54,125.5147143,0.2075981634);
   graph->SetPoint(55,125.5551429,0.2030389752);
   graph->SetPoint(56,125.5955714,0.1983328489);
   graph->SetPoint(57,125.636,0.1934962473);
   graph->SetPoint(58,125.6764286,0.1885457621);
   graph->SetPoint(59,125.7168571,0.1834980143);
   graph->SetPoint(60,125.7572857,0.1783695573);
   graph->SetPoint(61,125.7977143,0.1731767836);
   graph->SetPoint(62,125.8381429,0.1679358338);
   graph->SetPoint(63,125.8785714,0.1626625115);
   graph->SetPoint(64,125.919,0.1573722027);
   graph->SetPoint(65,125.9594286,0.152079801);
   graph->SetPoint(66,125.9998571,0.14679964);
   graph->SetPoint(67,126.0402857,0.1415454318);
   graph->SetPoint(68,126.0807143,0.1363302136);
   graph->SetPoint(69,126.1211429,0.1311663022);
   graph->SetPoint(70,126.1615714,0.1260652556);
   graph->SetPoint(71,126.202,0.1210378434);
   graph->SetPoint(72,126.202,0.1210378434);
   graph->SetPoint(73,126.202,0);
   
   TH1F *Graph_sigpdfrelcat4_allProcs_Norm[CMS_hgg_mass]_Range[123.372000_126.202000]_NormRange[]64 = new TH1F("Graph_sigpdfrelcat4_allProcs_Norm[CMS_hgg_mass]_Range[123.372000_126.202000]_NormRange[]64","Projection of sigpdfrelcat4_allProcs",100,123.089,126.485);
   Graph_sigpdfrelcat4_allProcs_Norm[CMS_hgg_mass]_Range[123.372000_126.202000]_NormRange[]64->SetMinimum(0);
   Graph_sigpdfrelcat4_allProcs_Norm[CMS_hgg_mass]_Range[123.372000_126.202000]_NormRange[]64->SetMaximum(0.2741989);
   Graph_sigpdfrelcat4_allProcs_Norm[CMS_hgg_mass]_Range[123.372000_126.202000]_NormRange[]64->SetDirectory(0);
   Graph_sigpdfrelcat4_allProcs_Norm[CMS_hgg_mass]_Range[123.372000_126.202000]_NormRange[]64->SetStats(0);
   graph->SetHistogram(Graph_sigpdfrelcat4_allProcs_Norm[CMS_hgg_mass]_Range[123.372000_126.202000]_NormRange[]64);
   
   graph->Draw("f");
   
   graph = new TGraph(74);
   graph->SetName("sigpdfrelcat4_allProcs_Norm[CMS_hgg_mass]_Range[123.372000_126.202000]_NormRange[]");
   graph->SetTitle("Projection of sigpdfrelcat4_allProcs");
   graph->SetFillColor(1);
   graph->SetLineColor(15);
   graph->SetLineWidth(2);
   graph->SetPoint(0,123.372,0);
   graph->SetPoint(1,123.372,0.1183972602);
   graph->SetPoint(2,123.4124286,0.1228209993);
   graph->SetPoint(3,123.4528571,0.1273372241);
   graph->SetPoint(4,123.4932857,0.1319385075);
   graph->SetPoint(5,123.5337143,0.1366166084);
   graph->SetPoint(6,123.5741429,0.1413624771);
   graph->SetPoint(7,123.6145714,0.1461662666);
   graph->SetPoint(8,123.655,0.1510173511);
   graph->SetPoint(9,123.6954286,0.1559043505);
   graph->SetPoint(10,123.7358571,0.1608151629);
   graph->SetPoint(11,123.7762857,0.1657370034);
   graph->SetPoint(12,123.8167143,0.1706564499);
   graph->SetPoint(13,123.8571429,0.1755594961);
   graph->SetPoint(14,123.8975714,0.1804316106);
   graph->SetPoint(15,123.938,0.1852578034);
   graph->SetPoint(16,123.9784286,0.1900226968);
   graph->SetPoint(17,124.0188571,0.1947106041);
   graph->SetPoint(18,124.0592857,0.199305611);
   graph->SetPoint(19,124.0997143,0.2037916637);
   graph->SetPoint(20,124.1401429,0.2081526598);
   graph->SetPoint(21,124.1805714,0.2123725423);
   graph->SetPoint(22,124.221,0.2164353968);
   graph->SetPoint(23,124.2614286,0.2203255495);
   graph->SetPoint(24,124.3018571,0.224027667);
   graph->SetPoint(25,124.3422857,0.2275268551);
   graph->SetPoint(26,124.3827143,0.2308087573);
   graph->SetPoint(27,124.4231429,0.2338596512);
   graph->SetPoint(28,124.4635714,0.2366665421);
   graph->SetPoint(29,124.504,0.2392172537);
   graph->SetPoint(30,124.5444286,0.2415005132);
   graph->SetPoint(31,124.5848571,0.2435060321);
   graph->SetPoint(32,124.6252857,0.2452245807);
   graph->SetPoint(33,124.6657143,0.2466480553);
   graph->SetPoint(34,124.7061429,0.2477695392);
   graph->SetPoint(35,124.7465714,0.2485833538);
   graph->SetPoint(36,124.787,0.2490851029);
   graph->SetPoint(37,124.8274286,0.2492717068);
   graph->SetPoint(38,124.8678571,0.249141427);
   graph->SetPoint(39,124.9082857,0.2486938817);
   graph->SetPoint(40,124.9487143,0.2479300508);
   graph->SetPoint(41,124.9891429,0.2468522714);
   graph->SetPoint(42,125.0295714,0.2454642226);
   graph->SetPoint(43,125.07,0.2437709009);
   graph->SetPoint(44,125.1104286,0.241778586);
   graph->SetPoint(45,125.1508571,0.2394947973);
   graph->SetPoint(46,125.1912857,0.2369282411);
   graph->SetPoint(47,125.2317143,0.2340887505);
   graph->SetPoint(48,125.2721429,0.2309872162);
   graph->SetPoint(49,125.3125714,0.2276355125);
   graph->SetPoint(50,125.353,0.2240464146);
   graph->SetPoint(51,125.3934286,0.2202335127);
   graph->SetPoint(52,125.4338571,0.2162111204);
   graph->SetPoint(53,125.4742857,0.2119941797);
   graph->SetPoint(54,125.5147143,0.2075981634);
   graph->SetPoint(55,125.5551429,0.2030389752);
   graph->SetPoint(56,125.5955714,0.1983328489);
   graph->SetPoint(57,125.636,0.1934962473);
   graph->SetPoint(58,125.6764286,0.1885457621);
   graph->SetPoint(59,125.7168571,0.1834980143);
   graph->SetPoint(60,125.7572857,0.1783695573);
   graph->SetPoint(61,125.7977143,0.1731767836);
   graph->SetPoint(62,125.8381429,0.1679358338);
   graph->SetPoint(63,125.8785714,0.1626625115);
   graph->SetPoint(64,125.919,0.1573722027);
   graph->SetPoint(65,125.9594286,0.152079801);
   graph->SetPoint(66,125.9998571,0.14679964);
   graph->SetPoint(67,126.0402857,0.1415454318);
   graph->SetPoint(68,126.0807143,0.1363302136);
   graph->SetPoint(69,126.1211429,0.1311663022);
   graph->SetPoint(70,126.1615714,0.1260652556);
   graph->SetPoint(71,126.202,0.1210378434);
   graph->SetPoint(72,126.202,0.1210378434);
   graph->SetPoint(73,126.202,0);
   
   TH1F *Graph_sigpdfrelcat4_allProcs_Norm[CMS_hgg_mass]_Range[123.372000_126.202000]_NormRange[]65 = new TH1F("Graph_sigpdfrelcat4_allProcs_Norm[CMS_hgg_mass]_Range[123.372000_126.202000]_NormRange[]65","Projection of sigpdfrelcat4_allProcs",100,123.089,126.485);
   Graph_sigpdfrelcat4_allProcs_Norm[CMS_hgg_mass]_Range[123.372000_126.202000]_NormRange[]65->SetMinimum(0);
   Graph_sigpdfrelcat4_allProcs_Norm[CMS_hgg_mass]_Range[123.372000_126.202000]_NormRange[]65->SetMaximum(0.2741989);
   Graph_sigpdfrelcat4_allProcs_Norm[CMS_hgg_mass]_Range[123.372000_126.202000]_NormRange[]65->SetDirectory(0);
   Graph_sigpdfrelcat4_allProcs_Norm[CMS_hgg_mass]_Range[123.372000_126.202000]_NormRange[]65->SetStats(0);
   graph->SetHistogram(Graph_sigpdfrelcat4_allProcs_Norm[CMS_hgg_mass]_Range[123.372000_126.202000]_NormRange[]65);
   
   graph->Draw("l");
   
   graph = new TGraph(115);
   graph->SetName("sigpdfrelcat4_allProcs_Norm[CMS_hgg_mass]_Range[higgsRange]_NormRange[higgsRange]");
   graph->SetTitle("Projection of sigpdfrelcat4_allProcs");
   graph->SetFillColor(1);
   graph->SetFillStyle(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,105,5.302322049e-05);
   graph->SetPoint(1,105.5,6.137916247e-05);
   graph->SetPoint(2,106,7.087455905e-05);
   graph->SetPoint(3,106.5,8.169228891e-05);
   graph->SetPoint(4,107,9.406557498e-05);
   graph->SetPoint(5,107.5,0.0001082923144);
   graph->SetPoint(6,108,0.0001247515395);
   graph->SetPoint(7,108.5,0.0001439219389);
   graph->SetPoint(8,109,0.0001664025364);
   graph->SetPoint(9,109.5,0.0001929359616);
   graph->SetPoint(10,110,0.0002244352005);
   graph->SetPoint(11,110.5,0.0002620150696);
   graph->SetPoint(12,111,0.000307029596);
   graph->SetPoint(13,111.5,0.000361115612);
   graph->SetPoint(14,112,0.0004262409588);
   graph->SetPoint(15,112.5,0.000504752995);
   graph->SetPoint(16,113,0.0005994207382);
   graph->SetPoint(17,113.5,0.0007134641353);
   graph->SetPoint(18,114,0.0008505698799);
   graph->SetPoint(19,114.5,0.001014908837);
   graph->SetPoint(20,115,0.001211200358);
   graph->SetPoint(21,115.5,0.001444921507);
   graph->SetPoint(22,116,0.001722850752);
   graph->SetPoint(23,116.5,0.002054295311);
   graph->SetPoint(24,117,0.002453609064);
   graph->SetPoint(25,117.5,0.002944930654);
   graph->SetPoint(26,118,0.00357022047);
   graph->SetPoint(27,118.5,0.004401042215);
   graph->SetPoint(28,119,0.005552214989);
   graph->SetPoint(29,119.5,0.007191094469);
   graph->SetPoint(30,120,0.009532547452);
   graph->SetPoint(31,120.5,0.01281880585);
   graph->SetPoint(32,121,0.01733832692);
   graph->SetPoint(33,121.25,0.02021579754);
   graph->SetPoint(34,121.5,0.023681909);
   graph->SetPoint(35,121.75,0.02799475698);
   graph->SetPoint(36,122,0.03357172348);
   graph->SetPoint(37,122.125,0.0370179723);
   graph->SetPoint(38,122.25,0.04102593701);
   graph->SetPoint(39,122.375,0.04570147844);
   graph->SetPoint(40,122.5,0.05115722516);
   graph->SetPoint(41,122.625,0.05750710397);
   graph->SetPoint(42,122.75,0.06485891883);
   graph->SetPoint(43,122.875,0.07330508371);
   graph->SetPoint(44,123,0.08291185449);
   graph->SetPoint(45,123.125,0.09370767172);
   graph->SetPoint(46,123.25,0.1056714903);
   graph->SetPoint(47,123.375,0.1187221961);
   graph->SetPoint(48,123.5,0.1327103501);
   graph->SetPoint(49,124,0.1925346063);
   graph->SetPoint(50,124.125,0.2065348818);
   graph->SetPoint(51,124.25,0.2192442667);
   graph->SetPoint(52,124.3125,0.224969107);
   graph->SetPoint(53,124.375,0.2301999518);
   graph->SetPoint(54,124.4375,0.2348850323);
   graph->SetPoint(55,124.5,0.2389766316);
   graph->SetPoint(56,124.5625,0.242431876);
   graph->SetPoint(57,124.625,0.2452134619);
   graph->SetPoint(58,124.6875,0.2472903005);
   graph->SetPoint(59,124.75,0.2486380674);
   graph->SetPoint(60,124.8125,0.2492396409);
   graph->SetPoint(61,124.875,0.2490854203);
   graph->SetPoint(62,124.9375,0.2481735151);
   graph->SetPoint(63,125,0.2465097985);
   graph->SetPoint(64,125.0625,0.2441078261);
   graph->SetPoint(65,125.125,0.2409886185);
   graph->SetPoint(66,125.1875,0.2371803147);
   graph->SetPoint(67,125.25,0.2327177036);
   graph->SetPoint(68,125.3125,0.2276416474);
   graph->SetPoint(69,125.375,0.2219984083);
   graph->SetPoint(70,125.5,0.2092178585);
   graph->SetPoint(71,125.625,0.1948241888);
   graph->SetPoint(72,125.75,0.1792989914);
   graph->SetPoint(73,126,0.1467810203);
   graph->SetPoint(74,126.125,0.1306767415);
   graph->SetPoint(75,126.25,0.115178198);
   graph->SetPoint(76,126.375,0.1005758836);
   graph->SetPoint(77,126.5,0.08708491804);
   graph->SetPoint(78,126.625,0.07484640833);
   graph->SetPoint(79,126.75,0.0639327487);
   graph->SetPoint(80,126.875,0.05435560447);
   graph->SetPoint(81,127,0.04607583287);
   graph->SetPoint(82,127.125,0.03901478306);
   graph->SetPoint(83,127.25,0.03306618362);
   graph->SetPoint(84,127.375,0.02810756005);
   graph->SetPoint(85,127.5,0.02401019373);
   graph->SetPoint(86,127.625,0.02064702928);
   graph->SetPoint(87,127.75,0.01789839683);
   graph->SetPoint(88,128,0.01382359489);
   graph->SetPoint(89,128.25,0.01107801077);
   graph->SetPoint(90,128.5,0.009164607298);
   graph->SetPoint(91,129,0.006678193055);
   graph->SetPoint(92,129.5,0.005064095557);
   graph->SetPoint(93,130,0.003889508169);
   graph->SetPoint(94,130.5,0.002996208433);
   graph->SetPoint(95,131,0.002305748076);
   graph->SetPoint(96,131.5,0.001768822114);
   graph->SetPoint(97,132,0.001351288156);
   graph->SetPoint(98,132.5,0.001028095897);
   graph->SetPoint(99,133,0.0007794751218);
   graph->SetPoint(100,133.5,0.0005887380667);
   graph->SetPoint(101,134,0.0004418226141);
   graph->SetPoint(102,134.5,0.0003279409227);
   graph->SetPoint(103,135,0.0002398514247);
   graph->SetPoint(104,135.5,0.0001728693545);
   graph->SetPoint(105,136,0.0001232980849);
   graph->SetPoint(106,136.5,8.751851953e-05);
   graph->SetPoint(107,137,6.204855261e-05);
   graph->SetPoint(108,137.5,4.395822889e-05);
   graph->SetPoint(109,138,3.10682377e-05);
   graph->SetPoint(110,138.5,2.186150449e-05);
   graph->SetPoint(111,139,1.529155503e-05);
   graph->SetPoint(112,139.5,1.062164307e-05);
   graph->SetPoint(113,140,7.321914744e-06);
   graph->SetPoint(114,140,7.321914744e-06);
   
   TH1F *Graph_sigpdfrelcat4_allProcs_Norm[CMS_hgg_mass]_Range[higgsRange]_NormRange[higgsRange]66 = new TH1F("Graph_sigpdfrelcat4_allProcs_Norm[CMS_hgg_mass]_Range[higgsRange]_NormRange[higgsRange]66","Projection of sigpdfrelcat4_allProcs",115,101.5,143.5);
   Graph_sigpdfrelcat4_allProcs_Norm[CMS_hgg_mass]_Range[higgsRange]_NormRange[higgsRange]66->SetMinimum(0);
   Graph_sigpdfrelcat4_allProcs_Norm[CMS_hgg_mass]_Range[higgsRange]_NormRange[higgsRange]66->SetMaximum(0.2741629);
   Graph_sigpdfrelcat4_allProcs_Norm[CMS_hgg_mass]_Range[higgsRange]_NormRange[higgsRange]66->SetDirectory(0);
   Graph_sigpdfrelcat4_allProcs_Norm[CMS_hgg_mass]_Range[higgsRange]_NormRange[higgsRange]66->SetStats(0);
   graph->SetHistogram(Graph_sigpdfrelcat4_allProcs_Norm[CMS_hgg_mass]_Range[higgsRange]_NormRange[higgsRange]66);
   
   graph->Draw("l");
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(70);
   grae->SetName("h_sig_mass_m125_cat4");
   grae->SetTitle("Histogram of sig_mass_m125_cat4_plot__CMS_hgg_mass");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(25);
   grae->SetPoint(0,105.25,0.0001570095);
   grae->SetPointError(0,0.25,0.25,0.0001570095,0.0001570095);
   grae->SetPoint(1,105.75,0);
   grae->SetPointError(1,0.25,0.25,0,0);
   grae->SetPoint(2,106.25,0.0001408961);
   grae->SetPointError(2,0.25,0.25,0.0001408961,0.0001408961);
   grae->SetPoint(3,106.75,0);
   grae->SetPointError(3,0.25,0.25,0,0);
   grae->SetPoint(4,107.25,0.0001223904);
   grae->SetPointError(4,0.25,0.25,0.0001223904,0.0001223904);
   grae->SetPoint(5,107.75,0.0003845884);
   grae->SetPointError(5,0.25,0.25,0.000222064,0.000222064);
   grae->SetPoint(6,108.25,0);
   grae->SetPointError(6,0.25,0.25,0,0);
   grae->SetPoint(7,108.75,0);
   grae->SetPointError(7,0.25,0.25,0,0);
   grae->SetPoint(8,109.25,0.0001257474);
   grae->SetPointError(8,0.25,0.25,0.0001257474,0.0001257474);
   grae->SetPoint(9,109.75,0);
   grae->SetPointError(9,0.25,0.25,0,0);
   grae->SetPoint(10,110.25,0.0002708042);
   grae->SetPointError(10,0.25,0.25,0.0001916296,0.0001916296);
   grae->SetPoint(11,110.75,0);
   grae->SetPointError(11,0.25,0.25,0,0);
   grae->SetPoint(12,111.25,0.0002506402);
   grae->SetPointError(12,0.25,0.25,0.0001772376,0.0001772376);
   grae->SetPoint(13,111.75,0.0003560544);
   grae->SetPointError(13,0.25,0.25,0.000262682,0.000262682);
   grae->SetPoint(14,112.25,0.001335904);
   grae->SetPointError(14,0.25,0.25,0.001084847,0.001084847);
   grae->SetPoint(15,112.75,0.000126036);
   grae->SetPointError(15,0.25,0.25,0.000126036,0.000126036);
   grae->SetPoint(16,113.25,0.0002815317);
   grae->SetPointError(16,0.25,0.25,0.0001992237,0.0001992237);
   grae->SetPoint(17,113.75,0.000782816);
   grae->SetPointError(17,0.25,0.25,0.0003613289,0.0003613289);
   grae->SetPoint(18,114.25,0.0004434182);
   grae->SetPointError(18,0.25,0.25,0.0002575738,0.0002575738);
   grae->SetPoint(19,114.75,0.0002649924);
   grae->SetPointError(19,0.25,0.25,0.0001874176,0.0001874176);
   grae->SetPoint(20,115.25,0.0008793161);
   grae->SetPointError(20,0.25,0.25,0.0003628758,0.0003628758);
   grae->SetPoint(21,115.75,0.00245819);
   grae->SetPointError(21,0.25,0.25,0.0009610059,0.0009610059);
   grae->SetPoint(22,116.25,0.002779498);
   grae->SetPointError(22,0.25,0.25,0.001053417,0.001053417);
   grae->SetPoint(23,116.75,0.002739624);
   grae->SetPointError(23,0.25,0.25,0.001082089,0.001082089);
   grae->SetPoint(24,117.25,0.002952261);
   grae->SetPointError(24,0.25,0.25,0.001042701,0.001042701);
   grae->SetPoint(25,117.75,0.00305681);
   grae->SetPointError(25,0.25,0.25,0.001203297,0.001203297);
   grae->SetPoint(26,118.25,0.001484963);
   grae->SetPointError(26,0.25,0.25,0.0004519904,0.0004519904);
   grae->SetPoint(27,118.75,0.004603452);
   grae->SetPointError(27,0.25,0.25,0.001155951,0.001155951);
   grae->SetPoint(28,119.25,0.00853125);
   grae->SetPointError(28,0.25,0.25,0.001679088,0.001679088);
   grae->SetPoint(29,119.75,0.009170167);
   grae->SetPointError(29,0.25,0.25,0.001829312,0.001829312);
   grae->SetPoint(30,120.25,0.01052418);
   grae->SetPointError(30,0.25,0.25,0.001776762,0.001776762);
   grae->SetPoint(31,120.75,0.01509813);
   grae->SetPointError(31,0.25,0.25,0.002199182,0.002199182);
   grae->SetPoint(32,121.25,0.02171263);
   grae->SetPointError(32,0.25,0.25,0.002657555,0.002657555);
   grae->SetPoint(33,121.75,0.02395265);
   grae->SetPointError(33,0.25,0.25,0.002738677,0.002738677);
   grae->SetPoint(34,122.25,0.03979922);
   grae->SetPointError(34,0.25,0.25,0.003046166,0.003046166);
   grae->SetPoint(35,122.75,0.07031402);
   grae->SetPointError(35,0.25,0.25,0.005395765,0.005395765);
   grae->SetPoint(36,123.25,0.1015582);
   grae->SetPointError(36,0.25,0.25,0.005557811,0.005557811);
   grae->SetPoint(37,123.75,0.1627958);
   grae->SetPointError(37,0.25,0.25,0.007086603,0.007086603);
   grae->SetPoint(38,124.25,0.2199534);
   grae->SetPointError(38,0.25,0.25,0.009211017,0.009211017);
   grae->SetPoint(39,124.75,0.2639149);
   grae->SetPointError(39,0.25,0.25,0.00935812,0.00935812);
   grae->SetPoint(40,125.25,0.2294022);
   grae->SetPointError(40,0.25,0.25,0.008620562,0.008620562);
   grae->SetPoint(41,125.75,0.1635438);
   grae->SetPointError(41,0.25,0.25,0.007184392,0.007184392);
   grae->SetPoint(42,126.25,0.119003);
   grae->SetPointError(42,0.25,0.25,0.006131474,0.006131474);
   grae->SetPoint(43,126.75,0.06459207);
   grae->SetPointError(43,0.25,0.25,0.004743414,0.004743414);
   grae->SetPoint(44,127.25,0.03542836);
   grae->SetPointError(44,0.25,0.25,0.003918544,0.003918544);
   grae->SetPoint(45,127.75,0.01557581);
   grae->SetPointError(45,0.25,0.25,0.001891797,0.001891797);
   grae->SetPoint(46,128.25,0.01137799);
   grae->SetPointError(46,0.25,0.25,0.001610731,0.001610731);
   grae->SetPoint(47,128.75,0.006966869);
   grae->SetPointError(47,0.25,0.25,0.002090718,0.002090718);
   grae->SetPoint(48,129.25,0.006469983);
   grae->SetPointError(48,0.25,0.25,0.002001276,0.002001276);
   grae->SetPoint(49,129.75,0.004066288);
   grae->SetPointError(49,0.25,0.25,0.0008062852,0.0008062852);
   grae->SetPoint(50,130.25,0.003951104);
   grae->SetPointError(50,0.25,0.25,0.0008294108,0.0008294108);
   grae->SetPoint(51,130.75,0.001122943);
   grae->SetPointError(51,0.25,0.25,0.0003988414,0.0003988414);
   grae->SetPoint(52,131.25,0.002233943);
   grae->SetPointError(52,0.25,0.25,0.0005636668,0.0005636668);
   grae->SetPoint(53,131.75,0.002213211);
   grae->SetPointError(53,0.25,0.25,0.001540001,0.001540001);
   grae->SetPoint(54,132.25,0.00236679);
   grae->SetPointError(54,0.25,0.25,0.001819073,0.001819073);
   grae->SetPoint(55,132.75,0.0004221494);
   grae->SetPointError(55,0.25,0.25,0.000244846,0.000244846);
   grae->SetPoint(56,133.25,0.0005453419);
   grae->SetPointError(56,0.25,0.25,0.0002731785,0.0002731785);
   grae->SetPoint(57,133.75,0.0002733162);
   grae->SetPointError(57,0.25,0.25,0.0002028124,0.0002028124);
   grae->SetPoint(58,134.25,0.0001293971);
   grae->SetPointError(58,0.25,0.25,0.0001293971,0.0001293971);
   grae->SetPoint(59,134.75,0.001192117);
   grae->SetPointError(59,0.25,0.25,0.001192117,0.001192117);
   grae->SetPoint(60,135.25,0.0003677907);
   grae->SetPointError(60,0.25,0.25,0.0002624344,0.0002624344);
   grae->SetPoint(61,135.75,0.0001293825);
   grae->SetPointError(61,0.25,0.25,0.0001293825,0.0001293825);
   grae->SetPoint(62,136.25,0);
   grae->SetPointError(62,0.25,0.25,0,0);
   grae->SetPoint(63,136.75,0.0001205137);
   grae->SetPointError(63,0.25,0.25,0.0001205137,0.0001205137);
   grae->SetPoint(64,137.25,0);
   grae->SetPointError(64,0.25,0.25,0,0);
   grae->SetPoint(65,137.75,0);
   grae->SetPointError(65,0.25,0.25,0,0);
   grae->SetPoint(66,138.25,0);
   grae->SetPointError(66,0.25,0.25,0,0);
   grae->SetPoint(67,138.75,0);
   grae->SetPointError(67,0.25,0.25,0,0);
   grae->SetPoint(68,139.25,0);
   grae->SetPointError(68,0.25,0.25,0,0);
   grae->SetPoint(69,139.75,0);
   grae->SetPointError(69,0.25,0.25,0,0);
   
   TH1F *Graph_h_sig_mass_m125_cat422 = new TH1F("Graph_h_sig_mass_m125_cat422","Histogram of sig_mass_m125_cat4_plot__CMS_hgg_mass",100,101.5,143.5);
   Graph_h_sig_mass_m125_cat422->SetMinimum(0);
   Graph_h_sig_mass_m125_cat422->SetMaximum(0.3006003);
   Graph_h_sig_mass_m125_cat422->SetDirectory(0);
   Graph_h_sig_mass_m125_cat422->SetStats(0);
   grae->SetHistogram(Graph_h_sig_mass_m125_cat422);
   
   grae->Draw("p");
   
   TH1D *frame_5e0d01e0__46 = new TH1D("frame_5e0d01e0__46","",70,105,140);
   frame_5e0d01e0__46->SetBinContent(1,0.2869367);
   frame_5e0d01e0__46->SetMaximum(0.2869367);
   frame_5e0d01e0__46->SetEntries(1);
   frame_5e0d01e0__46->SetDirectory(0);
   frame_5e0d01e0__46->SetStats(0);
   frame_5e0d01e0__46->GetXaxis()->SetTitle("m_{#gamma#gamma} (GeV)");
   frame_5e0d01e0__46->GetXaxis()->SetNdivisions(509);
   frame_5e0d01e0__46->GetYaxis()->SetTitle("Events / ( 0.5 GeV )");
   frame_5e0d01e0__46->Draw("AXISSAME");
   
   TLegend *leg = new TLegend(0.15,0.55,0.5,0.89,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.03);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(19);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("h_sig_mass_m125_cat4","Simulation","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("sigpdfrelcat4_allProcs_Norm[CMS_hgg_mass]_Range[higgsRange]_NormRange[higgsRange]","Parametric model","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("sigpdfrelcat4_allProcs_Norm[CMS_hgg_mass]_Range[123.372000_126.202000]_NormRange[]","#sigma_{eff} = 1.41 GeV","fl");
   entry->SetFillColor(19);
   entry->SetFillStyle(1001);
   entry->SetLineColor(15);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TArrow *arrow = new TArrow(123.429,0.1246577,126.1726,0.1246577,0.02,"same <>");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineWidth(2);
   arrow->Draw();
   
   TPaveText *pt = new TPaveText(0.15,0.45,0.45,0.58,"brNDC");
   pt->SetFillColor(0);
   pt->SetLineColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.03);
   TText *text = pt->AddText("FWHM = 2.74 GeV");
   pt->Draw();
      tex = new TLatex(0.65,0.85,"Simulation #sqrt{s}=7TeV");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.65,0.75,"Dijet Tag 0");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
