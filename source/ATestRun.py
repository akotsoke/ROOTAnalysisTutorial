#!/usr/bin/env python

# Read the submission directory as a command line argument. You can
# extend the list of arguments with your private ones later on.

import argparse

parser = argparse.ArgumentParser()

parser.add_argument('--submitDir', dest='submit_dir', metavar='<directory>', type=str, required=False, help='Output directory to store the output.', default='submitDir')


# parse the arguments, throw errors if missing any
args = parser.parse_args()

# Set up (Py)ROOT.
import ROOT
ROOT.xAOD.Init().ignore()

# Set up the sample handler object. See comments from the C++ macro
# for the details about these lines.
import os
sh = ROOT.SH.SampleHandler()
sh.setMetaString( 'nc_tree', 'CollectionTree' )
inputFilePath = '/afs/cern.ch/work/a/akotsoke/public/mc16_13TeV.361022.Pythia8EvtGen_A14NNPDF23LO_jetjet_JZ2W.merge.AOD.e3668_s3126_r10201_r10210/'
ROOT.SH.ScanDir().filePattern( 'AOD.12911500._001455.pool.root.1' ).scan( sh, inputFilePath )
sh.printContent()

# Create an EventLoop job.
job = ROOT.EL.Job()
job.sampleHandler( sh )
job.options().setDouble( ROOT.EL.Job.optMaxEvents, 1 )

# Create the algorithm's configuration. Note that we'll be able to add
# algorithm property settings here later on.
#from AnaAlgorithm.AnaAlgorithmConfig import AnaAlgorithmConfig
alg = ROOT.JSSTutorialPFlowJetToolsAlgo()
#config = AnaAlgorithmConfig( 'JSSTutorialPFlowJetToolsAlgo/AnalysisAlg' )
job.algsAdd( alg )

# Run the job using the direct driver.
driver = ROOT.EL.DirectDriver()
driver.submit( job, args.submit_dir )
#driver.submit( job)
