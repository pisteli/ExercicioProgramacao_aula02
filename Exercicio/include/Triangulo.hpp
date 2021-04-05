#ifndef TRIANGULO_HPP
#define TRIANGULO_HPP

#include <iostream>
#include "Formas2D.hpp"

using namespace std;

class Triangulo: public Formas2D                                // Heran�a da classe Formas2D
{
    public:
        Triangulo();                                            // Construtor
        float area();                                           // M�todo para retornar a area
        float perimetro();                                      // M�todo para retornar o perimetro
        friend ostream& operator<<(ostream& os, Triangulo &t);  // Sobrecarga do operador <<
        virtual ~Triangulo();                                   // Destrutor
};

#endif // TRIANGULO_HPP
