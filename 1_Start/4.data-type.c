// in c programming when we declare a variable we have to give it a data type or else we get error
// every data type has its size

// basic data type:
// 1. Number
// 2. Text
// 3. Boolean = in c we didn't have any boolean data type| in c integer number can be use as boolean
// 4. Custom type

// 1. Number has many data type:
// Integer (23), Float(23.23), short, double, long.

// 2. text
// C support only character & and we have to use  single cotes('') for difine this
// in character type we can give just one character

#include <stdio.h>

int main()
{
    int num = 23;
    float num2 = 23.34f;
    char chareacter = 'a';

    printf("%d\n", num);
    printf("%f\n", num2);
    printf("%c\n", chareacter);

    num = num2;
    printf("%d\n", num);
    return 0;
}