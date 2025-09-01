# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appContextMenuExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appContextMenuExample_autogen.dir\\ParseCache.txt"
  "appContextMenuExample_autogen"
  )
endif()
