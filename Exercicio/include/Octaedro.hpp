#ifndef OCTAEDRO_HPP
#define OCTAEDRO_HPP

#include <iostream>
#include "Formas3D.hpp"

using namespace std;

class Octaedro: public Formas3D
{
    public:
        Octaedro();
        float areaTotal();
        float volume();
        friend ostream& operator<<(ostream& os, Octaedro &o);
        virtual ~Octaedro();
};

#endif // OCTAEDRO_HPP
