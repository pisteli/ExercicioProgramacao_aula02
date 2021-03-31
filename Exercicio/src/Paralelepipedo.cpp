#include "Paralelepipedo.hpp"

#include <math.h>

Paralelepipedo::Paralelepipedo()
{
    this->base = 0.0;
    this->largura = 0.0;
    this->altura = 0.0;
}

void Paralelepipedo::setBase(float base)
{
    this->base = base;
}

float Paralelepipedo::getBase()
{
    return this->base;
}

void Paralelepipedo::setLargura(float largura)
{
    this->largura = largura;
}

float Paralelepipedo::getLargura()
{
    return this->largura;
}

void Paralelepipedo::setAltura(float altura)
{
    this->altura = altura;
}

float Paralelepipedo::getAltura()
{
    return this->altura;
}

float Paralelepipedo::areaBase()
{
    return this->base * this->largura;
}

float Paralelepipedo::areaTotal()
{
    return 2*this->base*this->largura + 2*this->base*this->altura + 2*this->largura*this->altura;
}

float Paralelepipedo::volume()
{
    return this->altura*this->base*this->largura;
}

float Paralelepipedo::diagonal()
{
    return sqrt(pow(this->base,2) + pow(this->largura,2) + pow(this->altura,2));
}

Paralelepipedo::~Paralelepipedo()
{
    //dtor
}
