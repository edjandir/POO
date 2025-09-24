#include "Medida.h"

Medida::Medida(unsigned int m, unsigned int c){
    int metros = int(c/100);
    double temp = c - metros*100;
    metro = m + metros;
    centimetro = temp;
}

Medida::Medida(double m) {
    double temp = m;
    metro = int(m);
    centimetro = 100 * (temp - metro);
}
