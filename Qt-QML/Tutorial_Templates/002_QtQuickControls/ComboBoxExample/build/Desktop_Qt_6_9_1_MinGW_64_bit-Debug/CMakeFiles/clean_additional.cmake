# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appComboBoxExample_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appComboBoxExample_autogen.dir\\ParseCache.txt"
  "appComboBoxExample_autogen"
  )
endif()
