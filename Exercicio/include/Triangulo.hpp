#ifndef TRIANGULO_HPP
#define TRIANGULO_HPP

#include <iostream>
#include "Formas2D.hpp"

using namespace std;

class Triangulo: public Formas2D                                // Herança da classe Formas2D
{
    public:
        Triangulo();                                            // Construtor
        float area();                                           // Método para retornar a area
        float perimetro();                                      // Método para retornar o perimetro
        friend ostream& operator<<(ostream& os, Triangulo &t);  // Sobrecarga do operador <<
        virtual ~Triangulo();                                   // Destrutor
};

#endif // TRIANGULO_HPP
