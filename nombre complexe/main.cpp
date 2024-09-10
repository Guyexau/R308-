#include "cplx.h"
#include <iostream>
using namespace std;
// pour compiler: g++ main.cpp cplx.cpp -o complexe
// pour lancer: compteur
int main() {
    Complexe c1;

    Complexe c2(3, 4);
    c1.forme_algebrique();
    c2.forme_algebrique();

    cout << "Partie reelle de c1 : " << c1.P_Reelle() << endl;
    cout << "Partie imaginaire de c1 : " << c1.P_Imaginaire() << endl;

    cout << "Partie reelle de c2 : " << c2.P_Reelle() << endl;
    cout << "Partie imaginaire de c2 : " << c2.P_Imaginaire() << endl;
    
    //system("pause");
}
