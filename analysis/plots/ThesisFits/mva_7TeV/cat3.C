{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr  2 19:37:27 2014) by ROOT version5.34/03
   TCanvas *c = new TCanvas("c", "c",0,0,600,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->Range(100.625,-0.4186536,144.375,3.767882);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1D *frame_5e0f31e0__43 = new TH1D("frame_5e0f31e0__43","",70,105,140);
   frame_5e0f31e0__43->SetBinContent(1,3.349228);
   frame_5e0f31e0__43->SetMaximum(3.349228);
   frame_5e0f31e0__43->SetEntries(1);
   frame_5e0f31e0__43->SetDirectory(0);
   frame_5e0f31e0__43->SetStats(0);
   frame_5e0f31e0__43->GetXaxis()->SetTitle("m_{#gamma#gamma} (GeV)");
   frame_5e0f31e0__43->GetXaxis()->SetNdivisions(509);
   frame_5e0f31e0__43->GetYaxis()->SetTitle("Events / ( 0.5 GeV )");
   frame_5e0f31e0__43->Draw("FUNC");
   
   TGraph *graph = new TGraph(74);
   graph->SetName("sigpdfrelcat3_allProcs_Norm[CMS_hgg_mass]_Range[122.286000_127.000000]_NormRange[]");
   graph->SetTitle("Projection of sigpdfrelcat3_allProcs");
   graph->SetFillColor(19);
   graph->SetLineColor(15);
   graph->SetLineWidth(2);
   graph->SetPoint(0,122.286,0);
   graph->SetPoint(1,122.286,1.514743971);
   graph->SetPoint(2,122.3533429,1.563527168);
   graph->SetPoint(3,122.4206857,1.613357249);
   graph->SetPoint(4,122.4880286,1.664177971);
   graph->SetPoint(5,122.5553714,1.715924105);
   graph->SetPoint(6,122.6227143,1.768521205);
   graph->SetPoint(7,122.6900571,1.821885447);
   graph->SetPoint(8,122.7574,1.875923534);
   graph->SetPoint(9,122.8247429,1.930532681);
   graph->SetPoint(10,122.8920857,1.985600676);
   graph->SetPoint(11,122.9594286,2.04100603);
   graph->SetPoint(12,123.0267714,2.096618212);
   graph->SetPoint(13,123.0941143,2.152297978);
   graph->SetPoint(14,123.1614571,2.207897788);
   graph->SetPoint(15,123.2288,2.263262323);
   graph->SetPoint(16,123.2961429,2.318229089);
   graph->SetPoint(17,123.3634857,2.372629115);
   graph->SetPoint(18,123.4308286,2.426287737);
   graph->SetPoint(19,123.4981714,2.479025475);
   graph->SetPoint(20,123.5655143,2.530658978);
   graph->SetPoint(21,123.6328571,2.58100205);
   graph->SetPoint(22,123.7002,2.629866741);
   graph->SetPoint(23,123.7675429,2.677064495);
   graph->SetPoint(24,123.8348857,2.722407348);
   graph->SetPoint(25,123.9022286,2.765709157);
   graph->SetPoint(26,123.9695714,2.806786869);
   graph->SetPoint(27,124.0369143,2.845461792);
   graph->SetPoint(28,124.1042571,2.881560874);
   graph->SetPoint(29,124.1716,2.914917979);
   graph->SetPoint(30,124.2389429,2.945375126);
   graph->SetPoint(31,124.3062857,2.972783702);
   graph->SetPoint(32,124.3736286,2.997005627);
   graph->SetPoint(33,124.4409714,3.017914453);
   graph->SetPoint(34,124.5083143,3.035396391);
   graph->SetPoint(35,124.5756571,3.049351255);
   graph->SetPoint(36,124.643,3.059693309);
   graph->SetPoint(37,124.7103429,3.066352008);
   graph->SetPoint(38,124.7776857,3.069272632);
   graph->SetPoint(39,124.8450286,3.068416786);
   graph->SetPoint(40,124.9123714,3.063762785);
   graph->SetPoint(41,124.9797143,3.055305901);
   graph->SetPoint(42,125.0470571,3.043058478);
   graph->SetPoint(43,125.1144,3.027049904);
   graph->SetPoint(44,125.1817429,3.007326457);
   graph->SetPoint(45,125.2490857,2.983951008);
   graph->SetPoint(46,125.3164286,2.957002589);
   graph->SetPoint(47,125.3837714,2.926575847);
   graph->SetPoint(48,125.4511143,2.89278036);
   graph->SetPoint(49,125.5184571,2.855739851);
   graph->SetPoint(50,125.5858,2.815591292);
   graph->SetPoint(51,125.6531429,2.772483911);
   graph->SetPoint(52,125.7204857,2.726578116);
   graph->SetPoint(53,125.7878286,2.678044346);
   graph->SetPoint(54,125.8551714,2.627061857);
   graph->SetPoint(55,125.9225143,2.573817466);
   graph->SetPoint(56,125.9898571,2.51850425);
   graph->SetPoint(57,126.0572,2.461320233);
   graph->SetPoint(58,126.1245429,2.402467057);
   graph->SetPoint(59,126.1918857,2.342148657);
   graph->SetPoint(60,126.2592286,2.280569953);
   graph->SetPoint(61,126.3265714,2.217935577);
   graph->SetPoint(62,126.3939143,2.154448624);
   graph->SetPoint(63,126.4612571,2.090309474);
   graph->SetPoint(64,126.5286,2.025714652);
   graph->SetPoint(65,126.5959429,1.960855777);
   graph->SetPoint(66,126.6632857,1.895918573);
   graph->SetPoint(67,126.7306286,1.831081972);
   graph->SetPoint(68,126.7979714,1.766517298);
   graph->SetPoint(69,126.8653143,1.70238755);
   graph->SetPoint(70,126.9326571,1.638846776);
   graph->SetPoint(71,127,1.576039547);
   graph->SetPoint(72,127,1.576039547);
   graph->SetPoint(73,127,0);
   
   TH1F *Graph_sigpdfrelcat3_allProcs_Norm[CMS_hgg_mass]_Range[122.286000_127.000000]_NormRange[]61 = new TH1F("Graph_sigpdfrelcat3_allProcs_Norm[CMS_hgg_mass]_Range[122.286000_127.000000]_NormRange[]61","Projection of sigpdfrelcat3_allProcs",100,121.8146,127.4714);
   Graph_sigpdfrelcat3_allProcs_Norm[CMS_hgg_mass]_Range[122.286000_127.000000]_NormRange[]61->SetMinimum(0);
   Graph_sigpdfrelcat3_allProcs_Norm[CMS_hgg_mass]_Range[122.286000_127.000000]_NormRange[]61->SetMaximum(3.3762);
   Graph_sigpdfrelcat3_allProcs_Norm[CMS_hgg_mass]_Range[122.286000_127.000000]_NormRange[]61->SetDirectory(0);
   Graph_sigpdfrelcat3_allProcs_Norm[CMS_hgg_mass]_Range[122.286000_127.000000]_NormRange[]61->SetStats(0);
   graph->SetHistogram(Graph_sigpdfrelcat3_allProcs_Norm[CMS_hgg_mass]_Range[122.286000_127.000000]_NormRange[]61);
   
   graph->Draw("f");
   
   graph = new TGraph(74);
   graph->SetName("sigpdfrelcat3_allProcs_Norm[CMS_hgg_mass]_Range[122.286000_127.000000]_NormRange[]");
   graph->SetTitle("Projection of sigpdfrelcat3_allProcs");
   graph->SetFillColor(1);
   graph->SetLineColor(15);
   graph->SetLineWidth(2);
   graph->SetPoint(0,122.286,0);
   graph->SetPoint(1,122.286,1.514743971);
   graph->SetPoint(2,122.3533429,1.563527168);
   graph->SetPoint(3,122.4206857,1.613357249);
   graph->SetPoint(4,122.4880286,1.664177971);
   graph->SetPoint(5,122.5553714,1.715924105);
   graph->SetPoint(6,122.6227143,1.768521205);
   graph->SetPoint(7,122.6900571,1.821885447);
   graph->SetPoint(8,122.7574,1.875923534);
   graph->SetPoint(9,122.8247429,1.930532681);
   graph->SetPoint(10,122.8920857,1.985600676);
   graph->SetPoint(11,122.9594286,2.04100603);
   graph->SetPoint(12,123.0267714,2.096618212);
   graph->SetPoint(13,123.0941143,2.152297978);
   graph->SetPoint(14,123.1614571,2.207897788);
   graph->SetPoint(15,123.2288,2.263262323);
   graph->SetPoint(16,123.2961429,2.318229089);
   graph->SetPoint(17,123.3634857,2.372629115);
   graph->SetPoint(18,123.4308286,2.426287737);
   graph->SetPoint(19,123.4981714,2.479025475);
   graph->SetPoint(20,123.5655143,2.530658978);
   graph->SetPoint(21,123.6328571,2.58100205);
   graph->SetPoint(22,123.7002,2.629866741);
   graph->SetPoint(23,123.7675429,2.677064495);
   graph->SetPoint(24,123.8348857,2.722407348);
   graph->SetPoint(25,123.9022286,2.765709157);
   graph->SetPoint(26,123.9695714,2.806786869);
   graph->SetPoint(27,124.0369143,2.845461792);
   graph->SetPoint(28,124.1042571,2.881560874);
   graph->SetPoint(29,124.1716,2.914917979);
   graph->SetPoint(30,124.2389429,2.945375126);
   graph->SetPoint(31,124.3062857,2.972783702);
   graph->SetPoint(32,124.3736286,2.997005627);
   graph->SetPoint(33,124.4409714,3.017914453);
   graph->SetPoint(34,124.5083143,3.035396391);
   graph->SetPoint(35,124.5756571,3.049351255);
   graph->SetPoint(36,124.643,3.059693309);
   graph->SetPoint(37,124.7103429,3.066352008);
   graph->SetPoint(38,124.7776857,3.069272632);
   graph->SetPoint(39,124.8450286,3.068416786);
   graph->SetPoint(40,124.9123714,3.063762785);
   graph->SetPoint(41,124.9797143,3.055305901);
   graph->SetPoint(42,125.0470571,3.043058478);
   graph->SetPoint(43,125.1144,3.027049904);
   graph->SetPoint(44,125.1817429,3.007326457);
   graph->SetPoint(45,125.2490857,2.983951008);
   graph->SetPoint(46,125.3164286,2.957002589);
   graph->SetPoint(47,125.3837714,2.926575847);
   graph->SetPoint(48,125.4511143,2.89278036);
   graph->SetPoint(49,125.5184571,2.855739851);
   graph->SetPoint(50,125.5858,2.815591292);
   graph->SetPoint(51,125.6531429,2.772483911);
   graph->SetPoint(52,125.7204857,2.726578116);
   graph->SetPoint(53,125.7878286,2.678044346);
   graph->SetPoint(54,125.8551714,2.627061857);
   graph->SetPoint(55,125.9225143,2.573817466);
   graph->SetPoint(56,125.9898571,2.51850425);
   graph->SetPoint(57,126.0572,2.461320233);
   graph->SetPoint(58,126.1245429,2.402467057);
   graph->SetPoint(59,126.1918857,2.342148657);
   graph->SetPoint(60,126.2592286,2.280569953);
   graph->SetPoint(61,126.3265714,2.217935577);
   graph->SetPoint(62,126.3939143,2.154448624);
   graph->SetPoint(63,126.4612571,2.090309474);
   graph->SetPoint(64,126.5286,2.025714652);
   graph->SetPoint(65,126.5959429,1.960855777);
   graph->SetPoint(66,126.6632857,1.895918573);
   graph->SetPoint(67,126.7306286,1.831081972);
   graph->SetPoint(68,126.7979714,1.766517298);
   graph->SetPoint(69,126.8653143,1.70238755);
   graph->SetPoint(70,126.9326571,1.638846776);
   graph->SetPoint(71,127,1.576039547);
   graph->SetPoint(72,127,1.576039547);
   graph->SetPoint(73,127,0);
   
   TH1F *Graph_sigpdfrelcat3_allProcs_Norm[CMS_hgg_mass]_Range[122.286000_127.000000]_NormRange[]62 = new TH1F("Graph_sigpdfrelcat3_allProcs_Norm[CMS_hgg_mass]_Range[122.286000_127.000000]_NormRange[]62","Projection of sigpdfrelcat3_allProcs",100,121.8146,127.4714);
   Graph_sigpdfrelcat3_allProcs_Norm[CMS_hgg_mass]_Range[122.286000_127.000000]_NormRange[]62->SetMinimum(0);
   Graph_sigpdfrelcat3_allProcs_Norm[CMS_hgg_mass]_Range[122.286000_127.000000]_NormRange[]62->SetMaximum(3.3762);
   Graph_sigpdfrelcat3_allProcs_Norm[CMS_hgg_mass]_Range[122.286000_127.000000]_NormRange[]62->SetDirectory(0);
   Graph_sigpdfrelcat3_allProcs_Norm[CMS_hgg_mass]_Range[122.286000_127.000000]_NormRange[]62->SetStats(0);
   graph->SetHistogram(Graph_sigpdfrelcat3_allProcs_Norm[CMS_hgg_mass]_Range[122.286000_127.000000]_NormRange[]62);
   
   graph->Draw("l");
   
   graph = new TGraph(101);
   graph->SetName("sigpdfrelcat3_allProcs_Norm[CMS_hgg_mass]_Range[higgsRange]_NormRange[higgsRange]");
   graph->SetTitle("Projection of sigpdfrelcat3_allProcs");
   graph->SetFillColor(1);
   graph->SetFillStyle(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,105,0.005242474947);
   graph->SetPoint(1,105.5,0.005718481567);
   graph->SetPoint(2,106,0.0062261317);
   graph->SetPoint(3,106.5,0.006766310685);
   graph->SetPoint(4,107,0.007341215781);
   graph->SetPoint(5,107.5,0.007955953109);
   graph->SetPoint(6,108,0.008621002279);
   graph->SetPoint(7,108.5,0.009355585857);
   graph->SetPoint(8,109,0.0101916427);
   graph->SetPoint(9,109.5,0.01117757482);
   graph->SetPoint(10,110,0.01238032904);
   graph->SetPoint(11,110.5,0.01388396922);
   graph->SetPoint(12,111,0.01578311803);
   graph->SetPoint(13,111.5,0.01817092753);
   graph->SetPoint(14,112,0.02112372636);
   graph->SetPoint(15,112.5,0.02468777649);
   graph->SetPoint(16,113,0.02887653843);
   graph->SetPoint(17,113.5,0.03368790708);
   graph->SetPoint(18,114,0.03914861648);
   graph->SetPoint(19,114.5,0.04538697887);
   graph->SetPoint(20,115,0.05272642467);
   graph->SetPoint(21,115.5,0.06178346075);
   graph->SetPoint(22,116,0.07354770205);
   graph->SetPoint(23,116.5,0.08942092132);
   graph->SetPoint(24,117,0.1111977553);
   graph->SetPoint(25,117.5,0.1409836645);
   graph->SetPoint(26,118,0.1810687746);
   graph->SetPoint(27,118.5,0.2338152462);
   graph->SetPoint(28,119,0.3016741532);
   graph->SetPoint(29,119.5,0.387506662);
   graph->SetPoint(30,119.75,0.4383530329);
   graph->SetPoint(31,120,0.4953713187);
   graph->SetPoint(32,120.25,0.5594544225);
   graph->SetPoint(33,120.5,0.631718405);
   graph->SetPoint(34,120.75,0.7135113536);
   graph->SetPoint(35,121,0.8063840193);
   graph->SetPoint(36,121.25,0.9120062435);
   graph->SetPoint(37,121.5,1.032016035);
   graph->SetPoint(38,121.75,1.167795308);
   graph->SetPoint(39,122,1.32017801);
   graph->SetPoint(40,122.25,1.489111775);
   graph->SetPoint(41,122.5,1.673311178);
   graph->SetPoint(42,122.75,1.869955666);
   graph->SetPoint(43,123,2.074494136);
   graph->SetPoint(44,123.25,2.280617009);
   graph->SetPoint(45,123.5,2.480442909);
   graph->SetPoint(46,123.75,2.66494053);
   graph->SetPoint(47,123.875,2.748458642);
   graph->SetPoint(48,124,2.824570041);
   graph->SetPoint(49,124.125,2.892135215);
   graph->SetPoint(50,124.25,2.950088382);
   graph->SetPoint(51,124.375,2.997464889);
   graph->SetPoint(52,124.5,3.033426988);
   graph->SetPoint(53,124.625,3.057287037);
   graph->SetPoint(54,124.75,3.068527247);
   graph->SetPoint(55,124.875,3.066815201);
   graph->SetPoint(56,125,3.05201453);
   graph->SetPoint(57,125.125,3.024190297);
   graph->SetPoint(58,125.25,2.983608869);
   graph->SetPoint(59,125.375,2.930732237);
   graph->SetPoint(60,125.5,2.866207016);
   graph->SetPoint(61,125.625,2.790848496);
   graph->SetPoint(62,125.75,2.70562037);
   graph->SetPoint(63,125.875,2.611610873);
   graph->SetPoint(64,126,2.510006222);
   graph->SetPoint(65,126.25,2.28907561);
   graph->SetPoint(66,126.5,2.053190832);
   graph->SetPoint(67,127,1.576039547);
   graph->SetPoint(68,127.25,1.351419941);
   graph->SetPoint(69,127.5,1.144243115);
   graph->SetPoint(70,127.75,0.9581443229);
   graph->SetPoint(71,128,0.7948896212);
   graph->SetPoint(72,128.25,0.6546514832);
   graph->SetPoint(73,128.5,0.5363718691);
   graph->SetPoint(74,128.75,0.4381505415);
   graph->SetPoint(75,129,0.3576082687);
   graph->SetPoint(76,129.25,0.2921911226);
   graph->SetPoint(77,129.5,0.239399283);
   graph->SetPoint(78,129.75,0.1969385059);
   graph->SetPoint(79,130,0.1628029543);
   graph->SetPoint(80,130.5,0.1130611603);
   graph->SetPoint(81,131,0.08016433113);
   graph->SetPoint(82,131.5,0.05784347335);
   graph->SetPoint(83,132,0.0422939434);
   graph->SetPoint(84,132.5,0.0311955525);
   graph->SetPoint(85,133,0.02310307711);
   graph->SetPoint(86,133.5,0.0170987346);
   graph->SetPoint(87,134,0.01259176057);
   graph->SetPoint(88,134.5,0.009194949002);
   graph->SetPoint(89,135,0.006645059282);
   graph->SetPoint(90,135.5,0.004752359554);
   graph->SetPoint(91,136,0.003370899504);
   graph->SetPoint(92,136.5,0.00238285538);
   graph->SetPoint(93,137,0.001691318526);
   graph->SetPoint(94,137.5,0.001217255333);
   graph->SetPoint(95,138,0.0008978999883);
   graph->SetPoint(96,138.5,0.0006851873633);
   graph->SetPoint(97,139,0.000543779395);
   graph->SetPoint(98,139.5,0.000448761034);
   graph->SetPoint(99,140,0.0003832741135);
   graph->SetPoint(100,140,0.0003832741135);
   
   TH1F *Graph_sigpdfrelcat3_allProcs_Norm[CMS_hgg_mass]_Range[higgsRange]_NormRange[higgsRange]63 = new TH1F("Graph_sigpdfrelcat3_allProcs_Norm[CMS_hgg_mass]_Range[higgsRange]_NormRange[higgsRange]63","Projection of sigpdfrelcat3_allProcs",101,101.5,143.5);
   Graph_sigpdfrelcat3_allProcs_Norm[CMS_hgg_mass]_Range[higgsRange]_NormRange[higgsRange]63->SetMinimum(0);
   Graph_sigpdfrelcat3_allProcs_Norm[CMS_hgg_mass]_Range[higgsRange]_NormRange[higgsRange]63->SetMaximum(3.375342);
   Graph_sigpdfrelcat3_allProcs_Norm[CMS_hgg_mass]_Range[higgsRange]_NormRange[higgsRange]63->SetDirectory(0);
   Graph_sigpdfrelcat3_allProcs_Norm[CMS_hgg_mass]_Range[higgsRange]_NormRange[higgsRange]63->SetStats(0);
   graph->SetHistogram(Graph_sigpdfrelcat3_allProcs_Norm[CMS_hgg_mass]_Range[higgsRange]_NormRange[higgsRange]63);
   
   graph->Draw("l");
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(70);
   grae->SetName("h_sig_mass_m125_cat3");
   grae->SetTitle("Histogram of sig_mass_m125_cat3_plot__CMS_hgg_mass");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(25);
   grae->SetPoint(0,105.25,0.01121988);
   grae->SetPointError(0,0.25,0.25,0.006237056,0.006237056);
   grae->SetPoint(1,105.75,0.003288097);
   grae->SetPointError(1,0.25,0.25,0.001738634,0.001738634);
   grae->SetPoint(2,106.25,0.002608257);
   grae->SetPointError(2,0.25,0.25,0.002078994,0.002078994);
   grae->SetPoint(3,106.75,0.007915824);
   grae->SetPointError(3,0.25,0.25,0.003386894,0.003386894);
   grae->SetPoint(4,107.25,0.006882175);
   grae->SetPointError(4,0.25,0.25,0.003014392,0.003014392);
   grae->SetPoint(5,107.75,0.01542364);
   grae->SetPointError(5,0.25,0.25,0.00609544,0.00609544);
   grae->SetPoint(6,108.25,0.008908856);
   grae->SetPointError(6,0.25,0.25,0.00360721,0.00360721);
   grae->SetPoint(7,108.75,0.009596447);
   grae->SetPointError(7,0.25,0.25,0.004090552,0.004090552);
   grae->SetPoint(8,109.25,0.01113081);
   grae->SetPointError(8,0.25,0.25,0.004526932,0.004526932);
   grae->SetPoint(9,109.75,0.007556119);
   grae->SetPointError(9,0.25,0.25,0.00377338,0.00377338);
   grae->SetPoint(10,110.25,0.02083819);
   grae->SetPointError(10,0.25,0.25,0.006434423,0.006434423);
   grae->SetPoint(11,110.75,0.01525369);
   grae->SetPointError(11,0.25,0.25,0.005799882,0.005799882);
   grae->SetPoint(12,111.25,0.01785474);
   grae->SetPointError(12,0.25,0.25,0.005576848,0.005576848);
   grae->SetPoint(13,111.75,0.0178007);
   grae->SetPointError(13,0.25,0.25,0.005419752,0.005419752);
   grae->SetPoint(14,112.25,0.02087254);
   grae->SetPointError(14,0.25,0.25,0.005931776,0.005931776);
   grae->SetPoint(15,112.75,0.02024954);
   grae->SetPointError(15,0.25,0.25,0.005362162,0.005362162);
   grae->SetPoint(16,113.25,0.03961325);
   grae->SetPointError(16,0.25,0.25,0.008339077,0.008339077);
   grae->SetPoint(17,113.75,0.03479749);
   grae->SetPointError(17,0.25,0.25,0.008335161,0.008335161);
   grae->SetPoint(18,114.25,0.04301907);
   grae->SetPointError(18,0.25,0.25,0.00918619,0.00918619);
   grae->SetPoint(19,114.75,0.05219666);
   grae->SetPointError(19,0.25,0.25,0.009346611,0.009346611);
   grae->SetPoint(20,115.25,0.05728403);
   grae->SetPointError(20,0.25,0.25,0.009658121,0.009658121);
   grae->SetPoint(21,115.75,0.06279559);
   grae->SetPointError(21,0.25,0.25,0.01020135,0.01020135);
   grae->SetPoint(22,116.25,0.07550698);
   grae->SetPointError(22,0.25,0.25,0.01168896,0.01168896);
   grae->SetPoint(23,116.75,0.1191805);
   grae->SetPointError(23,0.25,0.25,0.01492923,0.01492923);
   grae->SetPoint(24,117.25,0.1153259);
   grae->SetPointError(24,0.25,0.25,0.0137531,0.0137531);
   grae->SetPoint(25,117.75,0.1598);
   grae->SetPointError(25,0.25,0.25,0.01705036,0.01705036);
   grae->SetPoint(26,118.25,0.2198276);
   grae->SetPointError(26,0.25,0.25,0.02019217,0.02019217);
   grae->SetPoint(27,118.75,0.2743894);
   grae->SetPointError(27,0.25,0.25,0.02176139,0.02176139);
   grae->SetPoint(28,119.25,0.3386568);
   grae->SetPointError(28,0.25,0.25,0.02448501,0.02448501);
   grae->SetPoint(29,119.75,0.4187873);
   grae->SetPointError(29,0.25,0.25,0.02690879,0.02690879);
   grae->SetPoint(30,120.25,0.556554);
   grae->SetPointError(30,0.25,0.25,0.03142222,0.03142222);
   grae->SetPoint(31,120.75,0.7001688);
   grae->SetPointError(31,0.25,0.25,0.03497382,0.03497382);
   grae->SetPoint(32,121.25,0.9303261);
   grae->SetPointError(32,0.25,0.25,0.04074327,0.04074327);
   grae->SetPoint(33,121.75,1.127672);
   grae->SetPointError(33,0.25,0.25,0.04418919,0.04418919);
   grae->SetPoint(34,122.25,1.537216);
   grae->SetPointError(34,0.25,0.25,0.05197106,0.05197106);
   grae->SetPoint(35,122.75,1.906029);
   grae->SetPointError(35,0.25,0.25,0.05804791,0.05804791);
   grae->SetPoint(36,123.25,2.197364);
   grae->SetPointError(36,0.25,0.25,0.06247162,0.06247162);
   grae->SetPoint(37,123.75,2.648041);
   grae->SetPointError(37,0.25,0.25,0.06868104,0.06868104);
   grae->SetPoint(38,124.25,2.984182);
   grae->SetPointError(38,0.25,0.25,0.07275266,0.07275266);
   grae->SetPoint(39,124.75,3.115761);
   grae->SetPointError(39,0.25,0.25,0.07398039,0.07398039);
   grae->SetPoint(40,125.25,2.983573);
   grae->SetPointError(40,0.25,0.25,0.07207758,0.07207758);
   grae->SetPoint(41,125.75,2.70366);
   grae->SetPointError(41,0.25,0.25,0.06922829,0.06922829);
   grae->SetPoint(42,126.25,2.296583);
   grae->SetPointError(42,0.25,0.25,0.06413555,0.06413555);
   grae->SetPoint(43,126.75,1.789766);
   grae->SetPointError(43,0.25,0.25,0.05627032,0.05627032);
   grae->SetPoint(44,127.25,1.30334);
   grae->SetPointError(44,0.25,0.25,0.04750264,0.04750264);
   grae->SetPoint(45,127.75,0.9390973);
   grae->SetPointError(45,0.25,0.25,0.04006338,0.04006338);
   grae->SetPoint(46,128.25,0.6579868);
   grae->SetPointError(46,0.25,0.25,0.03458065,0.03458065);
   grae->SetPoint(47,128.75,0.4694086);
   grae->SetPointError(47,0.25,0.25,0.02904906,0.02904906);
   grae->SetPoint(48,129.25,0.3084094);
   grae->SetPointError(48,0.25,0.25,0.02326939,0.02326939);
   grae->SetPoint(49,129.75,0.2209764);
   grae->SetPointError(49,0.25,0.25,0.01980502,0.01980502);
   grae->SetPoint(50,130.25,0.126769);
   grae->SetPointError(50,0.25,0.25,0.01496741,0.01496741);
   grae->SetPoint(51,130.75,0.09087455);
   grae->SetPointError(51,0.25,0.25,0.01307435,0.01307435);
   grae->SetPoint(52,131.25,0.05548365);
   grae->SetPointError(52,0.25,0.25,0.009637552,0.009637552);
   grae->SetPoint(53,131.75,0.05241219);
   grae->SetPointError(53,0.25,0.25,0.01003725,0.01003725);
   grae->SetPoint(54,132.25,0.04363554);
   grae->SetPointError(54,0.25,0.25,0.008913615,0.008913615);
   grae->SetPoint(55,132.75,0.01878111);
   grae->SetPointError(55,0.25,0.25,0.005596293,0.005596293);
   grae->SetPoint(56,133.25,0.01191981);
   grae->SetPointError(56,0.25,0.25,0.004536596,0.004536596);
   grae->SetPoint(57,133.75,0.01845036);
   grae->SetPointError(57,0.25,0.25,0.005946898,0.005946898);
   grae->SetPoint(58,134.25,0.007198032);
   grae->SetPointError(58,0.25,0.25,0.003359228,0.003359228);
   grae->SetPoint(59,134.75,0.01384816);
   grae->SetPointError(59,0.25,0.25,0.005922157,0.005922157);
   grae->SetPoint(60,135.25,0.004105869);
   grae->SetPointError(60,0.25,0.25,0.002655578,0.002655578);
   grae->SetPoint(61,135.75,0.003683643);
   grae->SetPointError(61,0.25,0.25,0.002381369,0.002381369);
   grae->SetPoint(62,136.25,0.001976721);
   grae->SetPointError(62,0.25,0.25,0.001730379,0.001730379);
   grae->SetPoint(63,136.75,0.0003375257);
   grae->SetPointError(63,0.25,0.25,0.0002643792,0.0002643792);
   grae->SetPoint(64,137.25,0.001950746);
   grae->SetPointError(64,0.25,0.25,0.00178124,0.00178124);
   grae->SetPoint(65,137.75,8.758581e-05);
   grae->SetPointError(65,0.25,0.25,8.758581e-05,8.758581e-05);
   grae->SetPoint(66,138.25,0.0003411343);
   grae->SetPointError(66,0.25,0.25,0.000207815,0.000207815);
   grae->SetPoint(67,138.75,0.0001142512);
   grae->SetPointError(67,0.25,0.25,0.0001142512,0.0001142512);
   grae->SetPoint(68,139.25,0.0001806426);
   grae->SetPointError(68,0.25,0.25,0.0001277442,0.0001277442);
   grae->SetPoint(69,139.75,8.840962e-05);
   grae->SetPointError(69,0.25,0.25,8.840962e-05,8.840962e-05);
   
   TH1F *Graph_h_sig_mass_m125_cat321 = new TH1F("Graph_h_sig_mass_m125_cat321","Histogram of sig_mass_m125_cat3_plot__CMS_hgg_mass",100,101.5,143.5);
   Graph_h_sig_mass_m125_cat321->SetMinimum(0);
   Graph_h_sig_mass_m125_cat321->SetMaximum(3.508715);
   Graph_h_sig_mass_m125_cat321->SetDirectory(0);
   Graph_h_sig_mass_m125_cat321->SetStats(0);
   grae->SetHistogram(Graph_h_sig_mass_m125_cat321);
   
   grae->Draw("p");
   
   TH1D *frame_5e0f31e0__44 = new TH1D("frame_5e0f31e0__44","",70,105,140);
   frame_5e0f31e0__44->SetBinContent(1,3.349228);
   frame_5e0f31e0__44->SetMaximum(3.349228);
   frame_5e0f31e0__44->SetEntries(1);
   frame_5e0f31e0__44->SetDirectory(0);
   frame_5e0f31e0__44->SetStats(0);
   frame_5e0f31e0__44->GetXaxis()->SetTitle("m_{#gamma#gamma} (GeV)");
   frame_5e0f31e0__44->GetXaxis()->SetNdivisions(509);
   frame_5e0f31e0__44->GetYaxis()->SetTitle("Events / ( 0.5 GeV )");
   frame_5e0f31e0__44->Draw("AXISSAME");
   
   TLegend *leg = new TLegend(0.15,0.55,0.5,0.89,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.03);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(19);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("h_sig_mass_m125_cat3","Simulation","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("sigpdfrelcat3_allProcs_Norm[CMS_hgg_mass]_Range[higgsRange]_NormRange[higgsRange]","Parametric model","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("sigpdfrelcat3_allProcs_Norm[CMS_hgg_mass]_Range[122.286000_127.000000]_NormRange[]","#sigma_{eff} = 2.36 GeV","fl");
   entry->SetFillColor(19);
   entry->SetFillStyle(1001);
   entry->SetLineColor(15);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TArrow *arrow = new TArrow(122.3138,1.534433,127.0446,1.534433,0.02,"same <>");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineWidth(2);
   arrow->Draw();
   
   TPaveText *pt = new TPaveText(0.15,0.45,0.45,0.58,"brNDC");
   pt->SetFillColor(0);
   pt->SetLineColor(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.03);
   TText *text = pt->AddText("FWHM = 4.73 GeV");
   pt->Draw();
      tex = new TLatex(0.65,0.85,"Simulation #sqrt{s}=7TeV");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.65,0.75,"Untagged 3");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
