#include <math.h>
#include <stdio.h>

int main()
{
    long array[5] = {1, 3, 4, 6, 7};
    for(int i = 0; i < 5; i++)
    {
        array[i] = pow(array[i], 4);
        printf("%d ", array[i]);
    }
}