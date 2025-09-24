#include "Contador.h"

Contador Contador::operator ++() {
    return Contador(++contador);
}

Contador Contador::operator ++(int) {
    return Contador(contador++);
}

Contador Contador::operator +(Contador c) {
    return Contador(contador + c.contador);
}
