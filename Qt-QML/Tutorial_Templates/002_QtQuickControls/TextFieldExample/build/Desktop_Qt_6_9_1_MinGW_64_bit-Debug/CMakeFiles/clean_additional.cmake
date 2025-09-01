# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appTextFieldExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appTextFieldExample_autogen.dir\\ParseCache.txt"
  "appTextFieldExample_autogen"
  )
endif()
