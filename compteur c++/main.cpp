#include "objet.h"
#include <stdlib.h>
// pour compiler: g++ main.cpp objet.cpp -o compteur
// pour lancer: compteur
int main() {
    Objet obj1;
    for (int i = 0; i < 30; i++) {
        obj1.Incrementer();
        obj1.Afficher();
    }
    
    //system("pause");
}
