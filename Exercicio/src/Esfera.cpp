#include "Esfera.hpp"

Esfera::Esfera()
{
    setAltura(0.0);
    setLargura(0.0);
}

float Esfera::areaTotal()
{
    // Base sera utilizada como raio
    return 4 * 3.1415927 * getBase() * getBase();
}

float Esfera::volume()
{
    return (4 * 3.1415927 * getBase() * getBase())/3;
}

ostream& operator<<(ostream& os, Esfera &e){
    os<< "\nEsfera " << endl
      << "\tArea: " << e.areaTotal() << endl
      << "\tVolume: " << e.volume() << endl;
    return os;
}

Esfera::~Esfera()
{
    //dtor
}
