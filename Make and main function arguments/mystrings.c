#include "mystrings.h"
#include <stdio.h>
#include <string.h>

void strlength(char string[])
{
    printf("Length: %d\n", strlen(string));
}

void strconcat(char string1[], char string2[])
{
    char str1[100];
    strcat(str1, string1);
    strcat(str1, string2);
    printf("String 1: %s, String 2: %s\n", str1, string2);
}

void strcompare(char string1[], char string2[])
{
    short result = strcmp(string1, string2);
    printf("Result: %hd", result);
}