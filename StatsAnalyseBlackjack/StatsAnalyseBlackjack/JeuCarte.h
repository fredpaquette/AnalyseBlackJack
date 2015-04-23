#pragma once
#include <vector>
#include "Carte.h"
using namespace std;

class JeuCarte
{
public:  
   JeuCarte();
   ~JeuCarte();
   Carte PigerCarte();
   void Reinitialiser();
   void Melanger();
   int nbCartesSorte(int valeur);

private:
   vector<Carte> Paquet_;

};

