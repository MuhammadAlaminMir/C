#include <stdio.h>

int main(void)
{
    int i;

    // for (i = 0; i < 100; i++)
    // {
    //     if (i == 5)
    //     {
    //         break;
    //     }
    //     printf("I = %d\n", i);
    // }

    for (i = 0; i < 100; i++)
    {
        // find odd number
        if (i % 2 == 0)
        {
            continue;
        }
        printf("I = %d\n", i);
    }

    return 0;
}