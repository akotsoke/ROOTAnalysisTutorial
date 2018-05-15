# The name of the package:
atlas_subdir (MyAnalysis)

# Extra dependencies, based on the build environment:
set( extra_deps )
if( NOT XAOD_STANDALONE )
   set( extra_deps GaudiKernel )
endif()

# Declare the package's dependencies:
atlas_depends_on_subdirs(
   PUBLIC
   Control/AthToolSupport/AsgTools
   Event/xAOD/xAODJet
   Event/xAOD/xAODTruth
   Reconstruction/PFlow/PFlowUtils
   Reconstruction/Jet/JetCalibTools
   Reconstruction/Jet/JetMomentTools
   PhysicsAnalysis/AnalysisCommon/PATInterfaces
   PRIVATE
   Tools/PathResolver
   ${extra_deps} )

# External(s):
find_package( ROOT COMPONENTS Core Hist RIO )

# Libraries of the package:
atlas_add_library( MyAnalysisLib
   MyAnalysis/*.h Root/*.cxx
   PUBLIC_HEADERS MyAnalysis
   INCLUDE_DIRS ${ROOT_INCLUDE_DIRS}
   LINK_LIBRARIES ${ROOT_LIBRARIES} AsgTools xAODJet PATInterfaces PFlowUtilsLib JetCalibToolsLib JetMomentToolsLib xAODTruth
   PRIVATE_LINK_LIBRARIES PathResolver )

if( NOT XAOD_STANDALONE )
   atlas_add_component( MyAnalysis
      src/components/*.cxx
      LINK_LIBRARIES MyAnalysisLib )
endif()

atlas_add_dictionary( MyAnalysisDict
   MyAnalysis/MyAnalysisDict.h
   MyAnalysis/selection.xml
   LINK_LIBRARIES MyAnalysisLib )

# Install files from the package:
atlas_install_data( share/*.root )

