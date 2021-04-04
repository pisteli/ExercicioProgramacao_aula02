#include "Formas2D.hpp"

Formas2D::Formas2D()
{
    this->base = 0.0;
    this->largura = 0.0;
}

void Formas2D::setBase(float base)
{
    this->base = base;
}

float Formas2D::getBase()
{
    return this->base;
}

void Formas2D::setLargura(float largura)
{
    this->largura = largura;
}

float Formas2D::getLargura()
{
    return this->largura;
}

Formas2D::~Formas2D()
{
    //dtor
}
