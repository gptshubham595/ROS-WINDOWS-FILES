set(_isMultiConfig "1")
set(CTEST_SOURCE_DIRECTORY "D:/Download/cmake-3.15.2/Tests/CTestConfig")
set(CTEST_BINARY_DIRECTORY "C:/opt/rosdeps/x64/bin/Tests/CTestConfig/Debug-dashboard")

file(MAKE_DIRECTORY "${CTEST_BINARY_DIRECTORY}")

get_filename_component(dir "${CMAKE_COMMAND}" PATH)
set(CMAKE_CTEST_COMMAND "${dir}/ctest")

message("CMAKE_COMMAND='${CMAKE_COMMAND}'")
message("CMAKE_CTEST_COMMAND='${CMAKE_CTEST_COMMAND}'")

set(arg "")
if(NOT _isMultiConfig)
  set(arg "-DCMAKE_BUILD_TYPE:STRING=Debug")
endif()

message("cmake initial configure")
execute_process(COMMAND ${CMAKE_COMMAND}
   ${arg}
   -G "Visual Studio 16 2019"
   -A ""
   -T ""
   ${CTEST_SOURCE_DIRECTORY}
  WORKING_DIRECTORY ${CTEST_BINARY_DIRECTORY}
  RESULT_VARIABLE rv)
if(NOT rv STREQUAL 0)
  message(FATAL_ERROR "error calling cmake: rv='${rv}'")
endif()


function(call_ctest arg)
  message("call_ctest ${arg}")
  execute_process(COMMAND ${CMAKE_CTEST_COMMAND}
    -C "Debug" -D ${arg} -VV
    WORKING_DIRECTORY ${CTEST_BINARY_DIRECTORY}
    RESULT_VARIABLE rv)
  if(NOT rv STREQUAL 0)
    message(FATAL_ERROR "error calling ctest: rv='${rv}'")
  endif()
endfunction()


call_ctest(ExperimentalStart)
call_ctest(ExperimentalConfigure)
call_ctest(ExperimentalBuild)
call_ctest(ExperimentalTest)
