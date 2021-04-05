#ifndef PARALELEPIPEDO_HPP
#define PARALELEPIPEDO_HPP

#include <iostream>
#include "Formas3D.hpp"

using namespace std;

class Paralelepipedo: public Formas3D                               // Herança da classe Formas3D
{
    public:
        Paralelepipedo();                                           // Construtor
        float areaBase();                                           // Método para retornar a area da base
        float areaTotal();                                          // Método para retornar a area total
        float volume();                                             // Método para retornar o volume
        float diagonal();                                           // Método para retornar a diagonal do paralelepipedo
        friend ostream& operator<<(ostream& os, Paralelepipedo &p); // Sobrecarga do operador <<
        virtual ~Paralelepipedo();                                  // Destrutor
};

#endif // PARALELEPIPEDO_HPP
