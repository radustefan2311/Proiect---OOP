
#include "../headers/Client.h"


template <typename T>
Client<T>::Client() = default;

template <typename T>
Client<T>::Client(const std::string &numeClient, const std::string &username, const std::string &parola, T varsta) : nume_client(numeClient), username(username), parola(parola), varsta(varsta) {}

template <typename T>
std::ostream &operator<<(std::ostream &os, const class Client<T> &client) {
    os << "nume_client: " << client.nume_client << " username: " << client.username << " parola: nu aveti acces ! "  <<"varsta " <<client.varsta << "\n";
    return os;
}

template <typename T>
const std::string &Client<T>::getNumeClient() const {
    return nume_client;
}

template <typename T>
void Client<T>::setNumeClient(const std::string &numeClient) {
    nume_client = numeClient;
}

template <typename T>
const std::string &Client<T>::getUsername() const {
    return username;
}

template <typename T>
void Client<T>::setUsername(const std::string &username) {
    Client::username = username;
}

template <typename T>
const std::string &Client<T>::getParola() const {
    return parola;
}

template <typename T>
void Client<T>::setParola(const std::string &parola) {
    Client::parola = parola;
}

template <typename T>
int Client<T>::getVarsta() const {
    return varsta;
}

template <typename T>
void Client<T>::setVarsta(int varsta) {
    Client::varsta = varsta;
}


template class Client<int>;
template class Client<unsigned int>;
template
std::ostream& operator<< <>(std::ostream& o, const Client<int>& x);

