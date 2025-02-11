#include <stdio.h>

#define ARRAY_SIZE 6

void printArray(int array[])
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%d\n", array[i]);
    }
}

void populateArray(int array[])
{
    array[0] = 1;
    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        array[i] = array[i - 1] * 2;
    }
}

int main()
{
#if !defined ARRAY_SIZE || ARRAY_SIZE < 1 || ARRAY_SIZE > 10
    printf("The specified array size is not supported");
#else
    int array[ARRAY_SIZE];
    populateArray(array);
    printArray(array);
#endif
}