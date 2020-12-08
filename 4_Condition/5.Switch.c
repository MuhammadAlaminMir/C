#include <stdio.h>

int main(void)
{
    int day_Number;
    printf("Enter Day Number ");
    scanf(" %d", &day_Number);

    switch (day_Number)
    {
    case 0:
        printf("Today is Saturday");
        break;
    case 1:
        printf("Today is Sunday");
        break;
    case 2:
        printf("Today is Monday");
        break;
    case 3:
        printf("Today is Tuesday");
        break;
    case 4:
        printf("Today is Wednesday");
        break;
    case 5:
        printf("Today is thursday");
        break;

    case 6:
        printf("Today is Friday");
        break;

    default:
        printf("Invalid Code");
        break;
    }

    return 0;
}