#ifndef PRISMAHEXAGONAL_HPP
#define PRISMAHEXAGONAL_HPP

#include <iostream>

using namespace std;

class PrismaHexagonal
{
    public:
        PrismaHexagonal();
        void setAresta(float aresta);
        float getAresta();
        void setAltura(float altura);
        float getAltura();
        float areaBase();
        float areaLateral();
        float areaTotal();
        float volume();
        friend ostream& operator<<(ostream& os, PrismaHexagonal &ph);
        virtual ~PrismaHexagonal();

    private:
        float aresta;
        float altura;

};

#endif // PRISMAHEXAGONAL_HPP
