cmake_minimum_required(VERSION 3.22.1)
project(sort)

aux_source_directory(./ SRC)
include_directories(${HEADPATH})
set(LIBRARY_OUTPUT_PATH ${LIBPATH})
add_library(${SORTLIB} SHARED ${SRC})