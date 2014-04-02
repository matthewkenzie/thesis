#!/usr/bin/env python
import ROOT as r

r.gStyle.SetLineWidth(4)

outf = r.TFile('hggFeynDiags.root','RECREATE')

def ggH():
  c = r.TCanvas('ggh','ggh',10,10,1200,800)
  c.Range(15,5,55,45)
  title = r.TLatex()
  title.SetTextAlign(22)
  title.SetTextSize(0.1)
  title.SetTextFont(42)
  #title.DrawLatex(5,37,"gg#rightarrow H")

  text = r.TLatex()
  text.SetTextAlign(22)
  text.SetTextSize(0.1)
  text.SetTextFont(42)
  
  gluon1 = r.TCurlyLine(15,10,30,10)
  gluon1.SetWaveLength(0.03)
  gluon1.Draw()
  text.DrawLatex(22.5,7,"g")
  gluon2 = r.TCurlyLine(15,30,30,30)
  gluon2.SetWaveLength(0.03)
  gluon2.Draw()
  text.DrawLatex(22.5,33,"g")

  top1 = r.TArrow(30,30,30,10,0.01,"-|>-")
  top2 = r.TArrow(30,30,40,20,0.01,"-<|-")
  top3 = r.TArrow(30,10,40,20,0.01,"-|>-")
  
  top1.Draw()
  text.DrawLatex(32,20,"t")
  top2.Draw()
  text.DrawLatex(35,28,"#bar{t}")
  top3.Draw()
  text.DrawLatex(35,13,"t")
  
  higgs = r.TLine(40,20,55,20)
  higgs.SetLineStyle(r.kDashed)
  higgs.Draw()
  text.DrawLatex(47,23,"H")
  
  c.SaveAs('ggH.pdf')
  outf.cd()
  c.Write()
  
def qqH():
  c = r.TCanvas('ggh','ggh',10,10,1200,800)
  c.Range(15,0,55,40)
  title = r.TLatex()
  title.SetTextAlign(22)
  title.SetTextSize(0.1)
  title.SetTextFont(42)
  #title.DrawLatex(5,37,"gg#rightarrow H")

  text = r.TLatex()
  text.SetTextAlign(22)
  text.SetTextSize(0.1)
  text.SetTextFont(42)
  
  quark1 = r.TArrow(15,10,30,10,0.01,"-|>-")
  quark1.Draw()
  text.DrawLatex(22.5,7,"q")
  quark2 = r.TArrow(15,30,30,30,0.01,"-|>-")
  quark2.Draw()
  text.DrawLatex(22.5,33,"q")

  boson1 = r.TCurlyLine(30,30,40,20,0.01)
  boson1.SetWavy()
  boson1.SetWaveLength(0.03)
  boson2 = r.TCurlyLine(30,10,40,20,0.01)
  boson2.SetWavy()
  boson2.SetWaveLength(0.03)
  boson1.Draw()
  text.SetTextSize(0.08)
  text.DrawLatex(37,28,"W/Z")
  boson2.Draw()
  text.DrawLatex(37,13,"W/Z")
  text.SetTextSize(0.1)
  
  quark3 = r.TArrow(30,30,40,40,0.01,"-|>-")
  text.DrawLatex(38,35,"q")
  quark4 = r.TArrow(30,10,40,0,0.01,"-|>-")
  text.DrawLatex(38,5,"q")

  quark3.Draw()
  quark4.Draw()
  
  higgs = r.TLine(40,20,55,20)
  higgs.SetLineStyle(r.kDashed)
  higgs.Draw()
  text.DrawLatex(47,23,"H")
  
  c.SaveAs('qqH.pdf')
  outf.cd()
  c.Write()
  
