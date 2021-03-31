#ifndef RETANGULO_HPP
#define RETANGULO_HPP

class Retangulo
{
    public:
        Retangulo();
        void setBase(float base);
        float getBase();
        void setAltura(float altura);
        float getAltura();
        float area();
        float perimetro();
        float diagonal();
        virtual ~Retangulo();

    private:
        float base;
        float altura;
};

#endif // RETANGULO_HPP
