#ifndef RETANGULO_HPP
#define RETANGULO_HPP

#include "Formas2D.hpp"
#include <iostream>

using namespace std;

class Retangulo: public Formas2D
{
    public:
        Retangulo();
        float area();
        float perimetro();
        float diagonal();
        friend ostream& operator<<(ostream& os, Retangulo &r);
        virtual ~Retangulo();
};

#endif // RETANGULO_HPP
