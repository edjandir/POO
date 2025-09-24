#include "Contador.h"

Contador Contador::operator ++ () {
    return Contador(++contador);
}
