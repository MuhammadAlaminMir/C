#include <stdio.h>

int main(void)
{
    short i, j, rows = 5;
    scanf("%hi", &rows);

    //  Half Pyramid

    // for (i = 0; i <= rows; i++)
    // {
    //     for (j = 0; j <= i; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf(" \n");
    // }
    // printf("\n");
    // Full Pyramid

    // for (i = 0; i < rows; i++)
    // {
    //     for (short space = i; space <= rows; space++)
    //     {
    //         printf(" ");
    //     }
    //     for (j = 0; j <= i; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // Reverse full pyramid

    for (i = 0; i < rows; i++)
    {
        for (short space = 0; space <= i; space++)
        {
            printf(" ");
        }
        for (j = rows - 1; j >= i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}