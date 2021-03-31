#ifndef ESFERA_HPP
#define ESFERA_HPP

class Esfera
{
    public:
        Esfera();
        void setRaio(float raio);
        float getRaio();
        float area();
        float volume();
        virtual ~Esfera();

    private:
        float raio;
};

#endif // ESFERA_HPP
