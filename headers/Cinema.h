
#ifndef PROIECT___OOP_CINEMA_H
#define PROIECT___OOP_CINEMA_H

#include "SediuCinema.h"

class Cinema{
private:
    std::string nume_cinema;
    std::string site_web;
    std::string nr_telefon;
    std::vector<SediuCinema> Sedii;
    friend class cinema_builder;
public:


    Cinema();
   // Cinema(const std::string &numeCinema, const std::string &siteWeb, const std::string &nrTelefon);
   // Cinema(const std::string &numeCinema, const std::string &siteWeb, const std::string &nrTelefon, const std::vector<SediuCinema> &sedii);
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

class cinema_builder{
private:
    class Cinema Cinema;
public:
    cinema_builder() = default;
    cinema_builder& nume_cinema(const std::string& nume_cinema){
        Cinema.nume_cinema = nume_cinema;
        return *this;
    }
    cinema_builder& site_web(const std::string& site_web){
        Cinema.site_web = site_web;
        return *this;
    }
    cinema_builder& nr_telefon(const std::string& nr_telefon){
        Cinema.nr_telefon = nr_telefon;
        return *this;
    }
    cinema_builder& Sedii(const std::vector<SediuCinema> Sedii){
        Cinema.Sedii = Sedii;
        return *this;
    }
    class Cinema build(){
        return Cinema;
    }

};


#endif //PROIECT___OOP_CINEMA_H
