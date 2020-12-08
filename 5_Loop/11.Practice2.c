#include <stdio.h>

int main(void)
{
    char name[30];

    printf("Enter A string: ");
    fgets(name, 30, stdin);

    for (short i = 0; name[i]; i++)
    {
        if (name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i] = name[i] + 32;
        }
    }
    printf("Output: %s\n", name);

    return 0;
}