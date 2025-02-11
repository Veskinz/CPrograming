#include "quadraticroots.h"
#include <stdio.h>
#include <math.h>

struct QuadraticRootsResult findroots(long double a, long double b, long double c)
{
    struct QuadraticRootsResult result;
    long double discriminant = (b*b) - (4*a*c);
    if(discriminant < 0)
    {
        result.norealroots = 1;
    }
    else
    {
        result.x1 = (-1*b + sqrtl(discriminant)) / (2*a);
        result.x2 = (-1*b - sqrtl(discriminant)) / (2*a);
        result.norealroots = 0;
    }
    return result;
};

void display_result(struct QuadraticRootsResult result)
{
    if(result.norealroots == 1)
    {
        printf("No real roots\n");
    }
    else
    {
        printf("x1 = %Lf, x2 = %Lf\n", result.x1, result.x2);
    }
}

int main()
{
    struct QuadraticRootsResult result;
    result = findroots(1, -3, 2);
    printf("Testing with int arguments:\n");
    display_result(result);
    result = findroots(1.0f, -3.2f, 2.0f);
    printf("Testing with float arguments:\n");
    display_result(result);
    result = findroots(27, -75.6, 0.01);
    printf("Testing with double arguments:\n");
    display_result(result);
    return 0;
}