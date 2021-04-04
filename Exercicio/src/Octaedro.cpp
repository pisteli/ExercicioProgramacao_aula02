#include "Octaedro.hpp"

#include <math.h>

Octaedro::Octaedro()
{
    setLargura(0.0);
    setAltura(0.0);

    //Atributo base sera utilisado como aresta
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
    os<< "\nOctaedro Regular " << endl
      << "\tArea Total: " << o.areaTotal() << endl
      << "\tVolume: " << o.volume() << endl;
    return os;
}

Octaedro::~Octaedro()
{
    //dtor
}
