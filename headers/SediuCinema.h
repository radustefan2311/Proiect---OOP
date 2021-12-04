#ifndef PROIECT___OOP_SEDIUCINEMA_H
#define PROIECT___OOP_SEDIUCINEMA_H

#include <string>
#include <vector>
#include <iostream>
#include "Film.h"
#include <memory>

class SediuCinema{
private:
    std::string adresa;
    std::string program;

    std::vector<std::shared_ptr<Film>> filme;
    std::vector<Rezervare> rezervari;
public:

    SediuCinema();
    SediuCinema(const std::string &adresa, const std::string &program);
    SediuCinema(const std::string &adresa, const std::string &program, const std::vector<std::shared_ptr<Film>> filme, const std::vector<Rezervare> &rezervari);

    friend std::ostream &operator<<(std::ostream &os, const SediuCinema &cinema);
    void adauga_film(const Film &film);
    void adauga_rezervare(const Rezervare &rezervare);

    const std::string &getAdresa() const;
    void setAdresa(const std::string &adresa);

    const std::string &getProgram() const;
    void setProgram(const std::string &program);

};








#endif //PROIECT___OOP_SEDIUCINEMA_H
