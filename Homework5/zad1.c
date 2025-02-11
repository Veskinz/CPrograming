#include <stdio.h>
#include <limits.h>

#define PRINT printf("|%-10s|%-10s|%-10d|%-30d|%-30d|%-10s|%-30d\n","char", "%c", 1, CHAR_MAX, CHAR_MIN, "%u", UCHAR_MAX);\
printf("|%-10s|%-10s|%-10d|%-30hd|%-30hd|%-10s|%-30hu\n","short", "%hd", 2, SHRT_MAX, SHRT_MIN, "%hu", USHRT_MAX);\
printf("|%-10s|%-10s|%-10d|%-30d|%-30d|%-10s|%-30u\n","int", "%d", 4, INT_MAX, INT_MIN, "%u", UINT_MAX);\
printf("|%-10s|%-10s|%-10d|%-30ld|%-30ld|%-10s|%-30lu\n","long", "%ld", 8, LONG_MAX, LONG_MIN, "%lu", ULONG_MAX);\
printf("|%-10s|%-10s|%-10d|%-30lld|%-30lld|%-10s|%-30llu\n","long long", "%lld", 8, LLONG_MAX, LLONG_MIN, "%llu", ULLONG_MAX);\



int main() {
    PRINT
}