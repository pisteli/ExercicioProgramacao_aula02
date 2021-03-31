#include "Retangulo.hpp"
#include "Circulo.hpp"
#include "Triangulo.hpp"
#include "Hexagono.hpp"
#include "Paralelepipedo.hpp"
#include "Esfera.hpp"

#include <iostream>

using namespace std;

int main()
{
    Retangulo r;
    r.setAltura(10);
    r.setBase(15);
    cout << "Retangulo " << endl;
    cout << "\tArea: " << r.area() << endl;
    cout << "\tPerimetro: " << r.perimetro() << endl;
    cout << "\tDiagonal: " << r.diagonal() << endl;

    Circulo c;
    c.setRaio(10);
    cout << "\nCirculo " << endl;
    cout << "\tArea: " << c.area() << endl;
    cout << "\tPerimetro: " << c.perimetro() << endl;

    Triangulo t;
    t.setAltura(10);
    t.setBase(15);
    cout << "\nTriangulo " << endl;
    cout << "\tArea: " << t.area() << endl;
    cout << "\tPerimetro: " << t.perimetro() << endl;

    Hexagono h;
    h.setAresta(10);
    cout << "\nHexagono " << endl;
    cout << "\tArea: " << h.area() << endl;
    cout << "\tPerimetro: " << h.perimetro() << endl;

    Paralelepipedo p;
    p.setAltura(10);
    p.setBase(15);
    p.setLargura(10);
    cout << "\nParalelepipedo " << endl;
    cout << "\tArea Base: " << p.areaBase() << endl;
    cout << "\tArea Total: " << p.areaTotal() << endl;
    cout << "\tVolume: " << p.volume() << endl;
    cout << "\tDiagonal: " << p.diagonal() << endl;

    Esfera e;
    e.setRaio(10);
    cout << "\nEsfera " << endl;
    cout << "\tArea: " << e.area() << endl;
    cout << "\tVolume: " << e.volume() << endl;

    return 0;
}
