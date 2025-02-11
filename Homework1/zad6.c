#include <stdio.h>
#define SORT(ARRAY, SIZE, TYPE, COMPARE) for(int i = 0; i < SIZE; i++) \
{ \
    if(#COMPARE == ">") \
    { \
        for(int j = 0; j < SIZE - 1; j++) \
        { \
            if(ARRAY[j] < ARRAY[j + 1]) \
            { \
                TYPE c = ARRAY[j]; \
                ARRAY[j] = ARRAY[j + 1]; \
                ARRAY[j + 1] = c; \
            } \
        } \
    } \
    if(#COMPARE == "<") \
    { \
        for(int j = 0; j < SIZE - 1; j++) \
        { \
            if(ARRAY[j] > ARRAY[j + 1]) \
            { \
                TYPE c = ARRAY[j]; \
                ARRAY[j] = ARRAY[j + 1]; \
                ARRAY[j + 1] = c; \
            } \
        } \
    } \
}


int main()
{
    int array[] = {2, 3, 5, 1, 4};
    SORT(array, 5, int, >);
}