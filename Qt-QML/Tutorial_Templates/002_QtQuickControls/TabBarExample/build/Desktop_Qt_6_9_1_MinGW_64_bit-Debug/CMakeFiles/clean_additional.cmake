# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appTabBarExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appTabBarExample_autogen.dir\\ParseCache.txt"
  "appTabBarExample_autogen"
  )
endif()
