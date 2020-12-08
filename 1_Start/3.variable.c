// A variable is nothing but a name given to a storage area that our programs can manipulate
// A Variable is a (container), to; (contain): data (number, text etc)
// When we need a container that time we use variable
// variable means the value will vary
// when we use variable we can set data dynamically
// variable make a space in RAM randomly
// variable name use for identify the variable

#include <stdio.h>

// in c variable type are defendent in two thing
// 1 : scope
// into 2 carly brackets are called scope
// when we create any block and into that declare any variable that variable called scope variable
//
// in c programming we have 2 type variable depends on scope {
// 1. global variable
//  we can use global variable from anywhere

// 2. local variable
// local variable only usable from its scope
// }

// 2: memory lifetime {
// when we learn about memory allocation that time we explore that inshallah
// 1.static
// static variable like local variable

// 2. automatic
// its also like local variable
//}

// And finally we also have external variable
// this variable is a shearable variable

int main()
{
    // when we make a variable that time we do two things
    // 1. define a variable
    // define means we have created a space for variable (it can be nan)
    // 2. declare a variable
    // declare means we assign their a data

    // Like:

    int c;
    // we can define one time
    c = 10;
    // but we can change the value unlimited time
    c = 500;

    // varable declaration
    // Data type, varable name = value

    // integer type variable:
    int my_int_variable = 45;
    // printf("my_int_variable + 5 = %d\n", my_int_variable + 5);
    // printf("my_int_variable - 5 = %d\n", my_int_variable - 5);
    // printf("my_int_variable * 5 = %d\n", my_int_variable * 5);
    // printf("my_int_variable / 5 = %d\n", my_int_variable / 5);
    // printf("my_int_variable = %d\n", my_int_variable);

    // dynamicly uses of variable
    int a = 10;
    int b = 20;

    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d \n", c);
    //

    return 0;
}