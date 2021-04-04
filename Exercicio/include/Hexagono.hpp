#ifndef HEXAGONO_HPP
#define HEXAGONO_HPP

#include <iostream>
#include "Formas2D.hpp"

using namespace std;

class Hexagono: public Formas2D
{
    public:
        Hexagono();
        float area();
        float perimetro();
        friend ostream& operator<<(ostream& os, Hexagono &h);
        virtual ~Hexagono();
};

#endif // HEXAGONO_HPP
