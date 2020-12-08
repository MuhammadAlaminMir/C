#include <stdio.h>

int main(void)
{
    short row, colum;
    scanf("%hi %hi", &row, &colum);
    for (short i = 1; i <= row; i++)
    {
        printf("\n");
        for (short j = 1; j <= colum; j++)
        {
            printf("* ");
        }
    }

    return 0;
}
