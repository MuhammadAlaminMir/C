#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    time_t t;
    srand((unsigned)time(&t));
    int given_number, chance = 3;
    int lucky_number = rand() % 10 + 1;

    while (chance > 0)
    {
        printf("Guess the lucky number: ");
        scanf("%d", &given_number);
        if (lucky_number == given_number)
        {
            printf("Congratulation: You have choose the correct number\n");
            break;
        }
        else
        {
            if (chance == 1)
            {
                printf("You have lose!\n");
                printf("The lucky number is: %d\n", lucky_number);
            }
            else
            {
                printf(" Ops! Please try again\n");
            }
        }
        chance--;
        if (chance > 0)
        {
            printf("You have chance left: %d\n", chance);
        }
    }

    return 0;
}