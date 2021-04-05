#ifndef PRISMAHEXAGONAL_HPP
#define PRISMAHEXAGONAL_HPP

#include <iostream>
#include "Formas3D.hpp"

using namespace std;

class PrismaHexagonal: public Formas3D                                  // Herança da classe Formas3D
{
    public:
        PrismaHexagonal();                                              // Construtor
        float areaBase();                                               // Método para retornar a area da Base
        float areaLateral();                                            // Método para retornar a area lateral
        float areaTotal();                                              // Método para retornar a area total
        float volume();                                                 // Método para retornar o volume
        friend ostream& operator<<(ostream& os, PrismaHexagonal &ph);   // Sobrecarga do operador <<
        virtual ~PrismaHexagonal();                                     // Destrutor
};

#endif // PRISMAHEXAGONAL_HPP
