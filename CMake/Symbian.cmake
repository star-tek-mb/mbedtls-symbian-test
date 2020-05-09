set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR arm)
set(CMAKE_SYSTEM_VERSION 1)
 
set(CMAKE_C_COMPILER arm-none-symbianelf-gcc)
set(CMAKE_CXX_COMPILER arm-none-symbianelf-g++)
set(CMAKE_LINKER arm-none-symbianelf-ld)
 
set(COMMON_FLAGS "-nostdinc -nostdlib")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${COMMON_FLAGS}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${COMMON_FLAGS}")