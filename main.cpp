//
// Created by Radu on 22.10.2021.
//

/// PROIECT OOP - tema 1
/// Nume student : Codreanu Radu Stefan
/// Nume profesor de laborator : Micluta Marius



#include<iostream>
#include<vector>
#include<string>
#include "headers/Client.h"
#include "headers/SediuCinema.h"
#include "headers/Cinema.h"
#include "headers/Film.h"
#include "headers/Rezervare.h"
#include "headers/Sala.h"

///using namespace std;


int main()
{

    Cinema a1("Cinema City", "www.cinemacity.ro", " 0724567972", {});
    Cinema a2("Cineplex", "www.cineplex.ro", "0757351857", {});

    SediuCinema b1("Bucuresti","Vineri este inchis",{},{});
    SediuCinema b2("Cluj-Napoca","Duminica este inchis",{},{});

    a1.adauga_sediu(b1);
    a2.adauga_sediu(b2);

    Film c1("Halloween","Horror","22:30","2D","18+",120,22.10 );
    Film c2("Spider-Man", "Action", "17:30", "3D", "13+", 180, 25.30);

    b1.adauga_film(c1);
    b2.adauga_film(c2);

    Client e1("Andrei Serban","Andrei123","and231",18);
    Client e2("Maria Teodora","mariath123","mar212", 14);

    Rezervare d1(100,{});
    Rezervare d2(200,{});

    d1.adauga_client(e1);
    d2.adauga_client(e2);

    b1.adauga_rezervare(d1);
    b2.adauga_rezervare(d2);

    c1.restrictie_varsta( e1);
    d1.functie_login("Andrei Serban");

    return 0;


}

