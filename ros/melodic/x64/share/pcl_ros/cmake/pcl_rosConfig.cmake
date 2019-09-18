# generated from catkin/cmake/template/pkgConfig.cmake.in

# append elements to a list and remove existing duplicates from the list
# copied from catkin/cmake/list_append_deduplicate.cmake to keep pkgConfig
# self contained
macro(_list_append_deduplicate listname)
  if(NOT "${ARGN}" STREQUAL "")
    if(${listname})
      list(REMOVE_ITEM ${listname} ${ARGN})
    endif()
    list(APPEND ${listname} ${ARGN})
  endif()
endmacro()

# append elements to a list if they are not already in the list
# copied from catkin/cmake/list_append_unique.cmake to keep pkgConfig
# self contained
macro(_list_append_unique listname)
  foreach(_item ${ARGN})
    list(FIND ${listname} ${_item} _index)
    if(_index EQUAL -1)
      list(APPEND ${listname} ${_item})
    endif()
  endforeach()
endmacro()

# pack a list of libraries with optional build configuration keywords
# copied from catkin/cmake/catkin_libraries.cmake to keep pkgConfig
# self contained
macro(_pack_libraries_with_build_configuration VAR)
  set(${VAR} "")
  set(_argn ${ARGN})
  list(LENGTH _argn _count)
  set(_index 0)
  while(${_index} LESS ${_count})
    list(GET _argn ${_index} lib)
    if("${lib}" MATCHES "^(debug|optimized|general)$")
      math(EXPR _index "${_index} + 1")
      if(${_index} EQUAL ${_count})
        message(FATAL_ERROR "_pack_libraries_with_build_configuration() the list of libraries '${ARGN}' ends with '${lib}' which is a build configuration keyword and must be followed by a library")
      endif()
      list(GET _argn ${_index} library)
      list(APPEND ${VAR} "${lib}${CATKIN_BUILD_CONFIGURATION_KEYWORD_SEPARATOR}${library}")
    else()
      list(APPEND ${VAR} "${lib}")
    endif()
    math(EXPR _index "${_index} + 1")
  endwhile()
endmacro()

# unpack a list of libraries with optional build configuration keyword prefixes
# copied from catkin/cmake/catkin_libraries.cmake to keep pkgConfig
# self contained
macro(_unpack_libraries_with_build_configuration VAR)
  set(${VAR} "")
  foreach(lib ${ARGN})
    string(REGEX REPLACE "^(debug|optimized|general)${CATKIN_BUILD_CONFIGURATION_KEYWORD_SEPARATOR}(.+)$" "\\1;\\2" lib "${lib}")
    list(APPEND ${VAR} "${lib}")
  endforeach()
endmacro()


if(pcl_ros_CONFIG_INCLUDED)
  return()
endif()
set(pcl_ros_CONFIG_INCLUDED TRUE)

# set variables for source/devel/install prefixes
if("FALSE" STREQUAL "TRUE")
  set(pcl_ros_SOURCE_PREFIX D:/catkin_ws/src/perception_pcl/pcl_ros)
  set(pcl_ros_DEVEL_PREFIX D:/catkin_ws/devel_isolated/pcl_ros)
  set(pcl_ros_INSTALL_PREFIX "")
  set(pcl_ros_PREFIX ${pcl_ros_DEVEL_PREFIX})
else()
  set(pcl_ros_SOURCE_PREFIX "")
  set(pcl_ros_DEVEL_PREFIX "")
  set(pcl_ros_INSTALL_PREFIX D:/opt/ros/melodic/x64)
  set(pcl_ros_PREFIX ${pcl_ros_INSTALL_PREFIX})
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "WARNING: package 'pcl_ros' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message("${_msg}")
endif()

# flag project as catkin-based to distinguish if a find_package()-ed project is a catkin project
set(pcl_ros_FOUND_CATKIN_PROJECT TRUE)

