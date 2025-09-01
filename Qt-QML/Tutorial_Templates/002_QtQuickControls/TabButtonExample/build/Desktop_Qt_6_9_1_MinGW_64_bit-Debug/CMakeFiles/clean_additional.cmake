# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appTabButtonExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appTabButtonExample_autogen.dir\\ParseCache.txt"
  "appTabButtonExample_autogen"
  )
endif()
