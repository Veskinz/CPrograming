#include "mystrings.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    if(argc == 2)
    {
        strlength(argv[1]);
    }
    else
    {
        printf("Enter 1 string");
        return 0;
    }
}