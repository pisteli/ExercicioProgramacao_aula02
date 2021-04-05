#include "Octaedro.hpp"

#include <math.h>

Octaedro::Octaedro()
{
    // O atributo base sera utilizado como aresta
    setLargura(0.0);
    setAltura(0.0);
}

float Octaedro::areaTotal()
{
    return 2 * sqrt(3) * pow(getBase(),2);
}

float Octaedro::volume()
{
    return (sqrt(2) * pow(getBase(),3))/3;
}

ostream& operator<<(ostream& os, Octaedro &o){
    os<< "\n---------- Octaedro Regular ----------" << endl
      << "\tArea Total: " << o.areaTotal() << endl
      << "\tVolume: " << o.volume() << endl;
    return os;
}

Octaedro::~Octaedro()
{
    //dtor
}
