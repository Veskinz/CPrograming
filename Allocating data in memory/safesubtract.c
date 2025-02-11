#include "safeint.h"
#include <stdio.h>
#include <limits.h>
#include <string.h>

void main(int args, char *argv[])
{
    struct SafeResult result;
    struct SafeResult temp;
    int num1, num2;
    temp = safestrtoint(argv[1]);
    if(temp.errorflag == 0)
    {
        num1 = temp.value;
    }
    else
    {
        printf("Incorrect numbers.\n");
        return;
    }
    temp = safestrtoint(argv[2]);
    if(temp.errorflag == 0)
    {
        num2 = temp.value;
    }
    else
    {
        printf("Incorrect numbers.\n");
        return;
    }
    result = safesubtract(num1, num2);
    if(result.errorflag == 1)
    {
        printf("The result is too high.\n");
    }
    else
    {
        printf("Result: %d\n", result.value);
    }
}