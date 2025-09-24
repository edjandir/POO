#include <iostream>
#include <Contador.h>

using namespace std;

int main()
{
    Contador c1, c2;
    c1++;
    c2++;
    Contador c3 = c1 + c2;
    cout << "\nc1: " << c1.Getcontador() << "\nc2: " << c2.Getcontador()
        << "\nc3: " << c3.Getcontador();

}
