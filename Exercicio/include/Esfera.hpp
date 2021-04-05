#ifndef ESFERA_HPP
#define ESFERA_HPP

#include <iostream>
#include "Formas3D.hpp"

using namespace std;

class Esfera: public Formas3D                                   // Herança da classe Formas3D
{
    public:
        Esfera();                                               // Construtor
        float areaTotal();                                      // Método para retornar a area total
        float volume();                                         // Método para retornar o volume
        friend ostream& operator<<(ostream& os, Esfera &e);     // Sobrecarga do operador <<
        virtual ~Esfera();                                      // Destrutor
};

#endif // ESFERA_HPP
