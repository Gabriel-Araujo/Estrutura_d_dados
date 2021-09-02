cmake_minimum_required(VERSION 3.16)
project(TAD_circulo C)

set(CMAKE_C_STANDARD 99)

add_executable(TAD_circulo main.c circulo.c circulo.h ponto.c ponto.h)
