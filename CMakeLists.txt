cmake_minimum_required(VERSION 3.22.0)

project(figure)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(FigureLibraryDinamic SHARED
classes/Figure.h classes/Figure.cpp
classes/error_create_figure.h classes/error_create_figure.cpp
classes/Quadrilateral.h classes/Quadrilateral.cpp
classes/Triangle.h classes/Triangle.cpp
classes/EquilateralTriangle.h classes/EquilateralTriangle.cpp
classes/IsoscelesTriangle.h classes/IsoscelesTriangle.cpp
classes/Parallelogram.h classes/Parallelogram.cpp
classes/Rectangle.h classes/Rectangle.cpp
classes/Rhombus.h classes/Rhombus.cpp
classes/RightTriangle.h classes/RightTriangle.cpp
classes/Square.h classes/Square.cpp)

add_executable(HW-11.5 main.cpp)

target_link_libraries(HW-11.5 FigureLibraryDinamic)