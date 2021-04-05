#include "Esfera.hpp"

Esfera::Esfera()
{
    // O atributo base sera utilizado como raio
    setAltura(0.0);
    setLargura(0.0);
}

float Esfera::areaTotal()
{
    return 4 * 3.1415927 * getBase() * getBase();
}

float Esfera::volume()
{
    return (4 * 3.1415927 * getBase() * getBase() * getBase())/3;
}

ostream& operator<<(ostream& os, Esfera &e){
    os<< "\n---------- Esfera ----------" << endl
      << "\tArea: " << e.areaTotal() << endl
      << "\tVolume: " << e.volume() << endl;
    return os;
}

Esfera::~Esfera()
{
    //dtor
}
