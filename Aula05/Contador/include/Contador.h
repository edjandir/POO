#ifndef CONTADOR_H
#define CONTADOR_H


class Contador
{
    public:
        Contador() { contador = 0; };
        Contador(unsigned int cont) : contador(cont) {}
        Contador(const Contador &cont): contador(cont.contador){}

        Contador operator ++(); //++c
        Contador operator ++(int); //c++

        Contador operator +(Contador c); //c1 + c2
        int operator ==(Contador c); // c1 == c2 0 se igual -n se for menor e +n

        unsigned int Getcontador() { return contador; }
        void Setcontador(unsigned int val) { contador = val; }

    protected:

    private:
        unsigned int contador;
};

#endif // CONTADOR_H
