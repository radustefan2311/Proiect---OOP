

#ifndef PROIECT___OOP_REZERVARE_H
#define PROIECT___OOP_REZERVARE_H


#include <vector>
#include <iostream>
#include "Client.h"
#include "Film.h"

class Rezervare {
private:
    int numar_locuri;
    std::vector<Client> clienti;
public:

    Rezervare();
    Rezervare(int numarLocuri);
    Rezervare(int numarLocuri, const std::vector<Client> &clienti);
    friend std::ostream &operator<<(std::ostream &os, const Rezervare &rezervare);
    void adauga_client(const Client client);

    int getNumarLocuri() const;
    void setNumarLocuri(int numarLocuri);




};




#endif //PROIECT___OOP_REZERVARE_H
