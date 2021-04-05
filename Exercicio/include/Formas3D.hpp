#ifndef FORMAS3D_HPP
#define FORMAS3D_HPP

class Formas3D
{
    // Classe de formas3D, sera herdada por todas as formas tridimensionais

    public:
        Formas3D();                         // Construtor
        void setBase(float base);           // Método para salvar o valor da Base
        float getBase();                    // Método para retornar o valor da Base
        void setLargura(float largura);     // Método para salvar o valor da Largura
        float getLargura();                 // Método para retornar o valor da Largura
        void setAltura(float altura);       // Método para salvar o valor da Altura
        float getAltura();                  // Método para retornar o valor da Altura
        virtual float areaTotal() = 0;      // Virtual puro de um método para retornar a areaTotal da forma
        virtual float volume() = 0;         // Virtual puro de um método para retornar o volume da forma
        virtual ~Formas3D();                // Destrutor

    private:
        float base;                         // Atributo privado para Base
        float largura;                      // Atributo privado para Largura
        float altura;                       // Atributo privado para Altura
};

#endif // FORMAS3D_HPP
