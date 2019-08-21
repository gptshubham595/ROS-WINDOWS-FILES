# Choose a configuration with which to drive CTest tests.
if(CTEST_CONFIGURATION_TYPE)
  set(CTestTest_CONFIG "${CTEST_CONFIGURATION_TYPE}")
else()
  set(CTestTest_CONFIG "Debug")
endif()

# Choose a configuration that was built if none is given.
if(NOT CTEST_CONFIGURATION_TYPE)
  set(CTEST_CMD "C:/opt/rosdeps/x64/bin/bin/ctest.exe")
  get_filename_component(CTEST_DIR "${CTEST_CMD}" PATH)
  get_filename_component(CTEST_EXE "${CTEST_CMD}" NAME)
  foreach(cfg Release Debug MinSizeRel RelWithDebInfo)
    if(NOT CTEST_CONFIGURATION_TYPE)
      if(EXISTS "${CTEST_DIR}/${cfg}/${CTEST_EXE}")
        set(CTEST_CONFIGURATION_TYPE ${cfg})
      endif()
    endif()
  endforeach()
  if(NOT CTEST_CONFIGURATION_TYPE)
    if("MSVC;;" STREQUAL "Clang;MSVC;GNU")
      # A valid configuration is required for this compiler in tests that do not set CMP0091 to NEW.
      set(CTEST_CONFIGURATION_TYPE Debug)
    else()
      set(CTEST_CONFIGURATION_TYPE NoConfig)
    endif()
  endif()
  message("Guessing configuration ${CTEST_CONFIGURATION_TYPE}")
endif()

# Isolate tests from user configuration in the environment.
unset(ENV{CMAKE_GENERATOR})
unset(ENV{CMAKE_GENERATOR_INSTANCE})
unset(ENV{CMAKE_GENERATOR_PLATFORM})
unset(ENV{CMAKE_GENERATOR_TOOLSET})


