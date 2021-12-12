
#include "../headers/Erori_Film.h"
#include <string>


eroare_film::eroare_film(const std::string &arg) : runtime_error("Eroare film: " + arg) {}

eroare_varsta_minima::eroare_varsta_minima() : eroare_film("Nu puteti viziona acest film, deaorece nu indepliniti conditiile varstei !") {}

eroare_durata::eroare_durata() : eroare_film("Durata trebuie sa fie minim de 60 minute !") {}

eroare_pret::eroare_pret() : eroare_film("Preturile sunt cuprinse intre 15 si 100 de lei !") {}
