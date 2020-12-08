
#include <stdio.h>

int main()
{

    int my_array[30];
    my_array[0] = 10;
    my_array[1] = 11;
    my_array[2] = 12;
    my_array[3] = 13;
    my_array[4] = 14;

    printf("%u\n", (unsigned int)&my_array);
    printf("%u\n", (unsigned int)&my_array[0]);
    printf("%u\n", (unsigned int)&my_array[1]);
    printf("%u\n", (unsigned int)&my_array[2]);
    printf("%u\n", (unsigned int)&my_array[3]);
    printf("%u\n", (unsigned int)&my_array[4]);
}