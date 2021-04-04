#include "Formas3D.hpp"

Formas3D::Formas3D()
{
    this->base = 0.0;
    this->largura = 0.0;
    this->altura = 0.0;
}

void Formas3D::setBase(float base)
{
    this->base = base;
}

float Formas3D::getBase()
{
    return this->base;
}

void Formas3D::setLargura(float largura)
{
    this->largura = largura;
}

float Formas3D::getLargura()
{
    return this->largura;
}

void Formas3D::setAltura(float altura)
{
    this->altura = altura;
}

float Formas3D::getAltura()
{
    return this->altura;
}

Formas3D::~Formas3D()
{
    //dtor
}
