#pragma once
#include <string>
class Compte
{
    std::string nom;
    double solde;
    static int nbr_compte; //liée a la classe
    void afficherNom();

    public:
        static int nbr_compte; //liée a la classe
        Compte(double s, std::string n); //constructeur
        Compte(); // Also constructeur
        Compte(Compte &obj); //COnstructeur par copie
        double GetSolde();
        void SetSolde(double s);
        ~Compte(); // Destructeur (usually obj are by default deconstructed)



};