#include <stdio.h>

int main(void)
{
    // Assignment operators => = += -= *= /= %=

    int a = 10;
    a += 5;
    printf("%d\n", a);

    a -= 5;
    printf("%d\n", a);

    a *= 5;
    printf("%d\n", a);

    a /= 5;
    printf("%d\n", a);

    a %= 5;
    printf("%d\n", a);
    return 0;
}