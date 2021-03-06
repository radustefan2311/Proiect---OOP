//
// Created by Radu on 06.11.2021.
//

#ifndef PROIECT___OOP_CLIENT_H
#define PROIECT___OOP_CLIENT_H

#include <string>
#include <vector>
#include <iostream>

template <typename T>
class Client;

template <typename T>
std::ostream& operator<<(std::ostream& o, const Client<T>& client);

template <typename T>
class Client{
private:
    std::string nume_client;
    std::string username;
    std::string parola;
    T varsta;


public:

    Client();
    Client(const std::string &numeClient, const std::string &username, const std::string &parola, T varsta);
    friend std::ostream &operator<< <>(std::ostream &os, const class Client<int> &client);

    const std::string &getNumeClient() const;
    void setNumeClient(const std::string &numeClient);

    const std::string &getUsername() const;
    void setUsername(const std::string &username);

    const std::string &getParola() const;
    void setParola(const std::string &parola);

    int getVarsta() const;
    void setVarsta(int varsta);


};



#endif //PROIECT___OOP_CLIENT_H
