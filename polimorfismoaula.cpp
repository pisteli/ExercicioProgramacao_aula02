#include <iostream>

using namespace std;

class Animal {

    private:
    string name;
    int code;

    public:
        virtual void executaCaracteristica() = 0;
};

class Oviparo: public Animal {

    public:
        void executaCaracteristica()
        {
            cout << "Botando Ovo" << endl;
        }
};

class Mamifero: public Animal {

    public:
        void executaCaracteristica()
        {
            cout << "Amamentando" << endl;
        }
};

class Crocodilo: public Oviparo {

    public:
        void cacar()
        {
            cout << "Estou caçando" << endl;
        }
};

class Baleia: public Mamifero {

    public:
        void nadar()
        {
            cout << "Estou nadando" << endl;
        }
};

int main(){

    Mamifero m1;
    Oviparo o1;
    Crocodilo c1;
    Baleia b1;

    m1.executaCaracteristica();
    o1.executaCaracteristica();
    b1.nadar();
    b1.executaCaracteristica();
    c1.cacar();
    c1.executaCaracteristica();
}