def VH():
  c = r.TCanvas('vh','vh',10,10,1200,800)
  c.Range(15,10,55,40)
  title = r.TLatex()
  title.SetTextAlign(22)
  title.SetTextSize(0.1)
  title.SetTextFont(42)
  #title.DrawLatex(5,37,"gg#rightarrow H")

  text = r.TLatex()
  text.SetTextAlign(22)
  text.SetTextSize(0.1)
  text.SetTextFont(42)
  
  quark1 = r.TArrow(15,10,27.5,20,0.01,"-|>-")
  quark1.Draw()
  text.DrawLatex(22.5,13,"q")
  quark2 = r.TArrow(15,30,27.5,20,0.01,"-<|-")
  quark2.Draw()
  text.DrawLatex(22.5,27,"#bar{q}")

  boson1 = r.TCurlyLine(27.5,20,40,20,0.01)
  boson1.SetWavy()
  boson1.SetWaveLength(0.03)
  boson1.Draw()
  
  boson2 = r.TCurlyLine(40,20,52.5,30,0.01)
  boson2.SetWavy()
  boson2.SetWaveLength(0.03)
  boson2.Draw()
  
  text.SetTextSize(0.08)
  text.DrawLatex(34,23,"W/Z")
  text.DrawLatex(45,28,"W/Z")
  text.SetTextSize(0.1)
  
  higgs = r.TLine(40,20,52.5,10)
  higgs.SetLineStyle(r.kDashed)
  higgs.Draw()
  text.DrawLatex(46,17,"H")
  
  c.SaveAs('VH.pdf')
  outf.cd()
  c.Write()
  
def ttH():
  c = r.TCanvas('tth','tth',10,10,1200,800)
  c.Range(15,0,55,40)
  title = r.TLatex()
  title.SetTextAlign(22)
  title.SetTextSize(0.1)
  title.SetTextFont(42)
  #title.DrawLatex(5,37,"gg#rightarrow H")

  text = r.TLatex()
  text.SetTextAlign(22)
  text.SetTextSize(0.1)
  text.SetTextFont(42)
  
  gluon1 = r.TCurlyLine(15,10,30,10)
  gluon1.SetWaveLength(0.03)
  gluon1.Draw()
  text.DrawLatex(22.5,7,"g")
  gluon2 = r.TCurlyLine(15,30,30,30)
  gluon2.SetWaveLength(0.03)
  gluon2.Draw()
  text.DrawLatex(22.5,33,"g")

  top1 = r.TArrow(30,30,40,40,0.01,"-|>-")
  top2 = r.TArrow(30,30,40,20,0.01,"-<|-")
  top3 = r.TArrow(30,10,40,20,0.01,"-|>-")
  top4 = r.TArrow(30,10,40,0,0.01,"-<|-")
  
  top1.Draw()
  top2.Draw()
  top3.Draw()
  top4.Draw()

  text.DrawLatex(38,35,"t")
  text.DrawLatex(35,28,"#bar{t}")
  text.DrawLatex(35,13,"t")
  text.DrawLatex(38,5,"#bar{t}")
  
  higgs = r.TLine(40,20,55,20)
  higgs.SetLineStyle(r.kDashed)
  higgs.Draw()
  text.DrawLatex(47,23,"H")
  
  c.SaveAs('tth.pdf')
  outf.cd()
  c.Write()
  
def Htgg():
  c = r.TCanvas('htgg','htgg',10,10,1200,600)
  c.Range(15,5,55,35)
  title = r.TLatex()
  title.SetTextAlign(22)
  title.SetTextSize(0.1)
  title.SetTextFont(42)
  #title.DrawLatex(5,37,"gg#rightarrow H")

  text = r.TLatex()
  text.SetTextAlign(22)
  text.SetTextSize(0.1)
  text.SetTextFont(42)
  
  higgs = r.TLine(15,20,30,20)
  higgs.SetLineStyle(r.kDashed)
  higgs.Draw()
  text.DrawLatex(21,23,"H")
  
  top1 = r.TArrow(40,30,40,10,0.01,"-|>-")
  top2 = r.TArrow(30,20,40,30,0.01,"-<|-")
  top3 = r.TArrow(30,20,40,10,0.01,"-|>-")
  
  top1.Draw()
  text.DrawLatex(42,20,"t")
  top2.Draw()
  text.DrawLatex(34,28,"#bar{t}")
  top3.Draw()
  text.DrawLatex(34,13,"t")
  
  gamma1 = r.TCurlyLine(40,10,55,10)
  gamma1.SetWavy()
  gamma1.SetWaveLength(0.03)
  gamma1.Draw()
  text.DrawLatex(47.5,7,"#gamma")
  gamma2 = r.TCurlyLine(40,30,55,30)
  gamma2.SetWavy()
  gamma2.SetWaveLength(0.03)
  gamma2.Draw()
  text.DrawLatex(47.5,33,"#gamma")
  
  c.SaveAs('Htgg.pdf')
  outf.cd()
  c.Write()
  
