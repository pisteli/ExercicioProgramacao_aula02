#ifndef FORMAS2D_HPP
#define FORMAS2D_HPP

class Formas2D
{
    // Classe de formas2D, sera herdada por todas as formas bidimensionais

    public:
        Formas2D();                         // Construtor
        void setBase(float base);           // M�todo para salvar o valor da Base
        float getBase();                    // M�todo para retornar o valor da Base
        void setLargura(float largura);     // M�todo para salvar o valor da Largura
        float getLargura();                 // M�todo para retornar o valor da Largura
        virtual float area() = 0;           // Virtual puro de um m�todo para retornar a area da forma
        virtual float perimetro() = 0;      // Virtual puro de um m�todo para retornar o perimetro
        virtual ~Formas2D();                // Destrutor

    private:
        float base;                         // Atributo privado para base
        float largura;                      // Atributo privado para largura
};

#endif // FORMAS2D_HPP
