#ifndef PRISMAHEXAGONAL_HPP
#define PRISMAHEXAGONAL_HPP

#include <iostream>
#include "Formas3D.hpp"

using namespace std;

class PrismaHexagonal: public Formas3D                                  // Heran�a da classe Formas3D
{
    public:
        PrismaHexagonal();                                              // Construtor
        float areaBase();                                               // M�todo para retornar a area da Base
        float areaLateral();                                            // M�todo para retornar a area lateral
        float areaTotal();                                              // M�todo para retornar a area total
        float volume();                                                 // M�todo para retornar o volume
        friend ostream& operator<<(ostream& os, PrismaHexagonal &ph);   // Sobrecarga do operador <<
        virtual ~PrismaHexagonal();                                     // Destrutor
};

#endif // PRISMAHEXAGONAL_HPP