if(NOT "include;D:/opt/rosdeps/x64/include/boost-1_66;D:/opt/rosdeps/x64/include/eigen3;D:/opt/rosdeps/x64/include/pcl-1.8;D:/opt/rosdeps/x64/include " STREQUAL " ")
  set(pcl_ros_INCLUDE_DIRS "")
  set(_include_dirs "include;D:/opt/rosdeps/x64/include/boost-1_66;D:/opt/rosdeps/x64/include/eigen3;D:/opt/rosdeps/x64/include/pcl-1.8;D:/opt/rosdeps/x64/include")
  if(NOT "https://github.com/ros-perception/perception_pcl/issues " STREQUAL " ")
    set(_report "Check the issue tracker 'https://github.com/ros-perception/perception_pcl/issues' and consider creating a ticket if the problem has not been reported yet.")
  elseif(NOT "http://ros.org/wiki/perception_pcl " STREQUAL " ")
    set(_report "Check the website 'http://ros.org/wiki/perception_pcl' for information and consider reporting the problem.")
  else()
    set(_report "Report the problem to the maintainer 'Paul Bovbel <paul@bovbel.com>, Kentaro Wada <www.kentaro.wada@gmail.com>' and request to fix the problem.")
  endif()
  foreach(idir ${_include_dirs})
    if(IS_ABSOLUTE ${idir} AND IS_DIRECTORY ${idir})
      set(include ${idir})
    elseif("${idir} " STREQUAL "include ")
      get_filename_component(include "${pcl_ros_DIR}/../../../include" ABSOLUTE)
      if(NOT IS_DIRECTORY ${include})
        message(FATAL_ERROR "Project 'pcl_ros' specifies '${idir}' as an include dir, which is not found.  It does not exist in '${include}'.  ${_report}")
      endif()
    else()
      message(FATAL_ERROR "Project 'pcl_ros' specifies '${idir}' as an include dir, which is not found.  It does neither exist as an absolute directory nor in 'D:/opt/ros/melodic/x64/${idir}'.  ${_report}")
    endif()
    _list_append_unique(pcl_ros_INCLUDE_DIRS ${include})
  endforeach()
endif()

set(libraries "pcl_ros_filter;pcl_ros_tf;optimized;D:/opt/rosdeps/x64/lib/pcl_common_release.lib;debug;D:/opt/rosdeps/x64/lib/pcl_common_debug.lib;optimized;D:/opt/rosdeps/x64/lib/pcl_kdtree_release.lib;debug;D:/opt/rosdeps/x64/lib/pcl_kdtree_debug.lib;optimized;D:/opt/rosdeps/x64/lib/pcl_octree_release.lib;debug;D:/opt/rosdeps/x64/lib/pcl_octree_debug.lib;optimized;D:/opt/rosdeps/x64/lib/pcl_search_release.lib;debug;D:/opt/rosdeps/x64/lib/pcl_search_debug.lib;optimized;D:/opt/rosdeps/x64/lib/pcl_features_release.lib;debug;D:/opt/rosdeps/x64/lib/pcl_features_debug.lib;optimized;D:/opt/rosdeps/x64/lib/pcl_sample_consensus_release.lib;debug;D:/opt/rosdeps/x64/lib/pcl_sample_consensus_debug.lib;optimized;D:/opt/rosdeps/x64/lib/pcl_filters_release.lib;debug;D:/opt/rosdeps/x64/lib/pcl_filters_debug.lib;optimized;D:/opt/rosdeps/x64/lib/pcl_io_release.lib;debug;D:/opt/rosdeps/x64/lib/pcl_io_debug.lib;optimized;D:/opt/rosdeps/x64/lib/pcl_ml_release.lib;debug;D:/opt/rosdeps/x64/lib/pcl_ml_debug.lib;optimized;D:/opt/rosdeps/x64/lib/pcl_segmentation_release.lib;debug;D:/opt/rosdeps/x64/lib/pcl_segmentation_debug.lib;optimized;D:/opt/rosdeps/x64/lib/pcl_surface_release.lib;debug;D:/opt/rosdeps/x64/lib/pcl_surface_debug.lib;optimized;D:/opt/rosdeps/x64/lib/boost_system-vc141-mt-x64-1_66.lib;debug;D:/opt/rosdeps/x64/lib/boost_system-vc141-mt-gd-x64-1_66.lib;optimized;D:/opt/rosdeps/x64/lib/boost_filesystem-vc141-mt-x64-1_66.lib;debug;D:/opt/rosdeps/x64/lib/boost_filesystem-vc141-mt-gd-x64-1_66.lib;optimized;D:/opt/rosdeps/x64/lib/boost_thread-vc141-mt-x64-1_66.lib;debug;D:/opt/rosdeps/x64/lib/boost_thread-vc141-mt-gd-x64-1_66.lib;optimized;D:/opt/rosdeps/x64/lib/boost_date_time-vc141-mt-x64-1_66.lib;debug;D:/opt/rosdeps/x64/lib/boost_date_time-vc141-mt-gd-x64-1_66.lib;optimized;D:/opt/rosdeps/x64/lib/boost_iostreams-vc141-mt-x64-1_66.lib;debug;D:/opt/rosdeps/x64/lib/boost_iostreams-vc141-mt-gd-x64-1_66.lib;optimized;D:/opt/rosdeps/x64/lib/boost_serialization-vc141-mt-x64-1_66.lib;debug;D:/opt/rosdeps/x64/lib/boost_serialization-vc141-mt-gd-x64-1_66.lib;optimized;D:/opt/rosdeps/x64/lib/boost_chrono-vc141-mt-x64-1_66.lib;debug;D:/opt/rosdeps/x64/lib/boost_chrono-vc141-mt-gd-x64-1_66.lib;optimized;D:/opt/rosdeps/x64/lib/boost_atomic-vc141-mt-x64-1_66.lib;debug;D:/opt/rosdeps/x64/lib/boost_atomic-vc141-mt-gd-x64-1_66.lib;optimized;D:/opt/rosdeps/x64/lib/boost_regex-vc141-mt-x64-1_66.lib;debug;D:/opt/rosdeps/x64/lib/boost_regex-vc141-mt-gd-x64-1_66.lib;optimized;D:/opt/rosdeps/x64/lib/flann_cpp_s.lib;debug;D:/opt/rosdeps/x64/lib/flann_cpp_s-gd.lib")
foreach(library ${libraries})
  # keep build configuration keywords, target names and absolute libraries as-is
  if("${library}" MATCHES "^(debug|optimized|general)$")
    list(APPEND pcl_ros_LIBRARIES ${library})
  elseif(${library} MATCHES "^-l")
    list(APPEND pcl_ros_LIBRARIES ${library})
  elseif(TARGET ${library})
    list(APPEND pcl_ros_LIBRARIES ${library})
  elseif(IS_ABSOLUTE ${library})
    list(APPEND pcl_ros_LIBRARIES ${library})
  else()
    set(lib_path "")
    set(lib "${library}-NOTFOUND")
    # since the path where the library is found is returned we have to iterate over the paths manually
    foreach(path D:/opt/ros/melodic/x64/lib;D:/opt/ros/melodic/x64/lib)
      find_library(lib ${library}
        PATHS ${path}
        NO_DEFAULT_PATH NO_CMAKE_FIND_ROOT_PATH)
      if(lib)
        set(lib_path ${path})
        break()
      endif()
    endforeach()
    if(lib)
      _list_append_unique(pcl_ros_LIBRARY_DIRS ${lib_path})
      list(APPEND pcl_ros_LIBRARIES ${lib})
    else()
      # as a fall back for non-catkin libraries try to search globally
      find_library(lib ${library})
      if(NOT lib)
        message(FATAL_ERROR "Project '${PROJECT_NAME}' tried to find library '${library}'.  The library is neither a target nor built/installed properly.  Did you compile project 'pcl_ros'?  Did you find_package() it before the subdirectory containing its code is included?")
      endif()
      list(APPEND pcl_ros_LIBRARIES ${lib})
    endif()
  endif()
