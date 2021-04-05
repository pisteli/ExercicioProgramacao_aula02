#include "Circulo.hpp"
#include <math.h>

Circulo::Circulo()
{
    // O atributo base sera utilizado como raio.
    setLargura(0.0);
}

float Circulo::area()
{
    return 3.1415927 * pow(getBase(), 2);
}

float Circulo::perimetro()
{
    return 2 * 3.1415927 * getBase();
}

ostream& operator<<(ostream& os, Circulo &c){
    os<< "\n---------- Circulo ----------" << endl
      << "\tArea: " << c.area() << endl
      << "\tPerimetro: " << c.perimetro() << endl;
    return os;
}

Circulo::~Circulo()
{
    //dtor
}
