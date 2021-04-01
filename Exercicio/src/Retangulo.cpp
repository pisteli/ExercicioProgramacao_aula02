#include "Retangulo.hpp"
#include <math.h>

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

float Retangulo::perimetro()
{
    return 2*(this->base+this->altura);
}

float Retangulo::diagonal()
{
    return sqrt(pow(this->base,2)+pow(this->altura,2));
}

ostream& operator<<(ostream& os, Retangulo &r){
    os<< "Retangulo " << endl
      << "\tArea: " << r.area() << endl
      << "\tPerimetro: " << r.perimetro() << endl
      << "\tDiagonal: " << r.diagonal() << endl;
    return os;
}

Retangulo::~Retangulo()
{
    //dtor
}
