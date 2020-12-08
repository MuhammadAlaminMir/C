#include <stdio.h>

int main(void)
{
    int i, j, rows = 5;
    int stars, speces;

    stars = 1;
    speces = rows - 1;

    for (i = 1; i < rows * 2; i++)
    {
        for (j = 1; j <= speces; j++)
        {
            printf(" ");
        }
        for (j = 1; j < stars * 2; j++)
        {
            printf("*");
        }
        printf("\n");
        if (i < rows)
        {
            speces--;
            stars++;
        }
        else
        {
            speces++;
            stars--;
        }
    }

    return 0;
}