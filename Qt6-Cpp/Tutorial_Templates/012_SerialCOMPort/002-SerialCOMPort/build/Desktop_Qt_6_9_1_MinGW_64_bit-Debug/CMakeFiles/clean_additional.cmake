# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "002-SerialCOMPort_autogen"
  "CMakeFiles\\002-SerialCOMPort_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\002-SerialCOMPort_autogen.dir\\ParseCache.txt"
  )
endif()
