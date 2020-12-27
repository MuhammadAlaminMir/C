// When a function call its self to make the problem smaller and didn't stop until the end point comes
// that time its call recursive function.

#include <stdio.h>

//  factorial using recursive function
// int factorial(int n)
// {
//     if (n <= 1)
//     {
//         return 1;
//     }
//     return n * factorial(n - 1);
// }

// Fibonacci sequence using recursive function
int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}

int main()
{
    int n;
    printf("Give us the chosen Number ");
    scanf("%d", &n);
    // printf( "The factorial of " , n , " is " , factorial(n)) ;
    printf("The fibonacci at prosition ", n, " is ", fib(n));

    return 0;
}