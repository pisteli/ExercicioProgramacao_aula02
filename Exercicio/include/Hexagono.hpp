#ifndef HEXAGONO_HPP
#define HEXAGONO_HPP

#include <iostream>
#include "Formas2D.hpp"

using namespace std;

class Hexagono: public Formas2D                                 // Heran�a da classe Formas2D
{
    public:
        Hexagono();                                             // Construtor
        float area();                                           // M�todo para retornar a area
        float perimetro();                                      // M�todo para retornar o perimetro
        friend ostream& operator<<(ostream& os, Hexagono &h);   // Sobrecarga do operador <<
        virtual ~Hexagono();                                    // Destrutor
};

#endif // HEXAGONO_HPP
