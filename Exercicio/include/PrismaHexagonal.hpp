#ifndef PRISMAHEXAGONAL_HPP
#define PRISMAHEXAGONAL_HPP

#include <iostream>
#include "Formas3D.hpp"

using namespace std;

class PrismaHexagonal: public Formas3D
{
    public:
        PrismaHexagonal();
        float areaBase();
        float areaLateral();
        float areaTotal();
        float volume();
        friend ostream& operator<<(ostream& os, PrismaHexagonal &ph);
        virtual ~PrismaHexagonal();
};

#endif // PRISMAHEXAGONAL_HPP
