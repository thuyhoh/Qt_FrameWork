# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appSliderExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appSliderExample_autogen.dir\\ParseCache.txt"
  "appSliderExample_autogen"
  )
endif()
