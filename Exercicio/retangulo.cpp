#include "retangulo.hpp"

Retangulo::Retangulo(){
    this->base = 0.0;
    this->altura = 0.0;
}

void Retangulo::setBase(float base)
{
    this->base = base;
}

float Retangulo::getBase()
{
    return this->base;
}

void Retangulo::setAltura(float altura)
{
    this->altura = altura;
}

float Retangulo::getAltura()
{
    return this->altura;
}

float Retangulo::area()
{
    return this->base * this->altura;
}
