#include <stdio.h>

int main()
{

    // We can make pointer to a pointer or how much pointer we need we can make it
    int a = 10;
    int *p = &a;
    printf("%d\n", *p);

    int **q = &p;

    // (*q) that its gives us the value of q pointer that is the location of a;
    printf("%d\n", *q);
    printf("%d\n", **q);
    // (**q) that its gives us the value of a;

    return 0;
}