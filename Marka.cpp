#include "Marka.h"

using namespace std;

Marka::Marka(){
    #ifdef _DEBUG
    cout<<"Wywo³anie konstruktora klasy marka"<<endl;
    #endif

}
Marka::~Marka(){
    #ifdef _DEBUG
    cout<<"Wywo³anie destruktora klasy marka"<<endl;
    #endif
}
Marka& Marka::operator = (const Marka &t)
    {
        if( & t != this )
    {
        a = t.a;
    }
        return *this;
    }
