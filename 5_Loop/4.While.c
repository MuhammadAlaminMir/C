#include <stdio.h>
// when we didn't have any specific number to replete that time we use while loop

int main(void)
{

    // int a = 0;

    // while (a < 10)
    // {
    //     printf("a = %d\n", a);
    //     a++;
    // }

    // While loop usecase ex:

    short a, b;
    char ch = 'c';

    while (ch != 'q')
    {
        printf("Enter Two Number: ");
        scanf("%hi %hi", &a, &b);
        printf("Result = %hi\n", a + b);

        printf("Type c to run again. Type q to quit: ");
        scanf(" %c", &ch);
    }

    return 0;
}