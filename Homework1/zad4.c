#include <stdio.h>
#include <string.h>
#define COMMAND(NAME, TYPE) TYPE ## _ ## NAME ## _command
#define DEFINE_COMMAND(NAME, TYPE) void COMMAND(NAME, TYPE)(void)

DEFINE_COMMAND(sayHello, internal) {
    printf("%s", "Hello!\n");
}

DEFINE_COMMAND(sayBye, internal) {
    printf("%s", "Bye!\n");
}

int main()
{
    internal_sayHello_command();
    internal_sayBye_command();
}