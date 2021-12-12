#ifndef PROIECT___OOP_GEN_FILME_H
#define PROIECT___OOP_GEN_FILME_H

#include "../headers/Film.h"
#include<string>

class Horror: public Film{
protected:
    void afisare(std::ostream &os) const override;
private:
    int graphic_scenes; /// numerotate de la 1 la 3 in functie de niveului violentei ( 1 - none , 2 - medium, 3 - explicit )
    std::string horror_genre; /// de exemplu gore/slasher/etc.
public:
    Horror();
    Horror(const std::string &numeFilm, const std::string &genFilm, const std::string &oraDeVizionare, const std::string &tehnologie, int pegi, int durataFilm, float pretBilet, int graphicScenes, const std::string &horrorGenre);
    ~Horror();
    std::shared_ptr <Film> clone() const override;

};

class Comedie: public Film{
protected:
    void afisare(std::ostream &os) const override;
private:
    std::string tip_umor; /// de exemplu umor negru/fizic/etc.
public:
    Comedie();
    Comedie(const std::string &numeFilm, const std::string &genFilm, const std::string &oraDeVizionare, const std::string &tehnologie, int pegi, int durataFilm, float pretBilet, const std::string &tipUmor);
    ~Comedie();
    std::shared_ptr <Film> clone() const override;
};
class Actiune: public Film{
protected:
    void afisare(std::ostream &os) const override;
private:
    int buget_cgi; /// bugetul alocat pentru cgi (efecte speciale).
    std::string stunt_actor;
public:
    Actiune();
    Actiune(const std::string &numeFilm, const std::string &genFilm, const std::string &oraDeVizionare, const std::string &tehnologie, int pegi, int durataFilm, float pretBilet, int bugetCgi, const std::string &stuntActor);
    ~Actiune();
    std::shared_ptr <Film> clone() const override;
};


#endif //PROIECT___OOP_GEN_FILME_H
