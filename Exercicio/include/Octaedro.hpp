#ifndef OCTAEDRO_HPP
#define OCTAEDRO_HPP

#include <iostream>

using namespace std;

class Octaedro
{
    public:
        Octaedro();
        void setAresta(float aresta);
        float getAresta();
        float areaTotal();
        float volume();
        friend ostream& operator<<(ostream& os, Octaedro &o);
        virtual ~Octaedro();

    private:
        float aresta;
};

#endif // OCTAEDRO_HPP
