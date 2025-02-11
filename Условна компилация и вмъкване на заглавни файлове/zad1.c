#include <stdio.h>

#define DEBUG

void printSumValuesMultipliesOfThree(int array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (i % 3 == 0)
        {
            sum += array[i];
#ifdef DEBUG
            printf("Value at index %d: %d\n", i, array[i]);
#endif
        }
    }
    printf("Sum: %d", sum);
}

void sortArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int a = array[j];
                array[j] = array[j + 1];
                array[j + 1] = a;
            }
        }
    }
#ifdef DEBUG
    printf("Sorted array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
#endif
}

int main()
{
    int array[6] = {2, 7, 6, 1, 9, 3};
    sortArray(array, 6);
    printSumValuesMultipliesOfThree(array, 6);
}