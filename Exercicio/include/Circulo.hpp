#ifndef CIRCULO_HPP
#define CIRCULO_HPP

#include <iostream>
#include "Formas2D.hpp"

using namespace std;

class Circulo: public Formas2D
{
    public:
        Circulo();
        float area();
        float perimetro();
        friend ostream& operator<<(ostream& os, Circulo &c);
        virtual ~Circulo();
};

#endif // CIRCULO_HPP
