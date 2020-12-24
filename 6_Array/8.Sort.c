// Array Sorting

#include <stdio.h>

int main()
{
    int numbers[] = {0, 4, 5, 6, 11, 12, 1, 2, 3, 7, 8, 9, 10, 13};
    // Accending Order Sorting
    int length, i, temp, j;
    length = sizeof(numbers) / sizeof(numbers[0]);

    for (i = 0; i < length; i++)
    {
        for (j = 0; j < length; j++)
        {
            if (numbers[i] < numbers[j])
            {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    for (i = 0; i < length; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    // Decending Order Sorting
    for (i = 0; i < length; i++)
    {
        for (j = 0; j < length; j++)
        {
            if (numbers[i] > numbers[j])
            {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    for (i = 0; i < length; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}