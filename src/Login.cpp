//
// Created by Radu on 22.11.2021.
//

#include "../headers/Login.h"

void Login::functie_login(const Client<int> &client) {
    int login_verific = 0;
    for(int i = 0; i < 5; i++) {
        std::cout << "Introduceti username-ul: ";
        std::string username;
        std::cin >> username;
        if (username == client.getUsername()) {
            std::cout << "Introduceti parola: ";
            std::string parola;
            std::cin >> parola;
            if (parola == client.getParola()){
                std::cout << "Bine ati venit!";
                login_verific = 1;
                break;
            } else{
                std::cout << "Parola sau username-ul incorecte! Introduceti din nou datele (mai aveti " << 5-i << " incercari)!"<<"\n";
            }
        }
    }
    if(login_verific == 0)
        std::cout << "Nu ati reusit sa va autentificati!";
}
