#include "PrismaHexagonal.hpp"
#include "Hexagono.hpp"

PrismaHexagonal::PrismaHexagonal()
{
    this->aresta = 0.0;
    this->altura = 0.0;
}

void PrismaHexagonal::setAresta(float aresta)
{
    this->aresta = aresta;
}

float PrismaHexagonal::getAresta()
{
    return this->aresta;
}

void PrismaHexagonal::setAltura(float altura)
{
    this->altura = altura;
}

float PrismaHexagonal::getAltura()
{
    return this->altura;
}

float PrismaHexagonal::areaBase()
{
    Hexagono h;
    h.setAresta(this->aresta);

    // Ou retornar assim.
    // return (3 * pow(this->aresta,2) * sqrt(3))/2;

    return h.area();
}

float PrismaHexagonal::areaLateral()
{
    return this->aresta * this->altura;
}

float PrismaHexagonal::areaTotal()
{
    return (6 * this->areaLateral()) + (2 * this->areaBase());

    // Ou usar
    // return (6 * this->aresta * this->altura) + (2 * ((3 * pow(this->aresta,2) * sqrt(3))/2));
}

float PrismaHexagonal::volume()
{
    return this->areaBase() * this->altura;

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
