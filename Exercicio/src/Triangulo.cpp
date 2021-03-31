#include "Triangulo.hpp"

#include <math.h>

Triangulo::Triangulo()
{
    this->base = 0.0;
    this->altura = 0.0;
}

void Triangulo::setBase(float base)
{
    this->base = base;
}

float Triangulo::getBase()
{
    return this->base;
}

void Triangulo::setAltura(float altura)
{
    this->altura = altura;
}

float Triangulo::getAltura()
{
    return this->altura;
}

float Triangulo::area()
{
    return (this->base*this->altura)/2;
}

float Triangulo::perimetro()
{
    float c;

    c = sqrt(pow(this->base,2)+pow(this->altura,2));

    return this->altura + this->base + c;
}

Triangulo::~Triangulo()
{
    //dtor
}
