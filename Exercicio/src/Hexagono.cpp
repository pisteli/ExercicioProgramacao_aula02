#include "Hexagono.hpp"

#include <math.h>

Hexagono::Hexagono()
{
    this->aresta = 0.0;
}

void Hexagono::setAresta(float aresta)
{
    this->aresta = aresta;
}

float Hexagono::getAresta()
{
    return this->aresta;
}

float Hexagono::area()
{
    return (3 * pow(this->aresta,2) * sqrt(3))/2;
}

float Hexagono::perimetro()
{
    return this->aresta * 6;
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
