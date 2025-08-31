# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appKeyElementExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appKeyElementExample_autogen.dir\\ParseCache.txt"
  "appKeyElementExample_autogen"
  )
endif()
