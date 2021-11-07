#ifndef PROIECT___OOP_SEDIUCINEMA_H
#define PROIECT___OOP_SEDIUCINEMA_H

#include <string>
#include <vector>
#include <iostream>
#include "Film.h"

class SediuCinema{
private:
    std::string adresa;
    std::string program;
    std::vector <Sala> sali_cinema;
    std::vector <Film> filme;
public:

    SediuCinema();
    SediuCinema(const std::string &adresa, const std::string &program);
    SediuCinema(const std::string &adresa, const std::string &program, const std::vector<Sala> &saliCinema, const std::vector<Film> &filme);

    friend std::ostream &operator<<(std::ostream &os, const SediuCinema &cinema);
    void adauga_film(Film film);
    void adauga_sala(Sala sala);

    const std::string &getAdresa() const;
    void setAdresa(const std::string &adresa);

    const std::string &getProgram() const;
    void setProgram(const std::string &program);

};








#endif //PROIECT___OOP_SEDIUCINEMA_H
