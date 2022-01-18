cmake_minimum_required(VERSION 3.20)
project(Proiect___OOP)

set(CMAKE_CXX_STANDARD 14)

add_executable(Proiect___OOP
        main.cpp src/SediuCinema.cpp headers/SediuCinema.h src/Film.cpp headers/Film.h src/Rezervare.cpp headers/Rezervare.h src/Client.cpp headers/Client.h src/Cinema.cpp headers/Cinema.h src/Login.cpp headers/Login.h src/Erori_Film.cpp headers/Erori_Film.h src/Gen_Filme.cpp headers/Gen_Filme.h src/Meniu.cpp headers/Meniu.h)
