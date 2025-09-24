#ifndef MEDIDA_H
#define MEDIDA_H

#define METRO_PARA_PES 3.2808

#include <iostream>

using namespace std;

class Medida
{
    public:
        Medida(): metro(0), centimetro(0){};
        Medida(unsigned int m, unsigned int c);
        Medida(double m);

        int Getmetro() { return metro; }
        void Setmetro(int val) { metro = val; }
        double Getcentimetro() { return centimetro; }
        void Setcentimetro(int val) { centimetro = val; }
        void getMedida();
        void mostraMedida();

        Medida operator + (Medida);
        friend double quadrado(Medida);

    protected:

    private:
        int metro;
        int centimetro;
};

#endif // MEDIDA_H
