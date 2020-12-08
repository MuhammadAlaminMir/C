#include <stdio.h>

int main()
{
    int size = 5;
    scanf("Array length: %d", &size);

    int nums[size];
    int i, sum, avg, max;

    printf("Input \n");

    for (i = 0; i <= size; i++)
    {
        scanf("%d", &nums[i]);
    }
    printf("Output \n");
    sum = 0;
    max = nums[0];
    for (i = 0; i <= size; i++)
    {
        sum += nums[i];
        if (max < nums[i])
        {
            max = nums[i];
        }
    }
    avg = sum / sizeof(nums) / 4;
    printf("Sum : %d\n", sum);
    printf("Max Number : %d\n", max);
    printf("Avarage  : %d\n", avg);

    return 0;
}