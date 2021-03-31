#ifndef PARALELEPIPEDO_HPP
#define PARALELEPIPEDO_HPP

class Paralelepipedo
{
    public:
        Paralelepipedo();
        void setBase(float base);
        float getBase();
        void setLargura(float largura);
        float getLargura();
        void setAltura(float altura);
        float getAltura();
        float areaBase();
        float areaTotal();
        float volume();
        float diagonal();
        virtual ~Paralelepipedo();

    private:
        float base;
        float largura;
        float altura;
};

#endif // PARALELEPIPEDO_HPP
