import AthenaRootComps.ReadAthenaxAODHybrid

theApp.EvtMax = 500
testFile = '/afs/cern.ch/work/a/akotsoke/public/mc16_13TeV.361022.Pythia8EvtGen_A14NNPDF23LO_jetjet_JZ2W.merge.AOD.e3668_s3126_r10201_r10210/AOD.12911500._001455.pool.root.1'
svcMgr.EventSelector.InputCollections = [testFile]

algSeq = CfgMgr.AthSequencer("AthAlgSeq")

# create our algorithm with teh given name
alg = CfgMgr.JSSTutorialPFlowJetToolsAlgo()

# later on we'll add some configuration options for our algorithm that go here

algSeq += alg

# optional include for reducing printout from athena
include("AthAnalysisBaseComps/SuppressLogging.py")
