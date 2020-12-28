#include <stdio.h>

int main()
{

    int a = 3;
    // Pointer variable syntax
    int *b = &a;
    // * Dereference Operator
    // & Address of operator
    // every variable allocated a location in RAM (& addressof operator) give us that location
    printf("The address of a is %d\n", &a);
    printf("The address of b is %d\n", b);

    // * (value at) Dereference operator
    printf("The value at address b is %d\n", *b);
    return 0;
}