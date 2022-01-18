//
// Created by Radu on 18.01.2022.
//

#include "../headers/Meniu.h"

Meniu::Meniu(const std::vector<Cinema> &cinema, const std::vector<SediuCinema> &sediuCinema, const std::vector<Client<int>> &client) : cinema(cinema), sediu_cinema(sediuCinema), client(client) {}

std::ostream &operator<<(std::ostream &os, const Meniu &meniu) {
    std::cout <<"Cinematografe disponibile in meniu: ";
    for(const auto &Cinema : meniu.cinema)
        std::cout << Cinema.getNumeCinema() << '\n';
    std::cout <<"Sediile aferente :";
    for(const auto &SediuCinema : meniu.sediu_cinema)
        std::cout << SediuCinema.getAdresa() << '\n';


    std::cout <<"Clienti abonati :";
    for(const auto &Client : meniu.client)
        std::cout << Client.getNumeClient() << " - " <<Client.getUsername() << '\n';
    return os;
}

void Meniu::adauga_cinema(const Cinema &Cinema) {

    cinema.push_back(Cinema);
}

void Meniu::adauga_sediu(const SediuCinema &Sediu) {

    sediu_cinema.push_back(Sediu);
}

void Meniu::adauga_client(const Client<int> &Client) {

    client.push_back(Client);
}

Meniu::~Meniu(){
    delete menu;
}

Meniu* Meniu::menu = nullptr;

