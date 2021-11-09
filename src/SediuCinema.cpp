

#include "../headers/SediuCinema.h"

SediuCinema::SediuCinema(){}

SediuCinema::SediuCinema(const std::string &adresa, const std::string &program) : adresa(adresa), program(program) {}

SediuCinema::SediuCinema(const std::string &adresa, const std::string &program, const std::vector<Sala> &saliCinema, const std::vector<Film> &filme, const std::vector<Rezervare> &rezervari) : adresa(adresa), program(program), sali_cinema(saliCinema), filme(filme), rezervari(rezervari) {}

std::ostream &operator<<(std::ostream &os, const SediuCinema &cinema) {

    os << "adresa: " << cinema.adresa << " program: " << cinema.program;
    for(const auto & Film : cinema.filme)
        os << Film << std::endl;
    for(const auto & Sala : cinema.sali_cinema)
        os << Sala << std::endl;
    for(const auto & Rezervare : cinema.rezervari)
        os << Rezervare << std::endl;
    return os;

}

void SediuCinema::adauga_film(Film film) {
    filme.push_back(film);
}

void SediuCinema::adauga_sala(Sala sala) {
    sali_cinema.push_back(sala);
}

void SediuCinema::adauga_rezervare(Rezervare rezervare)  {
    rezervari.push_back(rezervare);
}


const std::string &SediuCinema::getAdresa() const {
    return adresa;
}

void SediuCinema::setAdresa(const std::string &adresa) {
    SediuCinema::adresa = adresa;
}

const std::string &SediuCinema::getProgram() const {
    return program;
}

void SediuCinema::setProgram(const std::string &program) {
    SediuCinema::program = program;
}



