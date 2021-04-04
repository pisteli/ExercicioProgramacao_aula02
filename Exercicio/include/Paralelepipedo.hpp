#ifndef PARALELEPIPEDO_HPP
#define PARALELEPIPEDO_HPP

#include <iostream>
#include "Formas3D.hpp"

using namespace std;

class Paralelepipedo: public Formas3D
{
    public:
        Paralelepipedo();
        float areaBase();
        float areaTotal();
        float volume();
        float diagonal();
        friend ostream& operator<<(ostream& os, Paralelepipedo &p);
        virtual ~Paralelepipedo();
};

#endif // PARALELEPIPEDO_HPP
