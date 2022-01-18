#include "../headers/Cinema.h"

Cinema::Cinema() {}

//Cinema::Cinema(const std::string &numeCinema, const std::string &siteWeb, const std::string &nrTelefon) : nume_cinema(numeCinema), site_web(siteWeb), nr_telefon(nrTelefon) {}

//Cinema::Cinema(const std::string &numeCinema, const std::string &siteWeb, const std::string &nrTelefon, const std::vector<SediuCinema> &sedii) : nume_cinema(numeCinema), site_web(siteWeb), nr_telefon(nrTelefon), Sedii(sedii) {}

Cinema::Cinema(const Cinema &copie) {
    this->nume_cinema=copie.nume_cinema;
    this->site_web=copie.site_web;
    this->nr_telefon=copie.nr_telefon;
    for(const auto & SediuCinema : copie.Sedii){
        this->Sedii.push_back(SediuCinema);
    }
}

Cinema& Cinema::operator=(const Cinema &copie) {
    if(this != &copie){

        this->nume_cinema=copie.nume_cinema;
        this->site_web=copie.site_web;
        this->nr_telefon=copie.nr_telefon;
        for(const auto & SediuCinema: copie.Sedii){
            this->Sedii.push_back(SediuCinema);}
    }
    return *this;
}

void Cinema::adauga_sediu(const SediuCinema &sediu) {
    Sedii.push_back(sediu);
}

Cinema::~Cinema() {
    std::cout<<"Destructor apelat"<<"\n";};

std::ostream &operator<<(std::ostream &os, const Cinema &cinema) {
    os << "nume_cinema: " << cinema.nume_cinema <<"\n" << " site_web: " << cinema.site_web <<"\n" << " nr_telefon: " << cinema.nr_telefon <<"\n" << " SediuCinema:-> " << "\n";
    for(const auto & SediuCinema : cinema.Sedii)
        os << SediuCinema << "\n";
    return os;
}

const std::string &Cinema::getNumeCinema() const {
    return nume_cinema;
}

void Cinema::setNumeCinema(const std::string &numeCinema) {
    nume_cinema = numeCinema;
}

const std::string &Cinema::getSiteWeb() const {
    return site_web;
}

void Cinema::setSiteWeb(const std::string &siteWeb) {
    site_web = siteWeb;
}

const std::string &Cinema::getNrTelefon() const {
    return nr_telefon;
}

void Cinema::setNrTelefon(const std::string &nrTelefon) {
    nr_telefon = nrTelefon;
}
