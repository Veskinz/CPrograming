#include "quadraticroots.h"
#include <stdio.h>
#include <math.h>

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
    result = findroots(1.0f, -3.0f, 2.0f);
    printf("Testing with float arguments:\n");
    display_result(result);
    result = findroots(1.0, -2.0, 1.0);
    printf("Testing with double arguments:\n");
    display_result(result);
    return 0;
}