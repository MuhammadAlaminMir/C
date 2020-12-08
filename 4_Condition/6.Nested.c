#include <stdbool.h>
#include <stdio.h>
int main(void)
{
    // when we use a condition into a condition that time its called nested condition.

    int age = 18;
    bool has_nid = true;
    bool has_pass = false;
    // printf("%d", (int)sizeof(has_pass));
    if (age >= 18)
    {
        if (has_nid || has_pass)
        {
            printf("You are allowed\n");
        };
    }
    else
    {
        printf("You are not allowed");
    }

    return 0;
}