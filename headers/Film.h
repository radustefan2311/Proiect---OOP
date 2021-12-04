

#ifndef PROIECT___OOP_FILM_H
#define PROIECT___OOP_FILM_H


#include <string>
#include <vector>
#include <iostream>
#include "Rezervare.h"
#include "Client.h"

class Film{
private:
    const int id;
    static int id_max;
    std::string nume_film;
    std::string gen_film; // mostenire tipuri de film
    std::string ora_de_vizionare;
    std::string tehnologie;
    std::string pegi; // eventual initializat tot in clasa mostenita
    int durata_film;
    float pret_bilet;

public:

    Film();
    Film(const std::string &numeFilm, const std::string &genFilm, const std::string &oraDeVizionare, const std::string &tehnologie, const std::string &pegi, int durataFilm, float pretBilet);
    Film(const Film &copie);
    friend std::ostream &operator<<(std::ostream &os, const Film &film);

    void restrictie_varsta(Client e);

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

    static int getIdMax();
    static void setIdMax(int idMax);

};



#endif //PROIECT___OOP_FILM_H
