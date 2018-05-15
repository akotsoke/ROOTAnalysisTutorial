#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "UserAnalysis::MyAnalysisLib" for configuration "RelWithDebInfo"
set_property(TARGET UserAnalysis::MyAnalysisLib APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(UserAnalysis::MyAnalysisLib PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELWITHDEBINFO "PathResolver"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libMyAnalysisLib.so"
  IMPORTED_SONAME_RELWITHDEBINFO "libMyAnalysisLib.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS UserAnalysis::MyAnalysisLib )
list(APPEND _IMPORT_CHECK_FILES_FOR_UserAnalysis::MyAnalysisLib "${_IMPORT_PREFIX}/lib/libMyAnalysisLib.so" )

# Import target "UserAnalysis::xAODAnaHelpersLib" for configuration "RelWithDebInfo"
set_property(TARGET UserAnalysis::xAODAnaHelpersLib APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(UserAnalysis::xAODAnaHelpersLib PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libxAODAnaHelpersLib.so"
  IMPORTED_SONAME_RELWITHDEBINFO "libxAODAnaHelpersLib.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS UserAnalysis::xAODAnaHelpersLib )
list(APPEND _IMPORT_CHECK_FILES_FOR_UserAnalysis::xAODAnaHelpersLib "${_IMPORT_PREFIX}/lib/libxAODAnaHelpersLib.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
