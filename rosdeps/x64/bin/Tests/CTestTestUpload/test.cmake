cmake_minimum_required(VERSION 2.4)

# Settings:
set(CTEST_DASHBOARD_ROOT                "C:/opt/rosdeps/x64/bin/Tests/CTestTest")
set(CTEST_SITE                          "SHUBHAM")
set(CTEST_BUILD_NAME                    "CTestTest-Win32-MSBuild-Upload")

set(CTEST_SOURCE_DIRECTORY              "D:/Download/cmake-3.15.2/Tests/CTestTestUpload")
set(CTEST_BINARY_DIRECTORY              "C:/opt/rosdeps/x64/bin/Tests/CTestTestUpload")
set(CTEST_CMAKE_GENERATOR               "Visual Studio 16 2019")
set(CTEST_CMAKE_GENERATOR_PLATFORM      "")
set(CTEST_CMAKE_GENERATOR_TOOLSET       "")
set(CTEST_BUILD_CONFIGURATION           "$ENV{CMAKE_CONFIG_TYPE}")

CTEST_START(Experimental)
CTEST_CONFIGURE(BUILD "${CTEST_BINARY_DIRECTORY}" RETURN_VALUE res)
CTEST_BUILD(BUILD "${CTEST_BINARY_DIRECTORY}" RETURN_VALUE res)
CTEST_UPLOAD(FILES "${CTEST_SOURCE_DIRECTORY}/sleep.c" "${CTEST_BINARY_DIRECTORY}/CMakeCache.txt")
CTEST_SUBMIT()
