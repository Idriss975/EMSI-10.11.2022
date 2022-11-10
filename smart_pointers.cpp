#include <iostream>
#include <string>
using namespace std;

//auto a(int a, int b = 5)-> int;
// stack heap => pointer(stack)
//instead of malloc use new Type
/*
    int *p new int; // heap allocation, p is located in the stack
    *p = 5; // 5 is in the heap
    delete p; // free 5 from memory !!p is still in the stack!!

    //EX:
    p= new T[300]; array of ints allocated in heap
    cout << p[0]; //read 0 index
    for(int *i = p; i < i+300; i++)
        cin >> *i;
    for (int i = 0; i < 300 ; i++ )
        cin >> i[i];

    delete[] p; //suprimmer tout les 300 ints
*/



int main()
{
    /*
        Ecrire un prog allouant dynamiquement un emplacement pour un tableau d'ints, dont la taille est fournie en donnée. Utiliser ce tab
        pour placer des nbrs int lus egalement en données. Créer ensuite dynamiquement un nouv tab destiné a recevoir les carrés des nbrs
        contenus dans le premier. Supprimer le 1st tab, afficher les vals du 2nd et supprimer le tout. On ne cherchera pas a traiter un eventuel probleme de manque de memoire.
    */

    int taille;
    cout << "Tapez la taille des Tabs.\n> ";
    cin >> taille;
    int *Tab1 = new int[taille];
    
    int *Tab2 = new int[taille];

    cout << "Remplir Tab1\n> ";
    for (int *i = Tab1; i < Tab1 + taille; i++)
        cin >> *i;

    for (int i = 0; i < taille; i++)
        Tab2[i] = Tab1[i] * Tab1[i];

    delete[] Tab1;
    Tab1 = NULL; // avoid memory leak

    cout << "La valeur de Tab2:" << endl;
    for (int* i = Tab2; i < Tab2 + taille; i++)
        cout << "-> " << *i;
    
    delete[] Tab2;
    return 0;
}