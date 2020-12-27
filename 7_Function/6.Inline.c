#include <stdio.h>

// inline function helps us make our program very efficient
// But when function recursion hepends or we are using static variables that time we don't  use it.
inline int product(int a, int b)
{
    return a + b;
}
int main()
{

    int a, b;
    printf("Enter the value of a and b ");
    scanf("%d %d", &a, &b);
    printf("The produnct of a and b is %d\n", product(a, b));
    printf("The produnct of a and b is %d\n", product(a + 2, b));
    printf("The produnct of a and b is %d\n", product(a, b + 2));
    printf("The produnct of a and b is %d\n", product(a, b));
    printf("The produnct of a and b is %d\n", product(a + 2, b));

    return 0;
}