cmake_minimum_required(VERSION 3.22.1)
project(test)

# 定义库生成路径
set(LIBPATH ${PROJECT_SOURCE_DIR}/lib)
# 可执行程序生成路径
set(EXECPATH ${PROJECT_SOURCE_DIR}/bin)
# 头文件路径
set(HEADPATH ${PROJECT_SOURCE_DIR}/include)
# 各文件库名字
set(CALCLIB calc)
set(SORTLIB sort)
#可执行程序名
set(APPNAME1 app1)
set(APPNAME2 app2)
                                                      
# 给当前节点添加子目录
add_subdirectory(calc)
add_subdirectory(test1)
add_subdirectory(sort)
# add_subdirectory(test2)