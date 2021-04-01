#ifndef CIRCULO_HPP
#define CIRCULO_HPP

#include <iostream>

using namespace std;

class Circulo
{
    public:
        Circulo();
        void setRaio(float raio);
        float getRaio();
        float area();
        float perimetro();
        friend ostream& operator<<(ostream& os, Circulo &c);
        virtual ~Circulo();

    private:
        float raio;

};

#endif // CIRCULO_HPP
