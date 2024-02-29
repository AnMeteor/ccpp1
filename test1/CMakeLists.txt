cmake_minimum_required(VERSION 3.22.1)
project(test1)

aux_source_directory(./ SRC)
# 头文件地址
include_directories(${HEADPATH})
# 链接库
link_libraries(${CALCLIB})
# 引入第三方库的路径
link_directories(${LIBPATH})
# 可执行程序路径
set(EXECUTABLE_OUTPUT_PATH ${EXECPATH})
# 生成可执行程序
add_executable(${APPNAME1} ${SRC})  
