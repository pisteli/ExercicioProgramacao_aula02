#include "Triangulo.hpp"

#include <math.h>

Triangulo::Triangulo()
{
    //ctor
}

float Triangulo::area()
{
    return (getBase()*getLargura())/2;
}

float Triangulo::perimetro()
{
    float c;

    c = sqrt(pow(getBase(),2)+pow(getLargura(),2));

    return getBase() + getLargura() + c;
}

ostream& operator<<(ostream& os, Triangulo &t){
    os<< "\nTriangulo " << endl
      << "\tArea: " << t.area() << endl
      << "\tPerimetro: " << t.perimetro() << endl;
    return os;
}

Triangulo::~Triangulo()
{
    //dtor
}
