

#include "../headers/Rezervare.h"

Rezervare::Rezervare(){}

Rezervare::Rezervare(int numarLocuri) : numar_locuri(numarLocuri) {}

Rezervare::Rezervare(int numarLocuri, const std::vector<Client<int>> &clienti) : numar_locuri(numarLocuri), clienti(clienti) {}



std::ostream &operator<< (std::ostream &os, const class Rezervare &rezervare){

    os << "numar_locuri: " << rezervare.numar_locuri << "\n";
    for(int i = 0; i < rezervare.clienti.size(); i++){
       os << rezervare.clienti[i] << "\n";
    }
    return os;
}

void Rezervare::adauga_client(const Client<int> &client) {
    clienti.push_back(client);
}

int Rezervare::getNumarLocuri() const {
    return numar_locuri;
}

void Rezervare::setNumarLocuri(int numarLocuri) {
    numar_locuri = numarLocuri;
}








