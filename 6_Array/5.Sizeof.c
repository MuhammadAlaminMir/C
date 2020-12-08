#include <stdio.h>

int main()
{

    int my_array[] = {89, 82, 83, 84, 85, 86, 87};
    // printf("%d\n", sizeof(int));
    // printf("%d\n", sizeof(long));
    // printf("%d\n", sizeof(long long));
    // printf("%d\n", sizeof(short));
    // printf("%d\n", sizeof(float));

    printf("sizeof my_array : %d\n", sizeof(my_array));
    printf("sizeof my_array first element : %d\n", sizeof(my_array[0]));

    short array_length = sizeof(my_array) / 4;
    printf("array length %hi\n", array_length);

    return 0;
}