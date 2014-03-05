#!/bin/bash
cd /afs/cern.ch/work/n/nckw/hgg/hgg_final/CMSSW_6_1_2/src/h2gglobe/BackgroundProfileFitting
eval `scramv1 runtime -sh`
$CMSSW_BASE/src/h2gglobe/BackgroundProfileFitting/bin/fTest -i CMS-HGG_mva_8TeV_Data.root -D mva_8TeV --singleCat 7    --unblind -d dat/mva_8TeV_cat7.dat --saveMultiPdf CMS-HGG_mva_8TeV_multipdf_cat7.root
