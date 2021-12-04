#ifndef PROIECT___OOP_GEN_FILME_H
#define PROIECT___OOP_GEN_FILME_H

#include "../headers/Film.h"
#include<string>

class Horror: public Film{
protected:
    void afisare(std::ostream &os) const override;
private:
    int an_aparitie;
    std::string actor_principal;
public:
    Horror();
    Horror(const std::string &numeFilm, const std::string &genFilm, const std::string &oraDeVizionare, const std::string &tehnologie, int pegi, int durataFilm, float pretBilet, int anAparitie, const std::string &actorPrincipal);
    ~Horror();
    std::shared_ptr <Film> clone() const override;

};

class Comedie: public Film{
protected:
    void afisare(std::ostream &os) const override;
private:
    int an_aparitie;
    std::string actor_principal;
public:
    Comedie();
    Comedie(const std::string &numeFilm, const std::string &genFilm, const std::string &oraDeVizionare, const std::string &tehnologie, int pegi, int durataFilm, float pretBilet, int anAparitie, const std::string &actorPrincipal);
    ~Comedie();
    std::shared_ptr <Film> clone() const override;
};
class Actiune: public Film{
protected:
    void afisare(std::ostream &os) const override;
private:
    int an_aparitie;
    std::string actor_principal;
public:
    Actiune();
    Actiune(const std::string &numeFilm, const std::string &genFilm, const std::string &oraDeVizionare, const std::string &tehnologie, int pegi, int durataFilm, float pretBilet, int anAparitie, const std::string &actorPrincipal);
    ~Actiune();
    std::shared_ptr <Film> clone() const override;
};




#endif //PROIECT___OOP_GEN_FILME_H
