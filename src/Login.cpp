
#include "../headers/Login.h"
using namespace digestpp;

void Login::functie_login(const Client<int> &client) {
    int login_verific = 0;
    for(int i = 0; i < 5; i++) {
        std::cout << "Pentru logare va rugam sa va introduceti datele contului dumneavoastra (aveti 5 incercari la dispozitie)." << "\n";
        std::cout << "Introduceti username-ul: ";
        std::string username;
        std::cin >> username;
        if (username == client.getUsername()) {
            std::cout << "Introduceti parola: ";
            std::string parola;
            std::cin >> parola;
            if (blake2b(256).absorb(parola).hexdigest() ==client.getParola()){
                std::cout << "Bine ati venit!"<<"\n";
                login_verific = 1;
                break;
            } else{
                std::cout << "Parola sau username-ul incorecte! Introduceti din nou datele (mai aveti " << 5-i << " incercari)!"<<"\n";
            }
        }
    }
    if(login_verific == 0)
        std::cout << "Nu ati reusit sa va autentificati!" <<"\n";
}


void Login::functie_schimbare_parola(Client<int> &client) {

    int login_verific = 0;
    for(int i = 0; i < 5; i++) {
        std::cout << "Ati solicitat schimbarea parolei !" << "\n";
        std::cout << "Reitroduceti username-ul: ";
        std::string username;
        std::cin >> username;
        if (username == client.getUsername()) {
            std::cout << "Introduceti parola veche: ";
            std::string parola;
            std::cin >> parola;
            if (blake2b(256).absorb(parola).hexdigest() == client.getParola()){
                std::string parola_noua;
                std::cout << "Introduceti noua parola: ";
                std::cin >> parola_noua;
                client.setParola(blake2b(256).absorb(parola_noua).hexdigest());
                login_verific = 1;
                std::cout << "Parola a fost modificata cu succes !" << "\n";
                break;
            } else{
                std::cout << "Parola sau username-ul incorecte! Introduceti din nou datele (mai aveti " << 5-i << " incercari)!"<<"\n";
            }
        }
    }
    if(login_verific == 0)
        std::cout << "Nu ati reusit sa va autentificati!" <<"\n";

}
