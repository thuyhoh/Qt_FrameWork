# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appBusyIndicationExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appBusyIndicationExample_autogen.dir\\ParseCache.txt"
  "appBusyIndicationExample_autogen"
  )
endif()
