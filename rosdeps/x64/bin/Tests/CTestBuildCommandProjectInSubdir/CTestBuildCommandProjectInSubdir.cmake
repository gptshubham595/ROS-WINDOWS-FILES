cmake_minimum_required(VERSION 2.8.10)

set(CTEST_SOURCE_DIRECTORY "D:/Download/cmake-3.15.2/Tests/VSProjectInSubdir")
set(CTEST_BINARY_DIRECTORY "C:/opt/rosdeps/x64/bin/Tests/CTestBuildCommandProjectInSubdir/Nested")
set(CTEST_CMAKE_GENERATOR "Visual Studio 16 2019")
set(CTEST_BUILD_CONFIGURATION "Debug")

ctest_empty_binary_directory(${CTEST_BINARY_DIRECTORY})
ctest_start(Experimental)
ctest_configure(OPTIONS "")
ctest_build(TARGET test)
