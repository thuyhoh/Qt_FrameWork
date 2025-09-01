# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appCheckBoxExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appCheckBoxExample_autogen.dir\\ParseCache.txt"
  "appCheckBoxExample_autogen"
  )
endif()
