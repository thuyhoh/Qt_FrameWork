# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appComponentExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appComponentExample_autogen.dir\\ParseCache.txt"
  "appComponentExample_autogen"
  )
endif()
