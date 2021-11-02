//
// Created by Radu on 22.10.2021.
//

/// PROIECT OOP - tema 1
/// Nume student : Codreanu Radu Stefan
/// Nume profesor de laborator : Micluta Marius

// FISIERE SEPARATE!!! .h / .cpp - pentru fiecare clasa!!

#include<iostream>
#include<vector>
#include<string>
///using namespace std;


class SediuCinema{
private:
    std::string adresa;
    std::string program;
    std::string <Sala> sali_cinema;
    std::vector<Film> filme;
public:
    SediuCinema(const std::string &adresa, const std::string &program) : adresa(adresa), program(program) {}  // Constructor initializare cu parametrii

    friend std::ostream &operator<<(std::ostream &os, const SediuCinema &cinema) {         // Operator <<
        os << "adresa: " << cinema.adresa << " program: " << cinema.program << std::endl;
        return os;
    }
};

class Cinema{
private:
    std::string nume_cinema;
    std::string site_web;
    std::string nr_telefon;
    std::vector<SediuCinema> Sedii;
public:
    void adauga_sediu(SediuCinema sediu){
        Sedii.push_back(sediu);
    }

    Cinema(const std::string &numeCinema, const std::string &siteWeb, const std::string &nrTelefon, const std::vector<SediuCinema> &sedii) : nume_cinema(numeCinema), site_web(siteWeb), nr_telefon(nrTelefon), Sedii(sedii) {}


    Cinema(const Cinema &copie){
        this->nume_cinema=copie.nume_cinema;
        this->site_web=copie.site_web;
        this->nr_telefon=copie.nr_telefon;
        for(const auto & SediuCinema : copie.Sedii){
            this->Sedii.push_back(SediuCinema);
        }
    }

    Cinema& operator=(const Cinema& copie){
        if(this != &copie){

            this->nume_cinema=copie.nume_cinema;
            this->site_web=copie.site_web;
            this->nr_telefon=copie.nr_telefon;
            for(const auto & SediuCinema: copie.Sedii){
                this->Sedii.push_back(SediuCinema);}
        }
        return *this;
    }

    ~Cinema(){
        std::cout<<"Destructor";
    }

    friend std::ostream &operator<<(std::ostream &os, const Cinema &cinema) {
        os << "nume_cinema: " << cinema.nume_cinema << " site_web: " << cinema.site_web << " nr_telefon: " << cinema.nr_telefon << " SediuCinema: " << std::endl;
        for(const auto & SediuCinema : cinema.Sedii)
            os << SediuCinema << std::endl;
        return os;
    }

};

class Film{
private:
    std::string nume_film;
    std::string gen_film;
    std::string ora_de_vizionare;
    std::string tehnologie;
    std::string pegi;
    int durata_film;
    float pret_bilet;
    Sala sala_cinema;
    std::vector<Rezervare> rezervari;

public:
    Film(const std::string &numeFilm, const std::string &genFilm, const std::string &oraDeVizionare, const std::string &tecnologie, int durataFilm, float pretBilet) : nume_film(numeFilm), gen_film(genFilm), ora_de_vizionare(oraDeVizionare), tehnologie(tecnologie), durata_film(durataFilm), pret_bilet(pretBilet) {}

    friend std::ostream &operator<<(std::ostream &os, const Film &film) {
        os << "nume_film: " << film.nume_film << " gen_film: " << film.gen_film << " ora_de_vizionare: " << film.ora_de_vizionare << " tehnologie: " << film.tehnologie << " durata_film: " << film.durata_film << " pret_bilet: " << film.pret_bilet << std::endl;

        return os;
    }

};

class Rezervare {
private:
    int numar_locuri;
    int locuri_ocupate;
    // functie rezervare loc (citeste nr_rand si scaun) -> True/1(ocupat - mesaj ca locul e ocupat) / -> False/0 (loc liber - rezervi - il faci True)
    std::vector<Client> clienti(numar_locuri);
public:
    void adauga_film(Film film){
        movie.push_back(film);}

    Rezervare(const std::string &numeFilm, int numarLocuri, int locuriOcupate, int varsta, const std::vector<Film> &movie) : nume_film(numeFilm), numar_locuri(numarLocuri), locuri_ocupate(locuriOcupate), varsta(varsta), movie(movie) {}



    friend std::ostream &operator<<(std::ostream &os, const Rezervare &rezervare) {
        os << " nume_film: " << rezervare.nume_film << " numar_locuri: " << rezervare.numar_locuri << " locuri_ocupate: " << rezervare.locuri_ocupate << " varsta " << rezervare.varsta << std::endl;
        for(const auto & Film : rezervare.movie)
            os << Film << std::endl;

        return os;
    }



};

class Client{
private:
    std::string nume_client;
    int varsta;
    // detalii client
public:
    void adauga_rezervare(Rezervare rezervari){
        rezervare.push_back(rezervari);
    }

    Client(const std::string &numeClient, const std::vector<Rezervare> &rezervare) : nume_client(numeClient), rezervare(rezervare) {}

    friend std::ostream &operator<<(std::ostream &os, const Client &client) {
        os << "nume_client: " << client.nume_client;
        for(const auto & Rezervare : client.rezervare)
            os << Rezervare << std::endl;

        return os;
    }
};

class Sala {
private:
    int id;
    int nr_locuri;
    int nr_randuri;
    int nr_scaunePerrand
    bool locuri_sala[nr_randuri][nr_scaunePerrand];
}

int main()
{
    SediuCinema b1{"Str.Radu Popescu", " Duminica este inchis"};
    SediuCinema b2("Str.Oilor", " Program Non-stop");
    SediuCinema b3("Str.Gica Popescu", " Vinerea este inchis");
    Cinema a1("Cinemplex", "www.cineplex.ro", "0721319092", {});
    Cinema a2("Cinema City", "www.cinemacity.ro", "0723459867",{});
    a1.adauga_sediu(b1);
    a1.adauga_sediu(b2);
    a2.adauga_sediu(b3);
    Film c1("Halloween", "Horror", "22:00", "2D", 140, 19.50);
    Film c2("Happy", "Comedie", "19:30", "3D", 130, 22.50);
    Rezervare d1( "Halloween", 100, 10, 20, {});
    Rezervare d2( "Happy", 130, 40, 18, {});
    d1.adauga_film(c1);
    d2.adauga_film(c2);
    Client e1("Marian" ,{});
    Client e2("Andreea", {});
    e1.adauga_rezervare(d1);
    e2.adauga_rezervare(d2);

}

