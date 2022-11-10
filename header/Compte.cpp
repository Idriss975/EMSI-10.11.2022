#include "Compte.h"
#include <iostream>
Compte::nbr_compte = 0; // TODO: How static vars work in cpp
void Compte::afficherNom() { //Implementation
    std::cout << "Boob";
}

double Compte::GetSolde()
{
    return solde;
}

void Compte::SetSolde(double s)
{
    solde = s;
}
Compte::Compte(double d, std::string s)
{
    solde = d;
    nom = s;
    nbr_compte++;
}
Compte::Compte()
{
    solde = 0;
    nom = "";
    nbr_compte++;
}
Compte::Compte(Compte &obj):Compte() // runs compte() inside this meth
{
    nom = obj.nom;
    solde = obj.solde;
}
Compte::~Compte()
{
   nbr_compte--; 
}