endforeach()

set(pcl_ros_EXPORTED_TARGETS "pcl_ros_gencfg")
# create dummy targets for exported code generation targets to make life of users easier
foreach(t ${pcl_ros_EXPORTED_TARGETS})
  if(NOT TARGET ${t})
    add_custom_target(${t})
  endif()
endforeach()

set(depends "dynamic_reconfigure;geometry_msgs;message_filters;nodelet;nodelet_topic_tools;pcl_conversions;pcl_msgs;rosbag;roscpp;sensor_msgs;std_msgs;tf;tf2;tf2_eigen;tf2_ros")
foreach(depend ${depends})
  string(REPLACE " " ";" depend_list ${depend})
  # the package name of the dependency must be kept in a unique variable so that it is not overwritten in recursive calls
  list(GET depend_list 0 pcl_ros_dep)
  list(LENGTH depend_list count)
  if(${count} EQUAL 1)
    # simple dependencies must only be find_package()-ed once
    if(NOT ${pcl_ros_dep}_FOUND)
      find_package(${pcl_ros_dep} REQUIRED NO_MODULE)
    endif()
  else()
    # dependencies with components must be find_package()-ed again
    list(REMOVE_AT depend_list 0)
    find_package(${pcl_ros_dep} REQUIRED NO_MODULE ${depend_list})
  endif()
  _list_append_unique(pcl_ros_INCLUDE_DIRS ${${pcl_ros_dep}_INCLUDE_DIRS})

  # merge build configuration keywords with library names to correctly deduplicate
  _pack_libraries_with_build_configuration(pcl_ros_LIBRARIES ${pcl_ros_LIBRARIES})
  _pack_libraries_with_build_configuration(_libraries ${${pcl_ros_dep}_LIBRARIES})
  _list_append_deduplicate(pcl_ros_LIBRARIES ${_libraries})
  # undo build configuration keyword merging after deduplication
  _unpack_libraries_with_build_configuration(pcl_ros_LIBRARIES ${pcl_ros_LIBRARIES})

  _list_append_unique(pcl_ros_LIBRARY_DIRS ${${pcl_ros_dep}_LIBRARY_DIRS})
  list(APPEND pcl_ros_EXPORTED_TARGETS ${${pcl_ros_dep}_EXPORTED_TARGETS})
endforeach()

set(pkg_cfg_extras "")
foreach(extra ${pkg_cfg_extras})
  if(NOT IS_ABSOLUTE ${extra})
    set(extra ${pcl_ros_DIR}/${extra})
  endif()
  include(${extra})
endforeach()
