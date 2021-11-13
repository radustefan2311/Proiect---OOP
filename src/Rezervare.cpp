

#include "../headers/Rezervare.h"

Rezervare::Rezervare(){}

Rezervare::Rezervare(int numarLocuri) : numar_locuri(numarLocuri) {}

Rezervare::Rezervare(int numarLocuri, const std::vector<Client> &clienti) : numar_locuri(numarLocuri), clienti(clienti) {}

std::ostream &operator<<(std::ostream &os, const Rezervare &rezervare){

    os << "numar_locuri: " << rezervare.numar_locuri << "\n";
    for(const auto & Client : rezervare.clienti)
        os << Client << "\n";
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

void Rezervare::functie_login(std::string nume) {

    for(const auto & client:clienti)
        if(client.getNumeClient().compare(nume)==0)
        {
            std::cout<<"Introduceti parola: ";
            std::string parola;
            std::cin>>parola;
            if(client.getParola().compare(parola)==0)
            {
                std::cout<<"Bine ati venit! \n";
                std::cout<<client << "\n";
                x=0;
                break;

            }
            else { std::cout << "Parola pe care ati introdus-o este gresita" << "\n";}
        } else
            x=1;



}





