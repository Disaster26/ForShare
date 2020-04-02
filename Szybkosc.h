#ifndef SZYBKOSC_H_INCLUDED
#define SZYBKOSC_H_INCLUDED
#include <string>
class Szybkosc
{
public:
    std::string b=""; //I tu te¿
    Szybkosc();
    ~Szybkosc();
    Szybkosc(const Szybkosc &t) : b(t.b) {}
    Szybkosc& operator = (const Szybkosc &t);
};


#endif // SZYBKOSC_H_INCLUDED
