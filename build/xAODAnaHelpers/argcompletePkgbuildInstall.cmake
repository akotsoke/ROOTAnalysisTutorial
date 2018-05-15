# $Id: pkgbuildInstall.cmake.in 720559 2016-01-29 09:13:32Z krasznaa $
#
# Script installing a setuptools / distutils based Python package
# during the release installation, under $CMAKE_INSTALL_PREFIX.
#

# Get the destination directory as an absolute path, as the setup.py script
# can't deal with relative paths correctly.
if( NOT "$ENV{DESTDIR}" STREQUAL "" )
   get_filename_component( _destdir $ENV{DESTDIR} ABSOLUTE )
endif()

# Install the package:
execute_process( COMMAND ${CMAKE_BINARY_DIR}/atlas_build_run.sh
   python setup.py  install
   --prefix ${_destdir}${CMAKE_INSTALL_PREFIX}
   --exec-prefix ${_destdir}${CMAKE_INSTALL_PREFIX}
   --root /
   --install-lib ${_destdir}${CMAKE_INSTALL_PREFIX}/python
   --install-scripts ${_destdir}${CMAKE_INSTALL_PREFIX}/bin
   --record /afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/build/xAODAnaHelpers/argcomplete_installed.files
   --single-version-externally-managed
   WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/src/argcomplete )

# Read in the list of installed files, and select ones put into the
# binary directory.
file( READ /afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/build/xAODAnaHelpers/argcomplete_installed.files
   _installedFiles LIMIT 10000000 )
string( SUBSTRING "${_destdir}${CMAKE_INSTALL_PREFIX}/bin"
   1 -1 _binDir )
string( REGEX MATCHALL "(^|\n)${_binDir}[^\n]+" _executables
   ${_installedFiles} )

# Loop over the installed executables:
foreach( _exec ${_executables} )
   # And replace the absolute python executable names in them with
   # relocatable ones.
   string( STRIP ${_exec} _execName )
   # This is unfortunately very unportable. But should be hopefully good
   # enough on all POSIX platforms at least.
   execute_process( COMMAND
      sed "s/^#!\\/.*\\/python/#!\\/usr\\/bin\\/env python/"
      "/${_execName}"
      COMMAND tee /${_execName}Fixed
      COMMAND ${CMAKE_COMMAND} -E rename "/${_execName}Fixed" "/${_execName}" )
   # For some reason this doesn't work correctly (in CMake 3.3.2) when put at
   # the end of the previous execute_process(...) call. Only when used in a
   # separate call...
   execute_process( COMMAND chmod 755 /${_execName} )
endforeach()
