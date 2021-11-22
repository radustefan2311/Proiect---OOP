
#ifndef PROIECT___OOP_CINEMA_H
#define PROIECT___OOP_CINEMA_H

#include "SediuCinema.h"

class Cinema{
private:
    std::string nume_cinema;
    std::string site_web;
    std::string nr_telefon;
    std::vector<SediuCinema> Sedii;
public:


    Cinema();
    Cinema(const std::string &numeCinema, const std::string &siteWeb, const std::string &nrTelefon);
    Cinema(const std::string &numeCinema, const std::string &siteWeb, const std::string &nrTelefon, const std::vector<SediuCinema> &sedii);
    Cinema(const Cinema &copie);
    Cinema& operator=(const Cinema& copie);
    ~Cinema();
    friend std::ostream &operator<<(std::ostream &os, const Cinema &cinema);
    void adauga_sediu(const SediuCinema &sediu);

    const std::string &getNumeCinema() const;
    void setNumeCinema(const std::string &numeCinema);

    const std::string &getSiteWeb() const;
    void setSiteWeb(const std::string &siteWeb);

    const std::string &getNrTelefon() const;
    void setNrTelefon(const std::string &nrTelefon);

};




#endif //PROIECT___OOP_CINEMA_H
