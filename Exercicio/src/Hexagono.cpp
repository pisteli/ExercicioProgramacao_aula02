#include "Hexagono.hpp"

#include <math.h>

Hexagono::Hexagono()
{
    setLargura(0.0);
}

float Hexagono::area()
{
    // Atrobuto base sera usado como a aresta
    return (3 * pow(getBase(),2) * sqrt(3))/2;
}

float Hexagono::perimetro()
{
    return getBase() * 6;
}

ostream& operator<<(ostream& os, Hexagono &h){
    os<< "\nHexagono " << endl
      << "\tArea: " << h.area() << endl
      << "\tPerimetro: " << h.perimetro() << endl;
    return os;
}

Hexagono::~Hexagono()
{
    //dtor
}
