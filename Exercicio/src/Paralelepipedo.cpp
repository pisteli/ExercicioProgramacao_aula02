#include "Paralelepipedo.hpp"

#include <math.h>

Paralelepipedo::Paralelepipedo()
{
    //ctor
}

float Paralelepipedo::areaBase()
{
    return getBase() * getLargura();
}

float Paralelepipedo::areaTotal()
{
    return 2*getBase()*getLargura() + 2*getBase()*getAltura() + 2*getLargura()*getAltura();
}

float Paralelepipedo::volume()
{
    return getAltura()*getBase()*getLargura();
}

float Paralelepipedo::diagonal()
{
    return sqrt(pow(getBase(),2) + pow(getLargura(),2) + pow(getAltura(),2));
}

ostream& operator<<(ostream& os, Paralelepipedo &p){
    os<< "\n---------- Paralelepipedo ----------" << endl
      << "\tArea Base: " << p.areaBase() << endl
      << "\tArea Total: " << p.areaTotal() << endl
      << "\tVolume: " << p.volume() << endl
      << "\tDiagonal: " << p.diagonal() << endl;
    return os;
}

Paralelepipedo::~Paralelepipedo()
{
    //dtor
}
