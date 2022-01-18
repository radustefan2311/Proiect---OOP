

#ifndef PROIECT___OOP_FILM_H
#define PROIECT___OOP_FILM_H


#include <string>
#include <vector>
#include <iostream>
#include "Rezervare.h"
#include "Client.h"
#include <memory>

class Film{
private:
    const int id;
    static int id_max;
protected:
    std::string nume_film;
    std::string gen_film; // mostenire tipuri de film
    std::string ora_de_vizionare;
    std::string tehnologie;
    int pegi;
    int durata_film;
    float pret_bilet;
    virtual void afisare(std::ostream &os) const;
public:

    Film();
    Film(const std::string &numeFilm, const std::string &genFilm, const std::string &oraDeVizionare, const std::string &tehnologie, int pegi, int durataFilm, float pretBilet);
    Film(const Film &copie);
    virtual ~Film() = 0;

    friend std::ostream &operator<<(std::ostream &os, const Film &film);

    virtual std::shared_ptr <Film> clone() const = 0;
    void restrictie_varsta(Client<int> &client);

    const std::string &getNumeFilm() const;
    void setNumeFilm(const std::string &numeFilm);

    const std::string &getGenFilm() const;
    void setGenFilm(const std::string &genFilm);

    const std::string &getOraDeVizionare() const;
    void setOraDeVizionare(const std::string &oraDeVizionare);

    const std::string &getTehnologie() const;
    void setTehnologie(const std::string &tehnologie);

    float getPretBilet() const;
    void setPretBilet(float pretBilet);

    int getDurataFilm() const;
    void setDurataFilm(int durataFilm);

    static int getIdMax();
    static void setIdMax(int idMax);

    int getPegi() const;
    void setPegi(int pegi);

};



#endif //PROIECT___OOP_FILM_H
