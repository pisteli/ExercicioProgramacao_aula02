#include "Circulo.hpp"
#include <math.h>

Circulo::Circulo()
{
    this->raio = 0.0;
}

void Circulo::setRaio(float raio)
{
    this->raio = raio;
}

float Circulo::getRaio()
{
    return this->raio;
}

float Circulo::area()
{
    return 3.1415927 * pow(this->raio, 2);
}

float Circulo::perimetro()
{
    return 2 * 3.1415927 * this->raio;
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
