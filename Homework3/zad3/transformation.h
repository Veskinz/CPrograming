#ifndef GUARD
#define GUARD


struct Transformation {
    long result;
    char error[100];
};

struct Transformation transformString(char string[], int size);

#endif