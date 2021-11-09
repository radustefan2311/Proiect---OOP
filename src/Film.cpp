

#include "../headers/Film.h"


Film::Film(){}

Film::Film(const std::string &numeFilm, const std::string &genFilm, const std::string &oraDeVizionare, const std::string &tehnologie, const std::string &pegi, int durataFilm, float pretBilet) : nume_film(numeFilm), gen_film(genFilm), ora_de_vizionare(oraDeVizionare), tehnologie(tehnologie), pegi(pegi), durata_film(durataFilm), pret_bilet(pretBilet) {}

std::ostream &operator<<(std::ostream &os, const Film &film){

    os << "nume_film: " << film.nume_film << " gen_film: " << film.gen_film << " ora_de_vizionare: " << film.ora_de_vizionare << " tehnologie: " << film.tehnologie << " pegi: " << film.pegi << " durata_film: " << film.durata_film << " pret_bilet: " << film.pret_bilet;
    return os;

}


const std::string &Film::getNumeFilm() const {
    return nume_film;
}

void Film::setNumeFilm(const std::string &numeFilm) {
    nume_film = numeFilm;
}

const std::string &Film::getGenFilm() const {
    return gen_film;
}

void Film::setGenFilm(const std::string &genFilm) {
    gen_film = genFilm;
}

const std::string &Film::getOraDeVizionare() const {
    return ora_de_vizionare;
}

void Film::setOraDeVizionare(const std::string &oraDeVizionare) {
    ora_de_vizionare = oraDeVizionare;
}

const std::string &Film::getTehnologie() const {
    return tehnologie;
}

void Film::setTehnologie(const std::string &tehnologie) {
    Film::tehnologie = tehnologie;
}

const std::string &Film::getPegi() const {
    return pegi;
}

void Film::setPegi(const std::string &pegi) {
    Film::pegi = pegi;
}

int Film::getDurataFilm() const {
    return durata_film;
}

void Film::setDurataFilm(int durataFilm) {
    durata_film = durataFilm;
}

float Film::getPretBilet() const {
    return pret_bilet;
}

void Film::setPretBilet(float pretBilet) {
    pret_bilet = pretBilet;
}

