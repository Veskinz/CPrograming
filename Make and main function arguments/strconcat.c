#include "mystrings.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    if(argc == 3)
    {
        if(strlen(argv[1]) <= 50)
        {
            strconcat(argv[1], argv[2]);
        }
        else
        {
            printf("A string can have up to 50 symbols");
        }
    }
    else
    {
        printf("Enter 2 strings");
        return 0;
    }
}