cmake_minimum_required(VERSION 4.0)
project(proyect_prgr3_avance)

set(CMAKE_CXX_STANDARD 20)

add_executable(proyect_prgr3_avance main.cpp
        Tag.h
        Tag.cpp
        Pelicula.h
        Pelicula.cpp
        Usuario.h
        Usuario.cpp
        CSVReader.h
        CSVReader.cpp
        CSVReader.cpp
        Motor_de_busqueda.cpp
        Motor_de_busqueda.h
        test_motor.cpp)
