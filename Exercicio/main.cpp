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
    int opcao = 1, opcao2 = 1, opcao3 = 1;

    // While do menu inicial
    while (opcao != 0)
    {
        system("cls");

        opcao2 = -1;
        opcao3 = -1;

        cout << "---------- FIGURAS GEOMETRICAS ----------" << endl;
        cout << "1 - Bidimensional" << endl;
        cout << "2 - Tridimensional" << endl;
        cout << "0 - Sair" << endl;
        cout << "Opcao: ";
        cin  >> opcao;

        while(opcao < 0 || opcao > 2)
        {
            cout << "\n---------- OPCAO INVALIDA ----------" << endl;
            cout << "Opcao: ";
            cin  >> opcao;
        }

        if(opcao == 1)
        {
            // While do menu de formas bidimensionais
            while (opcao2 != 0)
            {
                system("cls");

                cout << "---------- FIGURAS BIDIMENSIONAIS ----------" << endl;
                cout << "1 - Circulo" << endl;
                cout << "2 - Hexagono Regular" << endl;
                cout << "3 - Retangulo" << endl;
                cout << "4 - Triangulo Retangulo" << endl;
                cout << "0 - Voltar" << endl;
                cout << "Opcao: ";
                cin  >> opcao2;

                while(opcao2 < 0 || opcao2 > 4)
                {
                    cout << "\n---------- OPCAO INVALIDA ----------" << endl;
                    cout << "Opcao: ";
                    cin  >> opcao2;
                }

                if(opcao2 == 1)
                {
                    Circulo c;
                    float raio;

                    cout << "\nDigite o raio: ";
                    cin  >> raio;

                    // Atributo base é utilizado como raio
                    c.setBase(raio);
                    cout << c << endl;

                    system("pause");
                }
                else if(opcao2 == 2)
                {
                    Hexagono h;
                    float aresta;

                    cout << "\nDigite a aresta: ";
                    cin  >> aresta;

                    // Atributo base é utilizado como aresta
                    h.setBase(aresta);
                    cout << h << endl;

                    system("pause");
                }
                else if(opcao2 == 3)
                {
                    Retangulo r;
                    float base, largura;

                    cout << "\nDigite a base: ";
                    cin  >> base;

                    cout << "\nDigite a largura: ";
                    cin  >> largura;

                    r.setBase(base);
                    r.setLargura(largura);
                    cout << r << endl;

                    system("pause");
                }
                else if(opcao2 == 4)
                {
                    Triangulo t;
                    float base, altura;

                    cout << "\nDigite a base: ";
                    cin  >> base;

                    cout << "\nDigite a altura: ";
                    cin  >> altura;

                    t.setBase(base);
                    // Atributo largura é utilizado como altura
                    t.setLargura(altura);
                    cout << t << endl;

                    system("pause");
                }
                else
                {
                    opcao = -1;
                    opcao2 = 0;
                    opcao3 = 0;
                }
            }
        }

        else if (opcao == 2)
        {
            // While do menu de formas tridimensionais
            while (opcao3 != 0)
            {
                system("cls");

                cout << "---------- FIGURAS BIDIMENSIONAIS ----------" << endl;
                cout << "1 - Esfera" << endl;
                cout << "2 - Octaedro Regular" << endl;
                cout << "3 - Paralelepipedo" << endl;
                cout << "4 - Prisma Hexagonal" << endl;
                cout << "0 - Voltar" << endl;
                cout << "Opcao: ";
                cin  >> opcao3;

                while(opcao3 < 0 || opcao3 > 4)
                {
                    cout << "\n---------- OPCAO INVALIDA ----------" << endl;
                    cout << "Opcao: ";
                    cin  >> opcao3;
                }

                if(opcao3 == 1)
                {
                    Esfera e;
                    float raio;

                    cout << "\nDigite o raio: ";
                    cin  >> raio;

                    // Atributo base é utilizado como raio
                    e.setBase(raio);
                    cout << e << endl;

                    system("pause");
                }
                else if(opcao3 == 2)
                {
                    Octaedro o;
                    float aresta;

                    cout << "\nDigite a aresta: ";
                    cin  >> aresta;

                    // Atributo base é utilizado como aresta
                    o.setBase(aresta);
                    cout << o << endl;

                    system("pause");
                }
                else if(opcao3 == 3)
                {
                    Paralelepipedo p;
                    float base, largura, altura;

                    cout << "\nDigite a base: ";
                    cin  >> base;

                    cout << "\nDigite a largura: ";
                    cin  >> largura;

                    cout << "\nDigite a altura: ";
                    cin  >> altura;

                    p.setBase(base);
                    p.setLargura(largura);
                    p.setAltura(altura);
                    cout << p << endl;

                    system("pause");
                }
                else if(opcao3 == 4)
                {
                    PrismaHexagonal ph;
                    float aresta, altura;

                    cout << "\nDigite a aresta: ";
                    cin  >> aresta;

                    cout << "\nDigite a altura: ";
                    cin  >> altura;

                    ph.setBase(aresta);
                    ph.setAltura(altura);
                    cout << ph << endl;

                    system("pause");
                }
                else
                {
                    opcao = -1;
                    opcao2 = 0;
                    opcao3 = 0;
                }
            }
        }
    }

    cout << "\n-----------------------------------------" << endl;
    cout << "Tiago Tavares Pisteli - RA: 93965" << endl;
    cout << "Topicos Avancados em Programacao Orientada a Objetos" << endl;
    cout << "Prof. Dr. Mauricio Acconcia Dias" << endl;
    cout << "11 periodo do curso de Engenharia da Computacao noturno" << endl;
    cout << "FHO - Fundacao Herminio Ometto" << endl;
    cout << "-----------------------------------------" << endl;

    /*
    /----------- TESTES -----------/
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
    /----------- FIM DOS TESTES -----------/
    */

    return 0;
}
