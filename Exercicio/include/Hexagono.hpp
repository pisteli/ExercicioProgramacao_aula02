#ifndef HEXAGONO_HPP
#define HEXAGONO_HPP

class Hexagono
{
    public:
        Hexagono();
        void setAresta(float aresta);
        float getAresta();
        float area();
        float perimetro();
        virtual ~Hexagono();

    private:
        float aresta;
};

#endif // HEXAGONO_HPP
