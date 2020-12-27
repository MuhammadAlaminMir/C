#include <stdio.h>

int sum(int a, int b)
{
    // we can return a value into the function but we have to with that data type which we want to return
    //  or else we didn't get correct result.
    int res = a + b;
    return res;
}
int main()
{
    // when we get a value from the function we have to store it into a variable

    int res = sum(20, 25);
    printf("res = %d\n", res);

    return 0;
}