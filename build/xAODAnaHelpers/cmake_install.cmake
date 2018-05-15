# Install script for directory: /afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/source/xAODAnaHelpers

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/InstallArea/x86_64-slc6-gcc62-opt")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/src/xAODAnaHelpers" TYPE DIRECTORY FILES "/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/source/xAODAnaHelpers/" USE_SOURCE_PERMISSIONS REGEX "/\\.svn$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE OPTIONAL FILES "/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/build/x86_64-slc6-gcc62-opt/lib/libxAODAnaHelpersLib_rdict.pcm")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process( COMMAND ${CMAKE_COMMAND}
      -E make_directory
      $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/include )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process( COMMAND ${CMAKE_COMMAND}
         -E create_symlink ../src/xAODAnaHelpers/xAODAnaHelpers
         $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/include/xAODAnaHelpers )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDebugx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE OPTIONAL FILES "/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/build/x86_64-slc6-gcc62-opt/lib/libxAODAnaHelpersLib.so.dbg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY OPTIONAL FILES "/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/build/x86_64-slc6-gcc62-opt/lib/libxAODAnaHelpersLib.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxAODAnaHelpersLib.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxAODAnaHelpersLib.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/cvmfs/atlas.cern.ch/repo/sw/software/21.2/sw/lcg/releases/binutils/2.28/x86_64-slc6/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libxAODAnaHelpersLib.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/python/xAODAnaHelpers" TYPE FILE RENAME "__init__.py" FILES "/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/source/xAODAnaHelpers/python/__init__.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/python/xAODAnaHelpers" TYPE FILE RENAME "config.py" FILES "/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/source/xAODAnaHelpers/python/config.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/python/xAODAnaHelpers" TYPE FILE RENAME "logging.py" FILES "/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/source/xAODAnaHelpers/python/logging.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/python/xAODAnaHelpers" TYPE FILE RENAME "timing.py" FILES "/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/source/xAODAnaHelpers/python/timing.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/python/xAODAnaHelpers" TYPE FILE RENAME "utils.py" FILES "/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/source/xAODAnaHelpers/python/utils.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/python/xAODAnaHelpers" TYPE FILE FILES "/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/build/x86_64-slc6-gcc62-opt/python/xAODAnaHelpers/__init__.pyc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/python/xAODAnaHelpers" TYPE FILE FILES "/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/build/x86_64-slc6-gcc62-opt/python/xAODAnaHelpers/config.pyc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/python/xAODAnaHelpers" TYPE FILE FILES "/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/build/x86_64-slc6-gcc62-opt/python/xAODAnaHelpers/logging.pyc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/python/xAODAnaHelpers" TYPE FILE FILES "/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/build/x86_64-slc6-gcc62-opt/python/xAODAnaHelpers/timing.pyc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/python/xAODAnaHelpers" TYPE FILE FILES "/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/build/x86_64-slc6-gcc62-opt/python/xAODAnaHelpers/utils.pyc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM RENAME "batch_wait.py" FILES "/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/source/xAODAnaHelpers/scripts/batch_wait.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM RENAME "downloadAndMerge.py" FILES "/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/source/xAODAnaHelpers/scripts/downloadAndMerge.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM RENAME "getDSInfo.py" FILES "/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/source/xAODAnaHelpers/scripts/getDSInfo.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM RENAME "getEventCounts.py" FILES "/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/source/xAODAnaHelpers/scripts/getEventCounts.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM RENAME "xAH_config.py" FILES "/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/source/xAODAnaHelpers/scripts/xAH_config.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM RENAME "xAH_run.py" FILES "/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/source/xAODAnaHelpers/scripts/xAH_run.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/xAODAnaHelpers" TYPE FILE RENAME "2015-PreRecomm-13TeV-MC12-CDI-October23_v1.root" FILES "/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/source/xAODAnaHelpers/data/2015-PreRecomm-13TeV-MC12-CDI-October23_v1.root")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/xAODAnaHelpers" TYPE FILE RENAME "2015-PreRecomm-13TeV-MC12-CDI_August3-v1.root" FILES "/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/source/xAODAnaHelpers/data/2015-PreRecomm-13TeV-MC12-CDI_August3-v1.root")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/xAODAnaHelpers" TYPE FILE RENAME "2016-Winter-13TeV-MC15-CDI-February14_v2.root" FILES "/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/source/xAODAnaHelpers/data/2016-Winter-13TeV-MC15-CDI-February14_v2.root")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/xAODAnaHelpers" TYPE FILE RENAME "2016-Winter-13TeV-MC15-CDI-February5_prov.root" FILES "/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/source/xAODAnaHelpers/data/2016-Winter-13TeV-MC15-CDI-February5_prov.root")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/xAODAnaHelpers" TYPE FILE RENAME "2016-Winter-13TeV-MC15-CDI-January13_v1.root" FILES "/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/source/xAODAnaHelpers/data/2016-Winter-13TeV-MC15-CDI-January13_v1.root")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/xAODAnaHelpers" TYPE DIRECTORY FILES "/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/source/xAODAnaHelpers/data/OnlineBSInfo" USE_SOURCE_PERMISSIONS REGEX "/\\.svn$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/xAODAnaHelpers" TYPE DIRECTORY FILES "/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/source/xAODAnaHelpers/data/TauConf" USE_SOURCE_PERMISSIONS REGEX "/\\.svn$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/xAODAnaHelpers" TYPE DIRECTORY FILES "/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/source/xAODAnaHelpers/data/metadata" USE_SOURCE_PERMISSIONS REGEX "/\\.svn$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/xAODAnaHelpers" TYPE FILE RENAME "xAH_adjectives" FILES "/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/source/xAODAnaHelpers/data/xAH_adjectives")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/data/xAODAnaHelpers" TYPE FILE RENAME "xAH_animals" FILES "/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/source/xAODAnaHelpers/data/xAH_animals")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/build/xAODAnaHelpers/argcompletePkgbuildInstall.cmake")
endif()

