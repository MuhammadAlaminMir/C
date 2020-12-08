// We can print or traverse all the element in an array with the help of loop
#include <stdio.h>

int main()
{
    // Array Declaration:
    int my_array[5];
    my_array[0] = 10;
    my_array[1] = 11;
    my_array[2] = 12;
    my_array[3] = 13;
    my_array[4] = 14;
    // printf("%hi\n", my_array[0]);
    // printf("%hi\n", my_array[1]);
    // printf("%hi\n", my_array[2]);
    for (short i = 0; i <= 4; i++)
    {
        printf("%hi\n", my_array[i]);
    }

    return 0;
}