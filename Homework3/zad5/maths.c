#include "maths.h"

int findFactoriel(int number) {
    int result = 1;
    while(number > 0)
    {
        result *= number;
        number--;
    }
    return result;
}