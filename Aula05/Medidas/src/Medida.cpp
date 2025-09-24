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

void Medida::getMedida() {
    cout << "Digite a parte de metros da medida: ";
    cin >> metro;
    cout << "Digite a parte de centímetros da medida: ";
    cin >> centimetro;
}

void Medida::mostraMedida() {
    cout << (metro + centimetro/100.0) << " metros.\n";
}

Medida Medida::operator + (Medida m) {
    int tempMetros = metro + m.metro; //m1 + m2
    int tempCentimetros = centimetro + m.centimetro;

    if (centimetro >= 100) {
        tempCentimetros -= 100;
        tempMetros++;
    }
    return Medida(tempMetros, tempCentimetros);

}
