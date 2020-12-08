#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Enter value A ");
    scanf("%d", &a);
    printf("Enter value B ");
    scanf("%d", &b);
    printf("Enter value C ");
    scanf("%d", &c);

    if (a > b || a > c)
    {
        printf(
            "A is greter then b & c");
    }
    else if (b > c)
    {
        printf(
            "B is greter then c & c");
    }

    else
    {
        printf("C is greter then a & b");
    }

    return 0;
}