#include "Circulo.hpp"
#include <math.h>

Circulo::Circulo()
{
    setLargura(0.0);
}

float Circulo::area()
{
    // O atributo base sera usado como raio.
    return 3.1415927 * pow(getBase(), 2);
}

float Circulo::perimetro()
{
    return 2 * 3.1415927 * getBase();
}

ostream& operator<<(ostream& os, Circulo &c){
    os<< "\nCirculo " << endl
      << "\tArea: " << c.area() << endl
      << "\tPerimetro: " << c.perimetro() << endl;
    return os;
}

Circulo::~Circulo()
{
    //dtor
}
