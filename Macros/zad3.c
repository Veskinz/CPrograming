#include <stdio.h>
#define DEBUG(VAR) printf("%s = %d, File: %s, Line: %d", #VAR, VAR, __FILE__, __LINE__)

int main()
{
    int myVar = 4;
    DEBUG(myVar);
}