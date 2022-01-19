//
// Created by Radu on 22.11.2021.
//

#include"Client.h"
#include"Rezervare.h"
#include <iostream>
#include <vector>
#include "../criptare/digestpp.hpp"

#ifndef PROIECT___OOP_LOGIN_H
#define PROIECT___OOP_LOGIN_H

class Login {

    std::vector<Client<int>> logare;
public:
    void functie_login(const Client<int> &client);
    void functie_schimbare_parola(Client<int> &client);
};



#endif //PROIECT___OOP_LOGIN_H
