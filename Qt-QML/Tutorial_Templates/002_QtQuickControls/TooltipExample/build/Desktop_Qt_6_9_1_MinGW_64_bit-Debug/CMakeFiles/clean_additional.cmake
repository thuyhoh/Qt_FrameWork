# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appTooltipExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appTooltipExample_autogen.dir\\ParseCache.txt"
  "appTooltipExample_autogen"
  )
endif()
