#include <iostream>
#include <Decrementa.h>

using namespace std;

int main()
{
    Decrementa d1, d2(10);
    ++d2;
    --d2;
    cout << "\nd1: " << d1.Getcontador() << endl;
    cout << "\nd2: " << d2.Getcontador() << endl;
    return 0;
}
