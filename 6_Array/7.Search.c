// Linier Search

#include <stdio.h>

int main()
{
    int rolls[] = {
        0,
        1,
        2,
        3,
        4,

        6,
        7,
        8,
        9,
    };
    int length = sizeof(rolls) / sizeof(rolls[0]);
    int search_key, isFound = 0;

    // User Input Input
    printf("Enter search_key: ");
    scanf("%d", &search_key);

    // Search

    for (int i = 0; i < length; i++)
    {
        if (rolls[i] == search_key)
        {
            printf("Item Found at index %d\n", i);
            // return 0;
            isFound = 1;
            break;
        }
    }
    if (isFound == 0)
    {
        printf("Item Not Found\n");
    }

    return 0;
}