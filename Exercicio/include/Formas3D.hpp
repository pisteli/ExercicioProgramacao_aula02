#ifndef FORMAS3D_HPP
#define FORMAS3D_HPP

class Formas3D
{
    public:
        Formas3D();
        void setBase(float base);
        float getBase();
        void setLargura(float largura);
        float getLargura();
        void setAltura(float altura);
        float getAltura();
        virtual float areaTotal() = 0;
        virtual float volume() = 0;
        virtual ~Formas3D();

    private:
        float base;
        float largura;
        float altura;
};

#endif // FORMAS3D_HPP
