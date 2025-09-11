# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "001-QSerialPortInfo_autogen"
  "CMakeFiles\\001-QSerialPortInfo_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\001-QSerialPortInfo_autogen.dir\\ParseCache.txt"
  )
endif()
