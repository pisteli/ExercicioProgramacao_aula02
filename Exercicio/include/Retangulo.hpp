#ifndef RETANGULO_HPP
#define RETANGULO_HPP

#include "Formas2D.hpp"
#include <iostream>

using namespace std;

class Retangulo: public Formas2D                                // Herança da classe Formas2D
{
    public:
        Retangulo();                                            // Construtor
        float area();                                           // Método para retornar a area
        float perimetro();                                      // Método para retornar o perimetro
        float diagonal();                                       // Métod para retornar a diagonal
        friend ostream& operator<<(ostream& os, Retangulo &r);  // Sobrecarga do operador <<
        virtual ~Retangulo();                                   // Destrutor
};

#endif // RETANGULO_HPP
