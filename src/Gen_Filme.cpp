
#include "../headers/Gen_Filme.h"

Horror::Horror(const std::string &numeFilm, const std::string &genFilm, const std::string &oraDeVizionare, const std::string &tehnologie, int pegi, int durataFilm, float pretBilet, int anAparitie, const std::string &actorPrincipal) : Film(numeFilm, genFilm, oraDeVizionare, tehnologie, pegi, durataFilm, pretBilet), an_aparitie(anAparitie), actor_principal(actorPrincipal) {}

Horror::~Horror() = default;

Comedie::Comedie(const std::string &numeFilm, const std::string &genFilm, const std::string &oraDeVizionare, const std::string &tehnologie, int pegi, int durataFilm, float pretBilet, int anAparitie, const std::string &actorPrincipal) : Film(numeFilm, genFilm, oraDeVizionare, tehnologie, pegi, durataFilm, pretBilet), an_aparitie(anAparitie), actor_principal(actorPrincipal) {}

Comedie::~Comedie() = default;

Actiune::Actiune(const std::string &numeFilm, const std::string &genFilm, const std::string &oraDeVizionare, const std::string &tehnologie, int pegi, int durataFilm, float pretBilet, int anAparitie, const std::string &actorPrincipal) : Film(numeFilm, genFilm, oraDeVizionare, tehnologie, pegi, durataFilm, pretBilet), an_aparitie(anAparitie), actor_principal(actorPrincipal) {}

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
    Film::afisare(os);
}

void Comedie::afisare(std::ostream &os) const {
    Film::afisare(os);
}

void Actiune::afisare(std::ostream &os) const {
    Film::afisare(os);
}