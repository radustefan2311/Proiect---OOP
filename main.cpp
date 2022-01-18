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
#include "headers/Meniu.h"

///using namespace std;


int main()
{
    cinema_builder cinema_build;
    Cinema a1 = cinema_build.nume_cinema("Cinema City").site_web("www.cinemacity.ro").nr_telefon("0724567972").Sedii({}).build();
    Cinema a2 = cinema_build.nume_cinema("Cineplex").site_web("www.cineplex.ro").nr_telefon("0757351857").Sedii({}).build();
    Cinema a3 = cinema_build.nume_cinema("LineCinema").site_web("www.linecinema.com").nr_telefon("04373214").Sedii({}).build();
    Cinema a4 = cinema_build.nume_cinema("CinemaIndependenta").site_web("www.cinemaindependenta.ro").nr_telefon("032131232").Sedii({}).build();
    Cinema a5 = cinema_build.nume_cinema("CoreCinema").site_web("www.corecinema.com").nr_telefon("032131231").Sedii({}).build();

    Cinema a6; ///constructor default de initializare.

    /// Verificam constructorul de copiere explicit.

    Cinema a7 = a5;
    a6 = a3;


    SediuCinema b1("Bucuresti","Vineri este inchis",{},{});
    SediuCinema b2("Cluj-Napoca","Duminica este inchis",{},{});
    SediuCinema b3("Constanta","Deschis doar in timpul saptamanii",{},{});
    SediuCinema b4("Targoviste", "Deschis doar in weekend",{},{});
    SediuCinema b5("Oradea","Deschis pana la ora 18:00",{},{});
    SediuCinema b6("Iasi","Deschis de luni pana miercuri",{},{});
    SediuCinema b7("Timisoara","Deschis Luni - Vineri",{},{});

    a1.adauga_sediu(b1);
    a2.adauga_sediu(b2);
    a3.adauga_sediu(b3);
    a4.adauga_sediu(b5);
    a5.adauga_sediu(b7);
    a5.adauga_sediu(b4);

    ///Verificare operatorul << :

    std::cout << a1 << "\n";
    std::cout<<"-----------------------------------------"<<"\n";
    std::cout << a2 << "\n";
    std::cout<<"-----------------------------------------"<<"\n";
    std::cout << a3 << "\n";
    std::cout<<"-----------------------------------------"<<"\n";
    std::cout << a4 << "\n";
    std::cout<<"-----------------------------------------"<<"\n";
    std::cout << a5 << "\n";
    std::cout<<"-----------------------------------------"<<"\n";
    std::cout << a6 << "\n";
    std::cout<<"-----------------------------------------"<<"\n";
    std::cout << a7 << "\n";

    std::cout<<"-----------------------------------------"<<"\n";


    Horror h1("Halloween","Horror","22:30","2D",18,120,22.50,2,"Slasher");
    Horror h2("Insidious","Horror","21:20","3D",18,220,29.50,3,"Terror");
    Horror h3("Blair Witch","Horror","23:50","2D",18,180,22.50,1,"Found Footage");

    Comedie f1("Home-Alone","Comedie","14:30","2D",8,127,19.30,"Body Humor");
    Comedie f2("The Dictator","Comedie","16:20","2D",18,150,22.30,"Dark Humor");
    Comedie f3("Free Guy","Comedie","20:00","3D",13,190,27.30,"Observational Humor");

    Actiune j1("Spider-Man", "Action", "17:30", "3D IMAX", 13, 180, 29.50, 1000000,"Mark Lee",10);
    Actiune j2("Transporter", "Action", "20:30", "3D", 13, 140, 29.50, 500000,"Kurt Huss",5);
    Actiune j3("John-Wick", "Action", "22:10", "2D", 16, 165, 22.50, 20000,"Keanu Kirk",0);


    b1.adauga_film(h1);
    b1.adauga_film(f1);
    b2.adauga_film(f3);
    b3.adauga_film(j1);
    b4.adauga_film(j2);
    b5.adauga_film(h3);
    b6.adauga_film(f2);
    b7.adauga_film(f3);
    b7.adauga_film(j3);

    std::cout << b1 << "\n";
    std::cout<<"-----------------------------------------"<<"\n";
    std::cout << b5 << "\n";
    std::cout<<"-----------------------------------------"<<"\n";
    std::cout << b7 << "\n";
    std::cout<<"-----------------------------------------"<<"\n";
    std::cout << b6 << "\n";
    std::cout<<"-----------------------------------------"<<"\n";
    std::cout << b3 << "\n";



    std::cout<<"-----------------------------------------"<<"\n";



    Client<int> e1("Andrei Serban","Andrei123","and231",18);
    Client<int> e2("Maria Teodora","mariath123","mar212", 14);
    Client<int> e3("Radu Stefan","radu2311","rad2311", 22);
    Client<int> e4("Luca Dragusin","luc534","luc4312", 11);
    Client<int> e5("Paul Titu","paul1","dsad232", 8);
    Client<int> e6("Cristina Teodora","crisssss","32133", 30);
    Client<int> e7("Marina Tudorache","marinii23","trov321", 26);
    Client<unsigned int> e8("Georgescu Marian","mar321","204343",45);

    Rezervare d1(100,{});
    Rezervare d2(200,{});
    Rezervare d3(150,{});
    Rezervare d4(210,{});
    Rezervare d5(90,{});
    Rezervare d6(330,{});

    d1.adauga_client(e1);
    d2.adauga_client(e2);
    d3.adauga_client(e3);
    d4.adauga_client(e4);
    d5.adauga_client(e7);
    d6.adauga_client(e5);
    d6.adauga_client(e6);

    b1.adauga_rezervare(d1);
    b2.adauga_rezervare(d2);

    h1.restrictie_varsta( e1);
    std::cout<<"-----------------------------------------"<<"\n";

    try{
            Client<int> e3("Radu Stefan", "Radu2311", "rad231", 17);
            h1.restrictie_varsta(e3);
    }
    catch(eroare_film &eroare) {
        std::cout << eroare.what() << std::endl;
    }

    auto CinemaTown = Meniu::get_menu();
    CinemaTown->adauga_cinema(a1);
    CinemaTown->adauga_cinema(a2);
    CinemaTown->adauga_sediu(b1);
    CinemaTown->adauga_sediu(b2);
    CinemaTown->adauga_client(e1);
    CinemaTown->adauga_client(e2);

    std::cout << *CinemaTown << "\n";
    std::cout << e4;

    return 0;



}