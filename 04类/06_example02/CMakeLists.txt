#cmakelists中不区分大小写
#项目名称
project(test)
 
#定义变量  将main.cpp设置为SRC_LIST
set(SRC_LIST main.cpp)

#生成可执行文件  将${SRC_LIST}中的内容编译后生成名为main的可执行程序 
add_executable(main ${SRC_LIST})
