#ifndef CONTADOR_H
#define CONTADOR_H


class Contador
{
    public:
        Contador() {};
        Contador(int c): contador(c) {}

        int Getcontador() { return contador; }
        void Setcontador(int val) { contador = val; }

        Contador operator ++ ();

    protected:
        int contador;
    private:

};

#endif // CONTADOR_H
