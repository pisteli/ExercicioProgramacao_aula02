#include "PrismaHexagonal.hpp"
#include "Hexagono.hpp"

PrismaHexagonal::PrismaHexagonal()
{
    setLargura(0.0);

    // Atributo base sera usado como aresta
}

float PrismaHexagonal::areaBase()
{
    Hexagono h;
    h.setBase(getBase());

    // Ou retornar assim.
    // return (3 * pow(this->aresta,2) * sqrt(3))/2;

    return h.area();
}

float PrismaHexagonal::areaLateral()
{
    return getBase() * getAltura();
}

float PrismaHexagonal::areaTotal()
{
    return (6 * this->areaLateral()) + (2 * this->areaBase());

    // Ou usar
    // return (6 * this->aresta * this->altura) + (2 * ((3 * pow(this->aresta,2) * sqrt(3))/2));
}

float PrismaHexagonal::volume()
{
    return this->areaBase() * getAltura();

    // Ou usar
    // return (3 * pow(this->aresta,2) * sqrt(3)) * this->altura;
}

ostream& operator<<(ostream& os, PrismaHexagonal &ph){
    os<< "\nPrisma Hexagonal " << endl
      << "\tArea Base: " << ph.areaBase() << endl
      << "\tArea Lateral: " << ph.areaLateral() << endl
      << "\tArea Total: " << ph.areaTotal() << endl
      << "\tVolume: " << ph.volume() << endl;
    return os;
}

PrismaHexagonal::~PrismaHexagonal()
{
    //dtor
}
