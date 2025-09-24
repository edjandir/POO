#include <iostream>

#include <Medida.h>
#include <locale.h>

using namespace std;

double quadrado(Medida m) {
    double parteMetro = m.metro + m.centimetro/100.0;
    return parteMetro*parteMetro;
}

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    Medida m1, m2(2, 40);
    m1.getMedida();
    Medida m3 = m1 + m2;
    cout << "\nm3: ";
    m3.mostraMedida();
    cout << "\nMetros quadrados: " << quadrado(m3);
    return 0;
}

