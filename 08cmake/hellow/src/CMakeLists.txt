#项目名称
PROJECT(HELLOWORLD)
 
#定义变量
SET(SRC_LIST helloworld.cpp)
 
#打印用户的一些信息
MESSAGE(STATUS "This is BINARY dir " ${HELLOWORLD_BINARY_DIR})
MESSAGE(STATUS "This is SOURCE dir "${HELLOWORLD_SOURCE_DIR})
 
#生成可执行文件
ADD_EXECUTABLE(helloworld ${SRC_LIST})