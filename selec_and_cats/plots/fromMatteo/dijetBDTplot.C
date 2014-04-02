{
  
  TFile *sigFile = TFile::Open("dijetbdt_transformed_signal_7TeV.root");

  TPad *sigCanv = (TPad*)sigFile->Get("c12");
  sigCanv->Draw();
  TList *list = (TList*)sigCanv->GetListOfPrimitives();
  list->Print();
  TH1 *ggh = (TH1*)list->FindObject("hDijetOutput2");
  TH1 *vbf = (TH1*)list->FindObject("hDijetOutput3");
  TH1 *vh = (TH1*)list->FindObject("hDijetOutput5");
  TH1 *tth = (TH1*)list->FindObject("hDijetOutput4");
  //TH1 *ggh = (TH1*)sigCanv->GetPrimitive("hDijetOutput2");
  //TH1 *vbf = (TH1*)sigCanv->GetPrimitive("hDijetOutput3");
  //TH1 *vh = (TH1*)sigCanv->GetPrimitive("hDijetOutput5");
  //TH1 *tth = (TH1*)sigCanv->GetPrimitive("hDijetOutput4");

  cout << ggh->Integral() << endl;
  cout << vbf->Integral() << endl;
  cout << vh->Integral() << endl;
  cout << tth->Integral() << endl;

  sigFile->Close();
  TFile *bkgFile = TFile::Open("dijetbdt_transformed_bg_7TeV.root");
  bkgFile->Close();
}
