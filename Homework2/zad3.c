#include <stdio.h>

void bubbleSort(int array[], int size)
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
}

void selectionSort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i; j < size; j++)
        {
            if (array[min] > array[j])
            {
                min = j;
            }
        }
        int a = array[i];
        array[i] = array[min];
        array[min] = a;
    }
}

void insertionSort(int array[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int value = array[i];
        int j = i;
        while (j > 0 && array[j - 1] >= value)
        {
            array[j] = array[j - 1];
            j--;
        }
        array[j] = value;
    }
}

void reverse(int array[], int size)
{
    for(int i = 0; i < size/2; i++)
    {
        int a = array[i];
        array[i] = array[(size-1) - i];
        array[(size-1) - i] = a;
    }
}

int main()
{
    int array[5] = {1, 4, 2, 5, 3};
#ifdef _WIN32
    bubbleSort(array, 5);
#elif defined __linux__
    selectionSort(array, 5);
#elif defined __APPLE__
    insertionSort(array, 5);
#else
    reverse(array, 5);
#endif
}