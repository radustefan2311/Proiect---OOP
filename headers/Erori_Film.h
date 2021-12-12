#ifndef PROIECT___OOP_ERORI_FILM_H
#define PROIECT___OOP_ERORI_FILM_H

#include <stdexcept>
#include <string>


class eroare_film : public std::runtime_error{
public:
eroare_film(const std::string &arg);
};

class eroare_varsta_minima : public eroare_film {
public:
    eroare_varsta_minima();
};

class eroare_durata : public eroare_film {
public:
    eroare_durata();
};

class eroare_pret : public eroare_film {
public:
    eroare_pret();
};









#endif //PROIECT___OOP_ERORI_FILM_H
