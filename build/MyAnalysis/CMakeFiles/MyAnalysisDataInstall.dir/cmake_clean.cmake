file(REMOVE_RECURSE
  "../x86_64-slc6-gcc62-opt/include/MyAnalysis"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/MyAnalysisDataInstall.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
