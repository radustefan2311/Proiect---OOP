

#include "../headers/Rezervare.h"

Rezervare::Rezervare(){}

Rezervare::Rezervare(int numarLocuri) : numar_locuri(numarLocuri) {}

Rezervare::Rezervare(int numarLocuri, const std::vector<Client> &clienti) : numar_locuri(numarLocuri), clienti(clienti) {}

std::ostream &operator<<(std::ostream &os, const Rezervare &rezervare){

    os << "numar_locuri: " << rezervare.numar_locuri;
    for(const auto & Client : rezervare.clienti)
        os << Client << std::endl;
    return os;
}

void Rezervare::adauga_client(const Client client) {
    clienti.push_back(client);
}

int Rezervare::getNumarLocuri() const {
    return numar_locuri;
}

void Rezervare::setNumarLocuri(int numarLocuri) {
    numar_locuri = numarLocuri;
}





