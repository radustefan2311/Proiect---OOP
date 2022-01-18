//
// Created by Radu on 18.01.2022.
//

#ifndef MAIN_CPP_MENIU_H
#define MAIN_CPP_MENIU_H

#include <vector>
#include <ostream>
#include "Cinema.h"
#include <ostream>

class Meniu {

    std::vector<Cinema> cinema;
    std::vector<SediuCinema> sediu_cinema;
    //std::vector<Film> film;
    std::vector<Client<int>> client;
private:
    Meniu(const std::vector<Cinema> &cinema, const std::vector<SediuCinema> &sediuCinema, const std::vector<Client<int>> &client);

    static Meniu* menu;

public:
    Meniu(const Meniu&) = delete;
    Meniu& operator=(const Meniu&) = delete;
    static Meniu* get_menu(){
        if(menu == nullptr) { menu = new Meniu{{},{},{}};
        }
        return menu;
    }

    friend std::ostream &operator<<(std::ostream &os, const Meniu &meniu);


    void adauga_cinema(const class Cinema &Cinema);

    void adauga_sediu(const class SediuCinema &Sediu);

    void adauga_client(const class Client<int> &Client);

    ~Meniu();
};


#endif //MAIN_CPP_MENIU_H
