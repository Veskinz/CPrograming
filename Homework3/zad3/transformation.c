#include "transformation.h"
#include <string.h>

struct Transformation transformString(char string[], int size) {
    struct Transformation transformation;
    int mult = 1;
    transformation.result = 0;
    for(int i = size - 2; i >= 0; i--)
    {
        if(string[i] - '0' >= 0 && string[i] - '0' <= 9)
        {
            transformation.result = transformation.result + ((string[i] - '0') * mult);
            mult *= 10;
        }
        else if(i == 0 && string[i] == '-')
        {
            transformation.result *= -1;
        }
        else
        {
            transformation.result = 0;
            strcpy(transformation.error, "Invalid input string");
            break;
        }
    }
    return transformation;
}