def HWgg():
  c = r.TCanvas('htgg','htgg',10,10,1200,600)
  c.Range(15,5,55,35)
  title = r.TLatex()
  title.SetTextAlign(22)
  title.SetTextSize(0.1)
  title.SetTextFont(42)
  #title.DrawLatex(5,37,"gg#rightarrow H")

  text = r.TLatex()
  text.SetTextAlign(22)
  text.SetTextSize(0.1)
  text.SetTextFont(42)
  
  higgs = r.TLine(15,20,30,20)
  higgs.SetLineStyle(r.kDashed)
  higgs.Draw()
  text.DrawLatex(21,23,"H")
  
  boson1 = r.TCurlyLine(40,30,40,10)
  boson1.SetWavy()
  boson1.SetWaveLength(0.03)
  boson2 = r.TCurlyLine(30,20,40,30)
  boson2.SetWavy()
  boson2.SetWaveLength(0.03)
  boson3 = r.TCurlyLine(30,20,40,10)
  boson3.SetWavy()
  boson3.SetWaveLength(0.03)
  
  boson1.Draw()
  text.SetTextSize(0.08)
  text.DrawLatex(43,20,"W^{#pm}")
  boson2.Draw()
  text.DrawLatex(34,28,"W^{#mp}")
  boson3.Draw()
  text.DrawLatex(34,12,"W^{#pm}")
  
  gamma1 = r.TCurlyLine(40,10,55,10)
  gamma1.SetWavy()
  gamma1.SetWaveLength(0.03)
  gamma1.Draw()
  text.SetTextSize(0.1)
  text.DrawLatex(47.5,7,"#gamma")
  gamma2 = r.TCurlyLine(40,30,55,30)
  gamma2.SetWavy()
  gamma2.SetWaveLength(0.03)
  gamma2.Draw()
  text.DrawLatex(47.5,33,"#gamma")
  
  c.SaveAs('HWgg.pdf')
  outf.cd()
  c.Write()

def HWgg4():
  c = r.TCanvas('htgg4','htgg4',10,10,1200,600)
  c.Range(15,5,55,35)
  title = r.TLatex()
  title.SetTextAlign(22)
  title.SetTextSize(0.1)
  title.SetTextFont(42)
  #title.DrawLatex(5,37,"gg#rightarrow H")

  text = r.TLatex()
  text.SetTextAlign(22)
  text.SetTextSize(0.1)
  text.SetTextFont(42)
  
  higgs = r.TLine(15,20,30,20)
  higgs.SetLineStyle(r.kDashed)
  higgs.Draw()
  text.DrawLatex(21,23,"H")
  
  boson1 = r.TCurlyArc(35,20,5,0,370)
  boson1.SetWavy()
  boson1.SetWaveLength(0.03)
  boson2 = r.TCurlyArc(35,20,5,180,360)
  boson2.SetWavy()
  boson2.SetWaveLength(0.03)
  
  boson1.Draw()
  text.SetTextSize(0.08)
  #boson2.Draw()
  text.DrawLatex(33,20,"W^{#pm}")
  #text.DrawLatex(32,12,"W^{#pm}")
  
  gamma1 = r.TCurlyLine(40,20,55,10)
  gamma1.SetWavy()
  gamma1.SetWaveLength(0.03)
  gamma1.Draw()
  text.SetTextSize(0.1)
  text.DrawLatex(47.5,11,"#gamma")
  gamma2 = r.TCurlyLine(40,20,55,30)
  gamma2.SetWavy()
  gamma2.SetWaveLength(0.03)
  gamma2.Draw()
  text.DrawLatex(47.5,29,"#gamma")
  
  c.SaveAs('HWgg4.pdf')
  outf.cd()
  c.Write()

