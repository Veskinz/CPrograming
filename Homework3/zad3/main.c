#include <stdio.h>
#include "transformation.h"

int main()
{
    char string1[] = "-123";
    struct Transformation result1 = transformString(string1, sizeof(string1) / sizeof(string1[0]));
    printf("%d %s", result1.result, result1.error);
    char string2[] = "12ab23";
    struct Transformation result2 = transformString(string2, sizeof(string2) / sizeof(string2[0]));
    printf("%d %s", result2.result, result2.error);
}