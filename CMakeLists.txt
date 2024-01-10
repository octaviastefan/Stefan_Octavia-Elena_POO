cmake_minimum_required(VERSION 3.26)
project(untitled2)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled2 main.cpp
        ../src/Entitate.cpp
        ../headers/Entitate.h
        ../src/EntitateException.cpp
        ../headers/EntitateException.h
        ../src/Furnizor.cpp
        ../headers/Furnizor.h
        ../src/GestionareFarmacieException.cpp
        ../headers/GestionareFarmacieException.h
        ../src/Medic.cpp
        ../headers/Medic.h
        ../src/Medicament.cpp
        ../headers/Medicament.h
        ../src/Pacient.cpp
        ../headers/Pacient.h
        headers/Entitate.h
)
