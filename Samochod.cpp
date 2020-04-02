#include <sstream>
#include <iostream>
#include "Samochod.h"
using namespace std;

int Samochod::counter=0;
const int Samochod::N=30;
int Samochod::index=-1;
Samochod::Samochod() //Kontruktor
{
    incCounter();
    podObiekt2 = new Szybkosc; //Dynamiczne zaalokowanie dynamicznego obiektu
    #ifdef _DEBUG
    cout<<"Wywo³anie konstruktora klasy samochod"<<endl;
    #endif

}
void Samochod::DodajSamochod(const Samochod &t){
    index++;
    if(index<=30){
    std::stringstream ss;
    ss << t.podObiekt1.a << "," << t.podObiekt2->b <<","<< cena;
    samochody[index]=ss.str();}
    else{
        cout<<"Brak wystarczajaco miejsca w garazu"<<endl;
    }
}
Samochod & Samochod:: operator !()
    {
        std::stringstream ss;
        ss<<"nie "<<podObiekt2->b;
        podObiekt2->b = ss.str();
        return *this;
    }

Samochod& Samochod::operator +(const Samochod &t)
    {
        cena = cena+t.cena;
        return *this;
    }
const string & Samochod::operator[](int idx) const
    {
        if(idx >= 0 && idx <= index)
            return samochody[idx];
    }
ostream& operator<< (ostream &wyjscie, const Samochod &s)
    {
        return wyjscie << "Marka: " <<s.podObiekt1.a << ", szybkosc: " <<s.podObiekt2->b<<", koszt: "<<s.cena<<endl;
    }
Samochod& Samochod::operator = (const Samochod &t)
    {
        if( & t != this )
    {
         podObiekt1 = t.podObiekt1;
         podObiekt2 = t.podObiekt2;
         cena = t.cena;
    }
        return *this;
    }
Samochod::operator int() const { return (int)cena; }
void Samochod::WypiszSamochody(){
    if(index<0||index>30) cout<<"Brak samochodow lub przekroczyles zakres przewidywanych samochodow"<<endl;
    else{
        cout<<"Samochody w garazu w ktorym sie znajduje:"<<endl;
    for(int i=0;i<=index;i++){
        cout<< samochody[i]<<endl;
    }}
}
int Samochod::getCounter(){
    return counter;
}
void Samochod::incCounter(){
    counter+=1;

}
Samochod::~Samochod() //Destruktor
{
    #ifdef _DEBUG
    cout<<"Wywo³anie destruktora klasy samochod"<<endl;
    #endif
    delete podObiekt2; //Usuniêcie dynamicznego obiektu
}

