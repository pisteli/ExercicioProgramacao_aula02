#include "Retangulo.hpp"
#include "Circulo.hpp"
#include "Triangulo.hpp"
#include "Hexagono.hpp"
#include "Paralelepipedo.hpp"
#include "Esfera.hpp"
#include "PrismaHexagonal.hpp"
#include "Octaedro.hpp"

#include <iostream>

using namespace std;

int main()
{
    Retangulo r;
    r.setLargura(10);
    r.setBase(15);
    cout << r;

    Circulo c;
    // Atributo base sera utilisado como raio
    c.setBase(10);
    cout << c;

    Triangulo t;
    t.setLargura(10);
    t.setBase(15);
    cout << t;

    Hexagono h;
    // Atributo base sera utilisado como aresta
    h.setBase(10);
    cout << h;

    Paralelepipedo p;
    p.setAltura(10);
    p.setBase(15);
    p.setLargura(10);
    cout << p;

    Esfera e;
    // Atributo Base sera utilizado como raio
    e.setBase(10);
    cout << e;

    PrismaHexagonal ph;
    ph.setBase(1);
    ph.setAltura(2.5);
    cout << ph;

    Octaedro o;
    // Atributo base sera utilisado como aresta
    o.setBase(10);
    cout << o;

    return 0;
}
