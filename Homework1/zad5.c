#include <stdio.h>
#define SWAP(A, B, TYPE) TYPE c = A; \
A = B; \
B = c



int main()
{
    int a = 1;
    int b = 2;
    SWAP(a, b, int);
    printf("%d, ", a);
    printf("%d", b);
}