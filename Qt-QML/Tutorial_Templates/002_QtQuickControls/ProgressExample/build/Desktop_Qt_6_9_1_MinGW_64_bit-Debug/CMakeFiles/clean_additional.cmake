# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appProgressExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appProgressExample_autogen.dir\\ParseCache.txt"
  "appProgressExample_autogen"
  )
endif()
