cmake_minimum_required(VERSION 3.13)
include(CMake/cmake_header.txt)

add_library(mbedtls STATIC IMPORTED)
set_target_properties(mbedtls PROPERTIES IMPORTED_LOCATION libmbedtls.a)

add_library(mbedcrypto STATIC IMPORTED)
set_target_properties(mbedcrypto PROPERTIES IMPORTED_LOCATION libmbedcrypto.a)

add_library(mbedx509 STATIC IMPORTED)
set_target_properties(mbedx509 PROPERTIES IMPORTED_LOCATION libmbedx509.a)

include_directories(.)

add_executable(hello division.c main.cpp)
target_link_libraries(hello mbedtls mbedx509 mbedcrypto)
elf2e32(hello 0xe8abe52f)
makesis(hello)
