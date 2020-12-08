#include <stdio.h>

// floting data
// floting data didn't have any signed or unsigned formula. hare all signed.

int main(void)
{

    // we have 3 different of floting data
    // type of int:  format spacifire:     range:
    // float          %f                    floating data range is like int data
    // double         %lf
    // long double    %Lf

    // float
    // we have to add f or F at last of the float data so that compiler understand this a float data

    float f = 489.123f;
    printf("I am float data - %f\n");

    // Double
    double d = 3434234.34;
    printf("I am long double - %lf\n", d);

    // long Double
    long double ld = 23424234234234.33;
    printf("I am long double - %Lf\n", ld);

    return 0;
}