
from xAH_config import xAH_config
from ROOT import vector 
c = xAH_config()


c.setalg("JSSTutorialPFlowJetToolsAlgo", {})


# c.setalg("TopWBosonSubstructureAlgo", {"m_debug": False,
#     "m_name": "TopWBosonSubstructureAlgo",
#     "m_MyNewVariable" : "ThisGotLoadedIn",
#     "m_TreeName" : "JetTree"
# })

# You can add new parameters to your algorithm that will be loaded automatically.  
# Note that they will be loaded into the algorithms member variable that has the same name, only if it is public.
# The example above it the "m_MyNewVariable"
