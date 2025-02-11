#ifndef GUARD
#define GUARD
struct SafeResult
{
    int value;
    int errorflag;
};
    struct SafeResult safeadd(int num1, int num2);
    struct SafeResult safesubtract(int num1, int num2);
    struct SafeResult safemultiply(int num1, int num2);
    struct SafeResult safedivide(int num1, int num2);
    struct SafeResult safestrtoint(char string[]);

#endif