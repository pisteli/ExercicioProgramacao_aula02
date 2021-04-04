#include "Retangulo.hpp"
#include <math.h>

Retangulo::Retangulo()
{
    //ctor
}

float Retangulo::area()
{
    return getBase() * getLargura();
}

float Retangulo::perimetro()
{
    return 2*(getBase()+getLargura());
}

float Retangulo::diagonal()
{
    return sqrt(pow(getBase(),2)+pow(getLargura(),2));
}

ostream& operator<<(ostream& os, Retangulo &r){
    os<< "Retangulo " << endl
      << "\tArea: " << r.area() << endl
      << "\tPerimetro: " << r.perimetro() << endl
      << "\tDiagonal: " << r.diagonal() << endl;
    return os;
}

Retangulo::~Retangulo()
{
    //dtor
}
