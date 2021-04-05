#ifndef RETANGULO_HPP
#define RETANGULO_HPP

#include "Formas2D.hpp"
#include <iostream>

using namespace std;

class Retangulo: public Formas2D                                // Heran�a da classe Formas2D
{
    public:
        Retangulo();                                            // Construtor
        float area();                                           // M�todo para retornar a area
        float perimetro();                                      // M�todo para retornar o perimetro
        float diagonal();                                       // M�tod para retornar a diagonal
        friend ostream& operator<<(ostream& os, Retangulo &r);  // Sobrecarga do operador <<
        virtual ~Retangulo();                                   // Destrutor
};

#endif // RETANGULO_HPP
