#ifndef SAMOCHOD_H_INCLUDED
#define SAMOCHOD_H_INCLUDED
#include "Marka.h"
#include "Szybkosc.h"
#include <iostream>
#include <string>
#include <sstream>
class Samochod
{
public:
    static int getCounter();
    static void incCounter(); // zwiêksza counter o 1
    Marka podObiekt1;
    double cena=0;
    Szybkosc * podObiekt2 = 0;
    void DodajSamochod(const Samochod &t);
    void WypiszSamochody(); // Samochody w gara¿u;
    Samochod(const Samochod &t): podObiekt1(t.podObiekt1), podObiekt2(t.podObiekt2), cena(t.cena){}
    Samochod& operator = (const Samochod &t);
    friend std::ostream & operator<< (std::ostream &wyjscie, const Samochod &s);
    const std::string & operator[](int idx) const;
    explicit operator int() const;// operator konwersji
    Samochod& operator +(const Samochod &t);
    Samochod& operator !();
    Samochod(); //Deklaracja kontruktora
    ~Samochod(); //Deklaracja destruktora

private:
    static int counter;
    static const int N;
    std::string *samochody = new std::string[N];
    static int index;
};


#endif // SAMOCHOD_H_INCLUDED
