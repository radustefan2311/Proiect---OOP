

#ifndef PROIECT___OOP_FILM_H
#define PROIECT___OOP_FILM_H


#include <string>
#include <vector>
#include <iostream>
#include "Rezervare.h"
#include "Sala.h"
#include "Client.h"

class Film{
private:
    std::string nume_film;
    std::string gen_film;
    std::string ora_de_vizionare;
    std::string tehnologie;
    std::string pegi;
    int durata_film;
    float pret_bilet;
    Sala sala_cinema;
    std::vector<Rezervare> rezervari;

public:

    Film();
    Film(const std::string &numeFilm, const std::string &genFilm, const std::string &oraDeVizionare, const std::string &tehnologie, const std::string &pegi, int durataFilm, float pretBilet, const Sala &salaCinema);
    Film(const std::string &numeFilm, const std::string &genFilm, const std::string &oraDeVizionare, const std::string &tehnologie, const std::string &pegi, int durataFilm, float pretBilet, const Sala &salaCinema, const std::vector<Rezervare> &rezervari);
    friend std::ostream &operator<<(std::ostream &os, const Film &film);
    void adauga_rezervare(const Rezervare rezervare);
//    void verifica_varsta( Client e ){
//        if( e.get)
    }

    const std::string &getNumeFilm() const;
    void setNumeFilm(const std::string &numeFilm);

    const std::string &getGenFilm() const;
    void setGenFilm(const std::string &genFilm);

    const std::string &getOraDeVizionare() const;
    void setOraDeVizionare(const std::string &oraDeVizionare);

    const std::string &getTehnologie() const;
    void setTehnologie(const std::string &tehnologie);

    const std::string &getPegi() const;
    void setPegi(const std::string &pegi);

    int getDurataFilm() const;
    void setDurataFilm(int durataFilm);

    float getPretBilet() const;
    void setPretBilet(float pretBilet);

    const Sala &getSalaCinema() const;
    void setSalaCinema(const Sala &salaCinema);
};








#endif //PROIECT___OOP_FILM_H
