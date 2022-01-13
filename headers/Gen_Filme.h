#ifndef PROIECT___OOP_GEN_FILME_H
#define PROIECT___OOP_GEN_FILME_H

#include "../headers/Film.h"
#include<string>


class Horror: public Film{
protected:
    void afisare(std::ostream &os) const override;
    void atentionare_spectator() const
    {
        std::cout <<"Scene cu puternic impact emotional ! Persoanele care stiu ca sufera de boli cardiace sau psihice sunt rugate sa paraseasca sala !"<< std::endl;
        if (graphic_scenes == 1)
            {
                std::cout << "Persoanele cu varsta sub 15 ani nu au acces la acest film ! " << graphic_scenes << std::endl;
            }
        else if (graphic_scenes == 2)
            {
                std::cout <<"Acest film este disponibil doar persoanelor cu varsta peste 18 ani !" << graphic_scenes << std::endl;
            }
        else std::cout << "Filmul este dispnibil doar in anumite intervale orare si doar pentru persoanele cu varsta peste 22 de ani!" << graphic_scenes << std::endl;
    }
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
    void categorie_varsta() const
    {
        if (tip_umor == "Dark Humor") {


            std::cout << "Atenie ! Filmele de comedie care au la inceputul rularii lor acest emoticon, prezinta un limbaj licentios si scene cu caracter ofensator !" << std::endl;

            std::cout << "                          oooo$$$$$$$$$$$$oooo      \n";
            std::cout << "                      oo$$$$$$$$$$$$$$$$$$$$$$$$o      \n";
            std::cout << "                   oo$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$o         o$   $$ o$      \n";
            std::cout << "   o $ oo        o$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$o       $$ $$ $$o$      \n";
            std::cout << "oo $ $ $$      o$$$$$$$$$    $$$$$$$$$$$$$    $$$$$$$$$o       $$$o$$o$      \n";
            std::cout << "$$$$$$$o$     o$$$$$$$$$      $$$$$$$$$$$      $$$$$$$$$$o    $$$$$$$$      \n";
            std::cout << "  $$$$$$$    $$$$$$$$$$$      $$$$$$$$$$$      $$$$$$$$$$$$$$$$$$$$$$$      \n";
            std::cout << "  $$$$$$$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$    $$$$$$$$$$$$$$  $$$$$$      \n";
            std::cout << "   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     $$$$      \n";
            std::cout << "    $$$   o$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     $$$$o      \n";
            std::cout << "   o$$$   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$       $$$o      \n";
            std::cout << "   $$$    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ $$$$$$$ooooo$$$$o      \n";
            std::cout << "  o$$$oooo$$$$$  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$   o$$$$$$$$$$$$$$$$$      \n";
            std::cout << "  $$$$$$$$$$$$$   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     $$$$$$$$$$$$      \n";
            std::cout << "           $$$$     $$$$$$$$$$$$$$$$$$$$$$$$$$$$       o$$$      \n";
            std::cout << "             $$$o     $$$$$$$$$$$$$$$$$$$$$$$$$         $$$      \n";
            std::cout << "              $$$o          $$$$$$$$$$$$$$$           o$$$      \n";
            std::cout << "               $$$$o                 oo             o$$$$      \n";
            std::cout << "                $$$$$o      o$$$$$$o$$$$$o        o$$$$      \n";
            std::cout << "                  $$$$$$oo     $$$$$$o$$$$$o   o$$$$$$        \n";
            std::cout << "                     $$$$$$$oooo  $$$$o$$$$$$$$$$$$      \n";
            std::cout << "                        $$$$$$$$$oo $$$$$$$$$$             \n";
            std::cout << "                                $$$$$$$$$$$$$$$              \n";
            std::cout << "                                    $$$$$$$$$$$$             \n";
            std::cout << "                                     $$$$$$$$$$$            \n";
            std::cout << "                                      $$$$$$$$\n";     /// pentru artwork verificati readme.md (fig1)
        }
        else { std::cout << "Filmele de comedie care au la inceputul rularii lor acest emoticon, sunt dedicate pentru toate varstele!" << std::endl;

            std::cout<< "                    xxxx                  xxxx             \n";
            std::cout<< "                 x        x            x        x             \n";
            std::cout<< "                x           x         x           x             \n";
            std::cout<< "                     xx                    xx             \n";
            std::cout<< "                   x    x                x    x             \n";
            std::cout<< "                  x      x              x      x             \n";
            std::cout<< "                  x      x              x      x             \n";
            std::cout<< "                  x    xxx              x    xxx             \n";
            std::cout<< "                  x   xxxx              x   xxxx             \n";
            std::cout<< "                   x xxxx                x xxxx             \n";
            std::cout<< "                    xxx         xxx       xxx             \n";
            std::cout<< "                               x   x             \n";
            std::cout<< "                               x   x             \n";
            std::cout<< "                xx              xxx             xx             \n";
            std::cout<< "              xx                                  xx             \n";
            std::cout<< "            xxx                                    xxx             \n";
            std::cout<< "               xx                                xx             \n";
            std::cout<< "                 xx                             xx             \n";
            std::cout<< "                   xxxx                      xxxx             \n";
            std::cout<< "                        xxx               xxx             \n";
            std::cout<< "                            xxxx     xxx             \n";     /// pentru artwork verificati readme.md(fig2)


        }

    }
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
    void ochelari_3D() const
    {
        if ((tehnologie == "3D IMAX" )|| (tehnologie == "3D")) {

            std::cout << "Pentru a viziona filmul aveti nevoie de a inchiria o pereche de ochelari 3D-IMAX! " << std::endl;
            std::cout << "Pretul ochelarilor este de " << pret_ochelari << std::endl;
        }

        else {std::cout << "Filmul este 2D,nu aveti nevoie de o pereche de ochelari" << std::endl;}


    }
private:
    int buget_cgi; /// bugetul alocat pentru cgi (efecte speciale).
    std::string stunt_actor;
    int pret_ochelari ;
public:
    Actiune();

    Actiune(const std::string &numeFilm, const std::string &genFilm, const std::string &oraDeVizionare, const std::string &tehnologie, int pegi, int durataFilm, float pretBilet, int bugetCgi, const std::string &stuntActor, int pretOchelari);

    ~Actiune();
    std::shared_ptr <Film> clone() const override;
};


#endif //PROIECT___OOP_GEN_FILME_H
