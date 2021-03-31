#ifndef CIRCULO_HPP
#define CIRCULO_HPP


class Circulo
{
    public:
        Circulo();
        void setRaio(float raio);
        float getRaio();
        float area();
        float perimetro();
        virtual ~Circulo();

    private:
        float raio;

};

#endif // CIRCULO_HPP
