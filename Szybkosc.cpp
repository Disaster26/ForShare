#include "Szybkosc.h"

using namespace std;

Szybkosc::Szybkosc(){
    #ifdef _DEBUG
    cout<<"Wywo�anie konstruktora klasy szybkosc"<<endl;
    #endif
}
Szybkosc::~Szybkosc(){
    #ifdef _DEBUG
    cout<<"Wywo�anie destruktora klasy szybkosc"<<endl;
    #endif
}
Szybkosc& Szybkosc::operator = (const Szybkosc &t)
    {
        if( & t != this )
    {
        b = t.b;
    }
        return *this;
    }
