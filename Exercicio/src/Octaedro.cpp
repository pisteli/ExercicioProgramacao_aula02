#include "Octaedro.hpp"

#include <math.h>

Octaedro::Octaedro()
{
    this->aresta = 0.0;
}

void Octaedro::setAresta(float aresta)
{
    this->aresta = aresta;
}

float Octaedro::getAresta()
{
    return this->aresta;
}

float Octaedro::areaTotal()
{
    return 2 * sqrt(3) * pow(this->aresta,2);
}

float Octaedro::volume()
{
    return (sqrt(2) * pow(this->aresta,3))/3;
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
