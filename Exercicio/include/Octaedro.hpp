#ifndef OCTAEDRO_HPP
#define OCTAEDRO_HPP

#include <iostream>
#include "Formas3D.hpp"

using namespace std;

class Octaedro: public Formas3D                                 // Heran�a da classe Formas3D
{
    public:
        Octaedro();                                             // Construtor
        float areaTotal();                                      // M�todo para retornar a area total
        float volume();                                         // M�todo para retornar o volume
        friend ostream& operator<<(ostream& os, Octaedro &o);   // Sobrecarga do operador <<
        virtual ~Octaedro();                                    // Destrutor
};

#endif // OCTAEDRO_HPP
