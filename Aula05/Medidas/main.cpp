#include <iostream>

#include <Medida.h>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    Medida m(2, 240);
    cout << "\Metros: " << m.Getmetro() << "\nCent�metros: "
        << m.Getcentimetro();
    return 0;
}
