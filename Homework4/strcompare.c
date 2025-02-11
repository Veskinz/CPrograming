#include "mystrings.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    if(argc == 3)
    {
        strcompare(argv[1], argv[2]);
    }
    else
    {
        printf("Enter 2 strings");
        return 0;
    }
}