#include <iostream>
#include <string>
#include <algorithm>
#include "bici.h"

using namespace std;

int main (){
    string ID;
    int Uso, Dis;
    Bici a;
    a.setID("Shimano");
    a.setUso(3);
    a.setDis(45);
    a.mostrar ();
    Bici m ("Shimano", 3, 45);
    if (a.repite(m))
    {
        cout << "\nEste modelo ya esta reistrado";
    }
    else
    {
        cout << "\nEste modelo es nuevo";
    }
    Bici b ("\nApache", 16, 132);
    b.mostrar();

    if (a.repite(b))
    {
        cout << "\nEste modelo ya esta registrado";
    }
    else
    {
        cout << "\nEste modelo es nuevo";
    }
    system ("Alto");
    return 0;
    
    
    
}