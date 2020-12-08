#include <stdbool.h>
#include <stdio.h>

int main(void)
{

    int a = 35;
    int b = 30;

    bool a_is_greater = a > b;
    printf("A is greater then B - %d\n", a_is_greater); //1 or true

    bool a_is_smaller = a < b;
    printf("A is smaller then B - %d\n", a_is_smaller); //0 or false

    bool a_is_b = a == b;
    printf("A is B - %d\n", a_is_b); // 0 or false

    bool a_is_not_b = a != b;
    printf("A is not = B - %d\n", a_is_not_b); // 1 or true

    int c = 10;
    int d = 10;

    bool c_is_greater = c > d;
    printf("C is greater then D - %d\n", c_is_greater); // 0

    bool c_is_greater_equal = c >= d;
    printf("C is greater then D - %d\n", c_is_greater_equal); // 1

    bool d_is_greater = d > c;
    printf("D is greater then c - %d\n", d_is_greater); // 0

    bool d_is_greater_equal = d >= c;
    printf("D is greater then c - %d\n", d_is_greater_equal); // 1

    return 0;
}