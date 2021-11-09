

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
    std::string gen_film; // mostenire tipuri de film
    std::string ora_de_vizionare;
    std::string tehnologie;
    std::string pegi; // eventual initializat tot in clasa mostenita
    int durata_film;
    float pret_bilet;
    //Sala sala_cinema;


public:

    Film();
    Film(const std::string &numeFilm, const std::string &genFilm, const std::string &oraDeVizionare, const std::string &tehnologie, const std::string &pegi, int durataFilm, float pretBilet);
    friend std::ostream &operator<<(std::ostream &os, const Film &film);



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


};








#endif //PROIECT___OOP_FILM_H
