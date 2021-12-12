

#include "../headers/Film.h"
#include "../headers/Erori_Film.h"


int Film::id_max = 1;

Film::Film() : id(id_max) {id_max++;}

Film::Film(const std::string &numeFilm, const std::string &genFilm, const std::string &oraDeVizionare, const std::string &tehnologie, int pegi, int durataFilm, float pretBilet) : nume_film(numeFilm), gen_film(genFilm), ora_de_vizionare(oraDeVizionare), tehnologie(tehnologie), pegi(pegi), durata_film(durataFilm), pret_bilet(pretBilet),id(id_max) {
    id_max++;
    if (durata_film < 60)
        throw eroare_durata();
    if ((pret_bilet < 20) || (pret_bilet > 100 ))
        throw eroare_pret();
}

Film::Film(const Film &copie) : id(id_max) {
    this->nume_film=copie.nume_film;
    this->gen_film=copie.gen_film;
    this-> ora_de_vizionare=copie. ora_de_vizionare;
    this-> tehnologie=copie.tehnologie;
    this-> pegi=copie.pegi;
    this-> durata_film=durata_film;
    this-> pret_bilet=copie.pret_bilet;
    id_max++;
}

Film::~Film() {}

std::ostream &operator<<(std::ostream &os, const Film &film){

    film.afisare(os);
    return os;

}

void Film::afisare(std::ostream &os) const {

    const auto &film = *this;
    os << film.nume_film << " " << film.gen_film << " " << film.ora_de_vizionare << " " << film.tehnologie <<  " " << film.durata_film << " " << film.pret_bilet << std::endl;

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

int Film::getPegi() const {
    return pegi;
}

void Film::setPegi(int pegi) {
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

int Film::getIdMax() {
    return id_max;
}

void Film::setIdMax(int idMax) {
    id_max = idMax;
}


void Film::restrictie_varsta(Client &client) {

    if((client.getVarsta() < 18) && (this->getPegi() == 18)){

        throw varsta_minima();

    }
    else std::cout<<"Felicitari, indepliniti conditile de varsta necesare." << "\n";

}














