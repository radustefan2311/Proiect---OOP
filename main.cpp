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


    Client e1("Andrei Serban","Andrei123","and231",18);







    //Film c1("Halloween","Horror","22:30","2D","18+",130,22.50,);


    e1.getVarsta();


}

