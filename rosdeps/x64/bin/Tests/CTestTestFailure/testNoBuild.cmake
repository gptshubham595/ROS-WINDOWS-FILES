cmake_minimum_required(VERSION 2.4)

# Settings:
set(CTEST_DASHBOARD_ROOT                "C:/opt/rosdeps/x64/bin/Tests/CTestTest")
set(CTEST_SITE                          "SHUBHAM")
set(CTEST_BUILD_NAME                    "CTestTest-Win32-MSBuild-NoBuild")

set(CTEST_SOURCE_DIRECTORY              "D:/Download/cmake-3.15.2/Tests/CTestTestFailure")
set(CTEST_BINARY_DIRECTORY              "C:/opt/rosdeps/x64/bin/Tests/CTestTestFailure")
set(CTEST_CVS_COMMAND                   "CVSCOMMAND-NOTFOUND")
set(CTEST_CMAKE_GENERATOR               "Visual Studio 16 2019")
set(CTEST_CMAKE_GENERATOR_PLATFORM      "")
set(CTEST_CMAKE_GENERATOR_TOOLSET       "")
set(CTEST_BUILD_CONFIGURATION           "$ENV{CMAKE_CONFIG_TYPE}")
set(CTEST_COVERAGE_COMMAND              "COVERAGE_COMMAND-NOTFOUND")
set(CTEST_NOTES_FILES                   "${CTEST_SCRIPT_DIRECTORY}/${CTEST_SCRIPT_NAME}")

#CTEST_EMPTY_BINARY_DIRECTORY(${CTEST_BINARY_DIRECTORY})

CTEST_START(Experimental)
#CTEST_UPDATE(SOURCE "${CTEST_SOURCE_DIRECTORY}" RETURN_VALUE res)
CTEST_CONFIGURE(BUILD "${CTEST_BINARY_DIRECTORY}" RETURN_VALUE res)
CTEST_BUILD(BUILD "${CTEST_BINARY_DIRECTORY}" RETURN_VALUE res)
