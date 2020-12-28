#include <stdio.h>

int main()
{
    // Arrays behaves almost similar like pointers.
    // array names are allready sorted the first values location.
    //
    int arr[] = {1, 2, 3, 4, 5};
    printf("%d\n", *arr);

    int *ptr = arr;
    for (int i = 0; i < 4; i++)
    {
        // printf( *ptr );
        // *ptr++;
        printf("%d\n", *(arr + i));
    }

    return 0;
}