def Box():
  c = r.TCanvas('Box','Box',10,10,1200,600)
  c.Range(10,5,70,35)
  title = r.TLatex()
  title.SetTextAlign(22)
  title.SetTextSize(0.1)
  title.SetTextFont(42)
  #title.DrawLatex(5,37,"gg#rightarrow H")

  text = r.TLatex()
  text.SetTextAlign(22)
  text.SetTextSize(0.1)
  text.SetTextFont(42)
  
  gluon1 = r.TCurlyLine(10,10,30,10)
  gluon1.SetWaveLength(0.03)
  gluon1.Draw()
  text.DrawLatex(20,7,"g")
  gluon2 = r.TCurlyLine(10,30,30,30)
  gluon2.SetWaveLength(0.03)
  gluon2.Draw()
  text.DrawLatex(20,33,"g")

  top1 = r.TArrow(30,30,30,10,0.01,"-|>-")
  top2 = r.TArrow(30,30,50,30,0.01,"-<|-")
  top3 = r.TArrow(30,10,50,10,0.01,"-|>-")
  top4 = r.TArrow(50,10,50,30,0.01,"-|>-")
  top1.Draw()
  text.DrawLatex(28,20,"q")
  top2.Draw()
  text.DrawLatex(40,28,"#bar{q}")
  top3.Draw()
  text.DrawLatex(40,12,"q")
  top4.Draw()
  text.DrawLatex(52,20,"#bar{q}")
  gamma1 = r.TCurlyLine(50,10,70,10)
  gamma1.SetWavy()
  gamma1.SetWaveLength(0.03)
  gamma1.Draw()
  text.DrawLatex(60,7,"#gamma")
  gamma2 = r.TCurlyLine(50,30,70,30)
  gamma2.SetWavy()
  gamma2.SetWaveLength(0.03)
  gamma2.Draw()
  text.DrawLatex(60,33,"#gamma")
 
  c.SaveAs('Box.pdf')
  outf.cd()
  c.Write()
  
def Born():
  c = r.TCanvas('Born','Born',10,10,1200,600)
  c.Range(32,5,65,35)
  title = r.TLatex()
  title.SetTextAlign(22)
  title.SetTextSize(0.1)
  title.SetTextFont(42)
  #title.DrawLatex(5,37,"gg#rightarrow H")

  text = r.TLatex()
  text.SetTextAlign(22)
  text.SetTextSize(0.1)
  text.SetTextFont(42)
  
  top2 = r.TArrow(35,30,50,30,0.01,"-<|-")
  top3 = r.TArrow(35,10,50,10,0.01,"-|>-")
  top4 = r.TArrow(50,10,50,30,0.01,"-|>-")
  top2.Draw()
  text.DrawLatex(34,30,"#bar{q}")
  top3.Draw()
  text.DrawLatex(34,10,"q")
  top4.Draw()
  text.DrawLatex(52,20,"q")
  gamma1 = r.TCurlyLine(50,10,65,10)
  gamma1.SetWavy()
  gamma1.SetWaveLength(0.03)
  gamma1.Draw()
  text.DrawLatex(57.5,7,"#gamma")
  gamma2 = r.TCurlyLine(50,30,65,30)
  gamma2.SetWavy()
  gamma2.SetWaveLength(0.03)
  gamma2.Draw()
  text.DrawLatex(57.5,33,"#gamma")
 
  c.SaveAs('Born.pdf')
  outf.cd()
  c.Write()
  
def GJet():
  c = r.TCanvas('GJet','GJet',10,10,1200,600)
  c.Range(32,5,70,35)
  title = r.TLatex()
  title.SetTextAlign(22)
  title.SetTextSize(0.1)
  title.SetTextFont(42)
  #title.DrawLatex(5,37,"gg#rightarrow H")

  text = r.TLatex()
  text.SetTextAlign(22)
  text.SetTextSize(0.1)
  text.SetTextFont(42)
  
  gluon = r.TCurlyLine(35,30,50,30,0.01)
  gluon.SetWaveLength(0.03)
  top3 = r.TArrow(35,10,50,10,0.01,"-|>-")
  top4 = r.TArrow(50,10,50,30,0.01,"-|>-")
  gluon.Draw()
  text.DrawLatex(34,30,"g")
  top3.Draw()
  text.DrawLatex(34,10,"q")
  top4.Draw()
  text.DrawLatex(52,20,"q")
  gamma1 = r.TCurlyLine(50,10,65,10)
  gamma1.SetWavy()
  gamma1.SetWaveLength(0.03)
  gamma1.Draw()
  text.DrawLatex(57.5,7,"#gamma")
  quark = r.TArrow(50,30,57.5,30,0.01,"-|>-")
  quark.Draw()
  jet1 = r.TLine(57.5,30,65,32)
  jet1.Draw()
  jet2 = r.TLine(57.5,30,65,30)
  jet2.Draw()
  jet3 = r.TLine(57.5,30,65,28)
  jet3.Draw()

  text.DrawLatex(53.75,33,"q")
  text.DrawLatex(67,30,"jet")
 
  c.SaveAs('GJet.pdf')
  outf.cd()
  c.Write()
  

ggH()
qqH()
VH()
ttH()

Htgg()
HWgg()
HWgg4()

Box()
Born()
GJet()

