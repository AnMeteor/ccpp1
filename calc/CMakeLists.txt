cmake_minimum_required(VERSION 3.22.1)
project(calc)


aux_source_directory(./ SRC)
include_directories(${HEADPATH})
# 定义库生成路径, 把宏的路径单独改成自定义
set(LIBRARY_OUTPUT_PATH ${LIBPATH})

# 生成静态库时，链接其他 "静态库"
# 1.提供库名 2.提供库路径
link_libraries(${SORTLIB})
link_directories(${LIBPATH})

# 生成库：参数：1. 库的名字，2. 生成库类型（静态库）3.源文件
add_library(${CALCLIB} STATIC ${SRC})

# 链接动态库的区别
# 链接动态库的时候，需要写到最后
# 参数 1.指定让谁去链接这个动态库 参数 2.动态库名
# target_link_libraries(${${CALCLIB} SORTLIB})