#include <stdio.h>

int main()
{

    // we can perform arithmetic operaton using pointer. like:
    int a = 10;
    int *aptr = &a;
    printf("%d\n", aptr);

    // its increment the value of the pointer variable.
    // we know that int take 4 bytes.
    // thats why when increment or decrement pointer variable its change the value of the pointer variable throw data type size
    aptr++;
    printf("%d\n", aptr);
    aptr--;
    printf("%d\n", aptr);

    return 0;
}