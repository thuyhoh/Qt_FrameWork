# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appDialogButExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appDialogButExample_autogen.dir\\ParseCache.txt"
  "appDialogButExample_autogen"
  )
endif()
