#include <iostream>
#include <string>
using namespace std;
// UML + public -private 
// attrib methods

/*
    class Compte
    {
        //par defaut private
        string nom;
        double solde;
        int numero;
        public:
            ---
            ---
    }
*/
//import (include) Class from header file (Create class in h file)
//instantiation (crée un object)
// getters, setters (avec les methodes)
//static attrib
//Constructeur.
/*#include "header/Compte.h"
int main()
{
    Compte compte1;// Constructeur par defaut (Compte())
    Compte Comp2(10.4, "CC2");
    Compte ComptCopy2(Comp2);
    return 0;
}*/
class Voiture
{
private:
    int id;
    string marque;
    int vitesse;
    int puissance;
public:
    Voiture();
    Voiture(int id, string mq, int v, int p);
    
    int Getid()
    {
        return id;
    }
    int  GetPuissance()
    {
        return puissance;
    }
    int Getvitesse()
    {
        return vitesse;
    };
    string getMarque()
    {
        return marque;
    }

    
    ~Voiture();
};

Voiture::Voiture(int id, string mq, int v, int p):Voiture()
{
    Voiture::id = id;
    marque = mq;
    vitesse = v;
    puissance = p;
}

Voiture::~Voiture()
{}


int main()
{

    return 0;
}