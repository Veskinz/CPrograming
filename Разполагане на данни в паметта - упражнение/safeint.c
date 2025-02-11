#include "safeint.h"
#include <string.h>
#include <limits.h>

struct SafeResult safeadd(int num1, int num2)
{
    struct SafeResult result;
    long long temp = (long long)num1 + num2;
    if(temp > INT_MAX || temp < INT_MIN)
    {
        result.errorflag = 1;
        return result;
    }
    result.errorflag = 0;
    result.value = temp;
    return result;
}

struct SafeResult safesubtract(int num1, int num2)
{
    struct SafeResult result;
    long long temp = (long long)num1 - num2;
    if(temp > INT_MAX || temp < INT_MIN)
    {
        result.errorflag = 1;
        return result;
    }
    result.errorflag = 0;
    result.value = temp;
    return result;
}

struct SafeResult safemultiply(int num1, int num2)
{
    struct SafeResult result;
    long long temp = (long long)num1 * num2;
    if(temp > INT_MAX || temp < INT_MIN)
    {
        result.errorflag = 1;
        return result;
    }
    result.errorflag = 0;
    result.value = temp;
    return result;
}

struct SafeResult safedivide(int num1, int num2)
{
    struct SafeResult result;
    long long temp = (long long)num1 / num2;
    if((temp > INT_MAX || temp < INT_MIN) || num2 == 0)
    {
        result.errorflag = 1;
        return result;
    }
    result.errorflag = 0;
    result.value = temp;
    return result;
}

struct SafeResult safestrtoint(char string[])
{
    struct SafeResult result;
    struct SafeResult tempMult;
    struct SafeResult tempAdd;
    result.value = 0;
    int mult = 1;
    for(int i = 0; i < strlen(string); i++)
    { 
        if(string[i] > '9' || string[i] < '0')
        {
            result.errorflag = 1;
            return result;
        }
        tempMult = safemultiply(result.value, mult);
        if(tempMult.errorflag == 1)
        {
            result.errorflag = 1;
            return result;
        }
        tempAdd = safeadd(tempMult.value, string[i] - '0');
        if(tempAdd.errorflag == 1)
        {
            result.errorflag = 1;
            return result;
        }
        result.value = tempAdd.value;
        mult = 10;
    }
    result.errorflag = 0;
    return result;
}