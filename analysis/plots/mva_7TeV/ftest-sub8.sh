#!/bin/bash
cd /afs/cern.ch/work/n/nckw/hgg/hgg_final/CMSSW_6_1_2/src/h2gglobe/BackgroundProfileFitting
eval `scramv1 runtime -sh`
$CMSSW_BASE/src/h2gglobe/BackgroundProfileFitting/bin/fTest -i CMS-HGG_mva_7TeV_Data.root -D mva_7TeV --singleCat 8    --unblind --is2011  -d dat/mva_7TeV_cat8.dat --saveMultiPdf CMS-HGG_mva_7TeV_multipdf_cat8.root
