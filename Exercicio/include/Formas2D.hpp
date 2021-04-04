#ifndef FORMAS2D_HPP
#define FORMAS2D_HPP

class Formas2D
{
    public:
        Formas2D();
        void setBase(float base);
        float getBase();
        void setLargura(float largura);
        float getLargura();
        virtual float area() = 0;
        virtual float perimetro() = 0;
        virtual ~Formas2D();

    private:
        float base;
        float largura;
};

#endif // FORMAS2D_HPP
