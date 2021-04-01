#ifndef HEXAGONO_HPP
#define HEXAGONO_HPP

#include <iostream>

using namespace std;

class Hexagono
{
    public:
        Hexagono();
        void setAresta(float aresta);
        float getAresta();
        float area();
        float perimetro();
        friend ostream& operator<<(ostream& os, Hexagono &h);
        virtual ~Hexagono();

    private:
        float aresta;
};

#endif // HEXAGONO_HPP
