#ifndef FORMAS2D_HPP
#define FORMAS2D_HPP

class Formas2D
{
    // Classe de formas2D, sera herdada por todas as formas bidimensionais

    public:
        Formas2D();                         // Construtor
        void setBase(float base);           // Método para salvar o valor da Base
        float getBase();                    // Método para retornar o valor da Base
        void setLargura(float largura);     // Método para salvar o valor da Largura
        float getLargura();                 // Método para retornar o valor da Largura
        virtual float area() = 0;           // Virtual puro de um método para retornar a area da forma
        virtual float perimetro() = 0;      // Virtual puro de um método para retornar o perimetro
        virtual ~Formas2D();                // Destrutor

    private:
        float base;                         // Atributo privado para base
        float largura;                      // Atributo privado para largura
};

#endif // FORMAS2D_HPP
