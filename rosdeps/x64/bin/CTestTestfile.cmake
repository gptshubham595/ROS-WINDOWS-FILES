# CMake generated Testfile for 
# Source directory: D:/Download/cmake-3.15.2
# Build directory: C:/opt/rosdeps/x64/bin
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
include("C:/opt/rosdeps/x64/bin/Tests/EnforceConfig.cmake")
add_test(SystemInformationNew "C:/opt/rosdeps/x64/bin/bin/cmake" "--system-information" "-G" "Visual Studio 16 2019")
set_tests_properties(SystemInformationNew PROPERTIES  _BACKTRACE_TRIPLES "D:/Download/cmake-3.15.2/CMakeLists.txt;801;add_test;D:/Download/cmake-3.15.2/CMakeLists.txt;0;")
subdirs("Source/kwsys")
subdirs("Utilities/KWIML")
subdirs("Utilities/cmlibrhash")
subdirs("Utilities/cmzlib")
subdirs("Utilities/cmcurl")
subdirs("Utilities/cmexpat")
subdirs("Utilities/cmbzip2")
subdirs("Utilities/cmzstd")
subdirs("Utilities/cmliblzma")
subdirs("Utilities/cmlibarchive")
subdirs("Utilities/cmjsoncpp")
subdirs("Utilities/cmlibuv")
subdirs("Source")
subdirs("Utilities")
subdirs("Tests")
subdirs("Auxiliary")
