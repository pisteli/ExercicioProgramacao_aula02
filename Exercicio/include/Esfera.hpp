#ifndef ESFERA_HPP
#define ESFERA_HPP

#include <iostream>
#include "Formas3D.hpp"

using namespace std;

class Esfera: public Formas3D
{
    public:
        Esfera();
        float areaTotal();
        float volume();
        friend ostream& operator<<(ostream& os, Esfera &e);
        virtual ~Esfera();
};

#endif // ESFERA_HPP
