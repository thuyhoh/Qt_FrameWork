# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appOverlayExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appOverlayExample_autogen.dir\\ParseCache.txt"
  "appOverlayExample_autogen"
  )
endif()
