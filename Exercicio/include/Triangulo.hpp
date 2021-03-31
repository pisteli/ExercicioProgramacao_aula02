#ifndef TRIANGULO_HPP
#define TRIANGULO_HPP

class Triangulo
{
    public:
        Triangulo();
        void setBase(float base);
        float getBase();
        void setAltura(float altura);
        float getAltura();
        float area();
        float perimetro();
        virtual ~Triangulo();

    private:
        float base;
        float altura;
};

#endif // TRIANGULO_HPP
