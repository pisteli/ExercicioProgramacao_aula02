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
    r.setAltura(10);
    r.setBase(15);
    cout << r;
    //cout << "Retangulo " << endl;
    //cout << "\tArea: " << r.area() << endl;
    //cout << "\tPerimetro: " << r.perimetro() << endl;
    //cout << "\tDiagonal: " << r.diagonal() << endl;

    Circulo c;
    c.setRaio(10);
    cout << c;
    //cout << "\nCirculo " << endl;
    //cout << "\tArea: " << c.area() << endl;
    //cout << "\tPerimetro: " << c.perimetro() << endl;

    Triangulo t;
    t.setAltura(10);
    t.setBase(15);
    cout << t;
    //cout << "\nTriangulo " << endl;
    //cout << "\tArea: " << t.area() << endl;
    //cout << "\tPerimetro: " << t.perimetro() << endl;

    Hexagono h;
    h.setAresta(10);
    cout << h;
    //cout << "\nHexagono " << endl;
    //cout << "\tArea: " << h.area() << endl;
    //cout << "\tPerimetro: " << h.perimetro() << endl;

    Paralelepipedo p;
    p.setAltura(10);
    p.setBase(15);
    p.setLargura(10);
    cout << p;
    //cout << "\nParalelepipedo " << endl;
    //cout << "\tArea Base: " << p.areaBase() << endl;
    //cout << "\tArea Total: " << p.areaTotal() << endl;
    //cout << "\tVolume: " << p.volume() << endl;
    //cout << "\tDiagonal: " << p.diagonal() << endl;

    Esfera e;
    e.setRaio(10);
    cout << e;
    //cout << "\nEsfera " << endl;
    //cout << "\tArea: " << e.area() << endl;
    //cout << "\tVolume: " << e.volume() << endl;

    PrismaHexagonal ph;
    ph.setAresta(1);
    ph.setAltura(2.5);
    cout << ph;
    //cout << "\nPrisma Hexagonal " << endl;
    //cout << "\tArea Base: " << ph.areaBase() << endl;
    //cout << "\tArea Lateral: " << ph.areaLateral() << endl;
    //cout << "\tArea Total: " << ph.areaTotal() << endl;
    //cout << "\tVolume: " << ph.volume() << endl;

    Octaedro o;
    o.setAresta(10);
    cout << o;
    //cout << "\nOctaedro Regular " << endl;
    //cout << "\tArea Total: " << o.areaTotal() << endl;
    //cout << "\tVolume: " << o.volume() << endl;

    return 0;
}
