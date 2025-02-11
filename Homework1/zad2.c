#include <stdio.h>
#define BIGGER(A, B) ((A) > (B)) ? (A) : (B)

int main()
{
    printf("%d", BIGGER(18, 30));
}