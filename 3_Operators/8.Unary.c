#include <stdio.h>

int main(void)
{
    int a = 23;
    a++;
    printf("PostIncrement a = %d \n", a); // a = 24
    ++a;
    printf("PreIncrement a = %d \n", a); // a = 25

    a--;
    printf("PostDecrement a = %d \n", a); // a = 24
    --a;
    printf("PreDecrement a = %d \n", a); // a = 23

    return 0;
}