#include <iostream>
#include "Samochod.h"
using namespace std;

void Debug(){

Samochod fk;
fk.podObiekt1.a;
fk.podObiekt2->b;
fk.~Samochod();

Samochod fk2;
fk2.~Samochod();
}

int main()
{
    #ifdef _DEBUG
    Debug();
    #endif
    Samochod fk; //Deklaracja klasy g³ównej
    Samochod fk2;
    fk.cena=5000.45;
    fk.podObiekt1.a="BMW";
    fk.podObiekt2->b="umiarkowana";
    //cin >> fk.podObiekt1.a >> fk.podObiekt2->b;
    //cout << fk.podObiekt1.a<< ' ' << fk.podObiekt2->b;
    cout << fk.getCounter()<<endl;
    Samochod fk3(fk);
    fk2 = fk3;
    cout << fk3.podObiekt1.a <<endl;
    cout << fk2.podObiekt1.a <<endl;
    cout<<fk;
    fk2.DodajSamochod(fk);
    fk2.DodajSamochod(fk3);
    fk2.WypiszSamochody();
    //fk2[0];
    cout<<fk2[0]<<endl; // operator indeksowy
    cout<<(int)fk<<endl;
    fk3 = fk+fk2;
    cout<<fk3;
    fk3 =!fk3;
    cout<<fk3;
    return 0;
}
