#include <stdio.h>

void swap_pointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 4, b = 5;
    // Call by value
    printf("The value of a is %d\n", a, " The value of b is %d\n", b);
    swap(a, b);
    printf("The value of a is %d\n", a, " The value of b is %d\n", b);
    // Call by reference
    printf("The value of a is %d\n", a, " The value of b is %d\n", b);
    swap_pointer(&a, &b);
    printf("The value of a is %d\n", a, " The value of b is %d\n", b);

    return 0;
}