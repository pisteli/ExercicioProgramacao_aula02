#ifndef TRIANGULO_HPP
#define TRIANGULO_HPP

#include <iostream>
#include "Formas2D.hpp"

using namespace std;

class Triangulo: public Formas2D
{
    public:
        Triangulo();
        float area();
        float perimetro();
        friend ostream& operator<<(ostream& os, Triangulo &t);
        virtual ~Triangulo();
};

#endif // TRIANGULO_HPP
