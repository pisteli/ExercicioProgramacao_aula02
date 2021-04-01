#ifndef RETANGULO_HPP
#define RETANGULO_HPP

#include <iostream>

using namespace std;

class Retangulo
{
    public:
        Retangulo();
        void setBase(float base);
        float getBase();
        void setAltura(float altura);
        float getAltura();
        float area();
        float perimetro();
        float diagonal();
        friend ostream& operator<<(ostream& os, Retangulo &r);
        virtual ~Retangulo();

    private:
        float base;
        float altura;
};

#endif // RETANGULO_HPP
