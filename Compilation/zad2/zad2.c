#include <stdio.h>

int main()
{
    int a = 12;
    int b = 18;
    int lowMult;
    for(int i = a; 1; i += a)
    {
        if(i % b == 0)
        {
            lowMult = i;
            break;
        }
    }
    printf("Multiplier: %d", lowMult);
}