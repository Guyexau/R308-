#include "objet.h"
#include <stdio.h>

// Constructeur de la classe Objet
Objet::Objet() { 
    printf("Construction d'objet\n");
    compteur = 0;
}

// destructeur,de la classe Objet
Objet::~Objet() { 
    printf("Destruction d'objet\n");
}

// Méthode pour incrémenter le compteur
void Objet::Incrementer() { 
    compteur++;
}

// Méthode pour décrémenter le compteur
void Objet::Decrementer() { 
    if (compteur > 0)
    compteur--;
}

// Méthode pour afficher le compteur
void Objet::Afficher() { 
    printf("Compteur = %d\n", compteur);
}