
#include "../headers/Client.h"

Client::Client() {}

Client::Client(const std::string &numeClient, const std::string &username, const std::string &parola, int varsta) : nume_client(numeClient), username(username), parola(parola), varsta(varsta) {}

std::ostream &operator<<(std::ostream &os, const Client &client) {
    os << "nume_client: " << client.nume_client;

    return os;
}


const std::string &Client::getNumeClient() const {
    return nume_client;
}

void Client::setNumeClient(const std::string &numeClient) {
    nume_client = numeClient;
}

const std::string &Client::getUsername() const {
    return username;
}

void Client::setUsername(const std::string &username) {
    Client::username = username;
}

const std::string &Client::getParola() const {
    return parola;
}

void Client::setParola(const std::string &parola) {
    Client::parola = parola;
}

int Client::getVarsta() const {
    return varsta;
}

void Client::setVarsta(int varsta) {
    Client::varsta = varsta;
}
