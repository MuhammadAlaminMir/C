#include <stdio.h>
// #define PI 3.1416 / one way to defile const variable

int main()
{
    // give the variable name into uppercase than other developer understand that is a const variable
    //  float PI = 3.1416;

    // other way to declare const variable
    const float PI = 3.3316;
    // PI = 35;
    printf("%f\n", PI);

    return 0;
}