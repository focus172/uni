cmake_minimum_required(VERSION 3.5)

project(uni LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(uni src/main.cpp)

add_executable(hw1-sol1 src/homework1/sol1.cpp)#src/as_int.cpp)
add_executable(hw1-sol2 src/homework1/sol2.cpp)#src/as_int.cpp)

add_executable(lab2-sol1 src/lab2/sol1.cpp)
add_executable(lab2-sol2 src/lab2/sol2.cpp)

add_executable(hw2 src/homework2/sol2.cpp)

add_executable(lab3 src/lab3/sol1.cpp)

add_executable(lab4-sol1 src/lab4/point.cpp)
add_executable(lab4-sol2 src/lab4/triangle.cpp)

add_executable(lab5 src/lab5/sol1.cpp)

add_executable(hw4 src/homework4/speller.cpp)

add_executable(hw5 src/homework5/biguint.cpp)

add_executable(lab7 src/lab7/explain.cpp)

add_executable(hw6 src/homework6/Biguint.cpp)

add_executable(hw7 src/hw7/p3.cpp src/node.cpp src/hw7/test.cpp)

add_executable(lab8 src/lab8/p1.cpp src/node.cpp)

add_executable(lab9 src/lab9/test.cpp src/lab9/dnode.cpp)
add_executable(lab10 src/lab10/test.cpp)

add_executable(hw9 src/hw9/test.cpp src/hw9/Biguint.cpp src/hw9/Bigint.cpp)

# include(GNUInstallDirs)
#
# install(TARGETS uni
#     LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
#     RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
# )
