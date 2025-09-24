#ifndef DECREMENTA_H
#define DECREMENTA_H

#include <Contador.h>


class Decrementa : public Contador
{
    public:
        Decrementa(): Contador() {}
        Decrementa(int c): Contador(c){}

        Contador operator --() { return Contador(--contador); }

    protected:

    private:
};

#endif // DECREMENTA_H
