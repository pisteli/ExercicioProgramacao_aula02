#include "Esfera.hpp"

Esfera::Esfera()
{
    this->raio = 0.0;
}

void Esfera::setRaio(float raio)
{
    this->raio = raio;
}

float Esfera::getRaio()
{
    return this->raio;
}

float Esfera::area()
{
    return 4 * 3.1415927 * this->raio * this->raio;
}

float Esfera::volume()
{
    return (4 * 3.1415927 * this->raio * this->raio)/3;
}

ostream& operator<<(ostream& os, Esfera &e){
    os<< "\nEsfera " << endl
      << "\tArea: " << e.area() << endl
      << "\tVolume: " << e.volume() << endl;
    return os;
}

Esfera::~Esfera()
{
    //dtor
}
