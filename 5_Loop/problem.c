#include <stdio.h>

int main()
{
    int arr[10];
    int value;
    int size = 0;
    int isFound = 0;

    while (1)
    {
        printf("Enter a value : ");
        scanf("%d", &value);

        for (int i = 0; i < 10; i++)
        {
            if (arr[i] == value)
            {
                isFound = 1;
                break;
            }
        }
        if (!isFound)
        {
            arr[size] = value;
            size++;
        }
        else
        {
            printf("value already exist \n");
        }
        if (size == 10)
        {
            break;
        }
        isFound = 0;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}