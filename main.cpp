//
// Created by Radu on 22.10.2021.
//

/// PROIECT OOP - tema 1/// Nume student : Codreanu Radu Stefan
/// Nume profesor de laborator : Micluta Marius



#include<iostream>
#include<vector>
#include<string>
#include "headers/Client.h"
#include "headers/SediuCinema.h"
#include "headers/Cinema.h"
#include "headers/Film.h"
#include "headers/Rezervare.h"
#include "headers/Erori_Film.h"
#include "headers/Gen_Filme.h"

///using namespace std;


int main()
{

    Cinema a1("Cinema City", "www.cinemacity.ro", " 0724567972", {});
    Cinema a2("Cineplex", "www.cineplex.ro", "0757351857", {});
    Cinema a3("LineCinema","www.linecinema.com","04373214",{});
    Cinema a4("CinemaIndependenta","www.cinemaindependenta.ro","032131232",{});
    Cinema a5;
    Cinema a6;

    /// Verificam constructorul de copiere explicit.

    a5 = a3;
    a6 = a5;

    SediuCinema b1("Bucuresti","Vineri este inchis",{},{});
    SediuCinema b2("Cluj-Napoca","Duminica este inchis",{},{});
    SediuCinema b3("Constanta","Deschis doar in timpul saptamanii",{},{});
    SediuCinema b4("Targoviste", "Deschis doar in weekend",{},{});

    a1.adauga_sediu(b1);
    a2.adauga_sediu(b2);

    std::cout<<a1;

    Horror c1("Halloween","Horror","22:30","2D",18,120,22.50,1967,"Lee Curtis" );
    Actiune c2("Spider-Man", "Action", "17:30", "3D", 13, 180, 25.30, 2002,"Tobey Maguire");

    std::cout<<c1;

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

    try{
            Client e3("Radu Stefan", "Radu2311", "rad231", 17);
            c1.restrictie_varsta(e3);
    }
    catch(eroare_film &eroare) {
        std::cout << eroare.what() << std::endl;
    }



    return 0;



}