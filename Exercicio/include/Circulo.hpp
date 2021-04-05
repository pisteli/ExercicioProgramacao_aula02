#ifndef CIRCULO_HPP
#define CIRCULO_HPP

#include <iostream>
#include "Formas2D.hpp"

using namespace std;

class Circulo: public Formas2D                                  // Heran�a da classe Formas2D
{
    public:
        Circulo();                                              // Construtor
        float area();                                           // M�todo para retornar a area
        float perimetro();                                      // M�todo para retornar o perimetro
        friend ostream& operator<<(ostream& os, Circulo &c);    // Sobrecarga do operador <<
        virtual ~Circulo();                                     // Destrutor
};

#endif // CIRCULO_HPP
