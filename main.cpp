//
// Created by Radu on 22.10.2021.
//

/// PROIECT OOP - tema 1
/// Nume student : Codreanu Radu Stefan
/// Nume profesor de laborator : Miculta Marius



#include<iostream>
#include<vector>
#include<string>
///using namespace std;


class SEDII_CINEMA{
private:
    std::string adresa;
    std::string program;
public:
    SEDII_CINEMA(const std::string &adresa, const std::string &program) : adresa(adresa), program(program) {}  // Constructor initializare cu parametrii

    friend std::ostream &operator<<(std::ostream &os, const SEDII_CINEMA &cinema) {         // Operator <<
        os << "adresa: " << cinema.adresa << " program: " << cinema.program << std::endl;
        return os;
    }
};

class CINEMA{
private:
    std::string nume_cinema;
    std::string site_web;
    std::string nr_telefon;
    std::vector<SEDII_CINEMA> SEDII;
public:
    void adauga_sediu(SEDII_CINEMA sediu){
        SEDII.push_back(sediu);
    }

    CINEMA(const std::string &numeCinema, const std::string &siteWeb, const std::string &nrTelefon, const std::vector<SEDII_CINEMA> &sedii) : nume_cinema(numeCinema), site_web(siteWeb), nr_telefon(nrTelefon), SEDII(sedii) {}


    CINEMA(const CINEMA &copie){
        this->nume_cinema=copie.nume_cinema;
        this->site_web=copie.site_web;
        this->nr_telefon=copie.nr_telefon;
        for(const auto & SEDII_CINEMA : copie.SEDII){
            this->SEDII.push_back(SEDII_CINEMA);
        }
    }

    CINEMA& operator=(const CINEMA& copie){
        if(this != &copie){
            this->nume_cinema=copie.nume_cinema;
            this->site_web=copie.site_web;
            this->nr_telefon=copie.nr_telefon;
            for(const auto & SEDII_CINEMA: copie.SEDII){
                this->SEDII.push_back(SEDII_CINEMA);
            }}
        return *this;
    }

    ~CINEMA(){
        std::cout<<"Destructor";
    }

    friend std::ostream &operator<<(std::ostream &os, const CINEMA &cinema) {
        os << "nume_cinema: " << cinema.nume_cinema << " site_web: " << cinema.site_web << " nr_telefon: " << cinema.nr_telefon << " SEDII_CINEMA: " << std::endl;
        for(const auto & CINEMA : cinema.SEDII)
            os << CINEMA << std::endl;
        return os;
    }

};

class FILME{
private:
    std::string nume_film;
    std::string gen_film;
    std::string ora_de_vizionare;
    std::string tecnologie;
    int durata_film;
    float pret_bilet;

public:
    FILME(const std::string &numeFilm, const std::string &genFilm, const std::string &oraDeVizionare,const std::string &tecnologie, int durataFilm, float pretBilet) : nume_film(numeFilm), gen_film(genFilm), ora_de_vizionare(oraDeVizionare), tecnologie(tecnologie), durata_film(durataFilm), pret_bilet(pretBilet) {}

    friend std::ostream &operator<<(std::ostream &os, const FILME &filme) {
        os << "nume_film: " << filme.nume_film << " gen_film: " << filme.gen_film << " ora_de_vizionare: "<< filme.ora_de_vizionare << " tecnologie: " << filme.tecnologie << " durata_film: " << filme.durata_film<< " pret_bilet: " << filme.pret_bilet << std::endl;

        return os;
    }

};

class REZERVARI {
private:
    std::string nume_client;
    std::string nume_film;
    int numar_locuri;
    int locuri_ocupate;
    int varsta;
    std::vector <FILME> movie;
public:
    void adauga_film(FILME film){
        movie.push_back(film);}

    REZERVARI(const std::string &numeClient, const std::string &numeFilm, int numarLocuri, int locuriOcupate,int varsta, const std::vector<FILME> &movie) : nume_client(numeClient), nume_film(numeFilm), numar_locuri(numarLocuri), locuri_ocupate(locuriOcupate), varsta(varsta), movie(movie) {}



    friend std::ostream &operator<<(std::ostream &os, const REZERVARI &rezervari) {
        os << "nume_client: " << rezervari.nume_client << " nume_film: " << rezervari.nume_film << " numar_locuri: " << rezervari.numar_locuri << " locuri_ocupate: " << rezervari.locuri_ocupate << " varsta " << rezervari.varsta << std::endl;
        for(const auto & FILME : rezervari.movie)
            os << FILME << std::endl;

        return os;
    }



};

int main()
{
    SEDII_CINEMA b1{"Str.Radu Popescu", " Duminica este inchis"};
    SEDII_CINEMA b2("Str.Oilor", " Program Non-stop");
    SEDII_CINEMA b3("Str.Gica Popescu", " Vinerea este inchis");
    CINEMA a1("Cinemplex", "www.cineplex.ro","0721319092",{});
    a1.adauga_sediu(b1);
    FILME c1("Halloween", "Horror", "22:00", "2D", 140, 19.50);
    REZERVARI d1("Laura", "Halloween", 100, 10, 20, {});
    d1.adauga_film(c1);
}