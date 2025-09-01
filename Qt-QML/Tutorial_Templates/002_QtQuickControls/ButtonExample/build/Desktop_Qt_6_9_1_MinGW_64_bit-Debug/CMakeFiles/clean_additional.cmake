# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appButtonExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appButtonExample_autogen.dir\\ParseCache.txt"
  "appButtonExample_autogen"
  )
endif()
