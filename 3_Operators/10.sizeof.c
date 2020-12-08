#include <stdio.h>

int main(void)
{
    char c = 'c';
    short s = 10;
    int i = 20;
    long l = 12323;

    printf("Size of char = %d byte\n", (int)sizeof(c));
    printf("Size of short = %d byte\n", (int)sizeof(s));
    printf("Size of int = %d byte\n", (int)sizeof(i));
    printf("Size of long = %d byte\n", (int)sizeof(l));
    return 0;
}