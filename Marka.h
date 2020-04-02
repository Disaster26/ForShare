#ifndef MARKA_H_INCLUDED
#define MARKA_H_INCLUDED
#include <string>


class Marka
{
public:
    std::string a = ""; //Definicja jego jedynej sk³adowej
    Marka();
    ~Marka();
    Marka(const Marka &t) : a(t.a) {}
    Marka& operator = (const Marka &t);
};

#endif // MARKA_H_INCLUDED
