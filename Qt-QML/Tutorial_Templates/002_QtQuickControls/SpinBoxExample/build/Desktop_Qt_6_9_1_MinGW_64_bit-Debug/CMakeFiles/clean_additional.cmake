# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appSpinBoxExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appSpinBoxExample_autogen.dir\\ParseCache.txt"
  "appSpinBoxExample_autogen"
  )
endif()
