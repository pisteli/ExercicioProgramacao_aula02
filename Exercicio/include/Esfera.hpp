#ifndef ESFERA_HPP
#define ESFERA_HPP

#include <iostream>

using namespace std;

class Esfera
{
    public:
        Esfera();
        void setRaio(float raio);
        float getRaio();
        float area();
        float volume();
        friend ostream& operator<<(ostream& os, Esfera &e);
        virtual ~Esfera();

    private:
        float raio;
};

#endif // ESFERA_HPP
