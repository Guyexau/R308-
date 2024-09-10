#include "cplx.h"
#include <iostream>
using namespace std;
// Constructeur de la classe complexe par défaut
Complexe::Complexe() { 
    cout<<"nombre complexe a 0 "<<endl;
    partie_reelle = 0;
    partie_imaginaire = 0;
}

// Constructeur de la classe complexe autres
Complexe::Complexe(float reelle, float imaginaire) { 
    
    partie_reelle = reelle;
    partie_imaginaire = imaginaire;
}

// destructeur,de la classe complexe
Complexe::~Complexe() { 
    printf("Destruction du nombre complexe\n");
}

// Méthode pour retourner la partie réelle
float Complexe::P_Reelle() { 
    return partie_reelle;
}

// Méthode pour retourner la partie imaginaire
float Complexe::P_Imaginaire() { 
    return partie_imaginaire;
}

// Méthode pour afficher la forme algébrique
void Complexe::forme_algebrique() { 
    cout << "Forme algebrique : " << partie_reelle << " + j " << partie_imaginaire << endl;
}