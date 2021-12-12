
#include "../headers/Gen_Filme.h"

Horror::Horror(const std::string &numeFilm, const std::string &genFilm, const std::string &oraDeVizionare, const std::string &tehnologie, int pegi, int durataFilm, float pretBilet, int graphicScenes, const std::string &horrorGenre) : Film(numeFilm, genFilm, oraDeVizionare, tehnologie, pegi, durataFilm, pretBilet), graphic_scenes(graphicScenes), horror_genre(horrorGenre) {}

Horror::~Horror() = default;

Comedie::Comedie(const std::string &numeFilm, const std::string &genFilm, const std::string &oraDeVizionare, const std::string &tehnologie, int pegi, int durataFilm, float pretBilet, const std::string &tipUmor) : Film(numeFilm, genFilm, oraDeVizionare, tehnologie, pegi, durataFilm, pretBilet), tip_umor(tipUmor) {}

Comedie::~Comedie() = default;

Actiune::Actiune(const std::string &numeFilm, const std::string &genFilm, const std::string &oraDeVizionare, const std::string &tehnologie, int pegi, int durataFilm, float pretBilet, int bugetCgi, const std::string &stuntActor) : Film(numeFilm, genFilm, oraDeVizionare, tehnologie, pegi, durataFilm, pretBilet), buget_cgi(bugetCgi), stunt_actor(stuntActor) {}

Actiune::~Actiune() = default;

std::shared_ptr <Film> Horror::clone() const {
    return std::make_shared <Horror>(*this);
}

std::shared_ptr <Film> Comedie::clone() const {
    return std::make_shared <Comedie>(*this);
}

std::shared_ptr <Film> Actiune::clone() const {
    return std::make_shared <Actiune>(*this);
}

void Horror::afisare(std::ostream &os) const {
    os << graphic_scenes <<" "<< horror_genre <<" ";
    Film::afisare(os);
}

void Comedie::afisare(std::ostream &os) const {
    os << tip_umor <<" ";
    Film::afisare(os);
}

void Actiune::afisare(std::ostream &os) const {
    os << buget_cgi <<"$" <<" "<< stunt_actor <<" ";
    Film::afisare(os);
}

