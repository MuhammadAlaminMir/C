#include <stdio.h>

int main()
{

    int score[5];
    score[0] = 10;
    score[1] = 11;
    score[2] = 12;
    score[3] = 13;
    score[4] = 14;

    // calculate sum:
    int sum = 0;
    for (short i = 0; i <= 4; i++)
    {
        sum += score[i];
    }
    printf("Sum: %d\n", sum);

    //  Find Average score
    printf("Average Score = %d\n", sum / 5);

    // Find Highest Score
    int highest = score[0];
    for (short i = 1; i <= 4; i++)
    {
        if (highest < score[i])
        {
            highest = score[i];
        }
    }
    printf("highest Number: %d\n", highest);

    return 0;
}