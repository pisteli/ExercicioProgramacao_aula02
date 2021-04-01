#ifndef TRIANGULO_HPP
#define TRIANGULO_HPP

#include <iostream>

using namespace std;

class Triangulo
{
    public:
        Triangulo();
        void setBase(float base);
        float getBase();
        void setAltura(float altura);
        float getAltura();
        float area();
        float perimetro();
        friend ostream& operator<<(ostream& os, Triangulo &t);
        virtual ~Triangulo();

    private:
        float base;
        float altura;
};

#endif // TRIANGULO_HPP
