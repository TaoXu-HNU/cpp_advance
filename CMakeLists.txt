##################################################################
cmake_minimum_required(VERSION 3.0.2)  # 声明使用CMAKE的最低版本要求

project(cpp_advance)  # 项目的名称

add_executable(pointer      # 将cpp文件编译成可执行文件sdk       
src/pointer.cpp 
)

include_directories(${PROJECT_SOURCE_DIR}/src/include)