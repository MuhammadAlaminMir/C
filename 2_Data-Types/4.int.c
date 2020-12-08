// All about integer data
// we have two diffrent type of int data
// 1.signed 2. unsigned
#include <stdio.h>

int main(void)
{

    printf("Signed Int: \n\n");

    // signed int data
    // we can store any kind of data (- or +) in signed int
    // we have 4 diffrent type of signed data
    // type of int:   format spacifire:     range:
    // 1. short         %d or %hi           -32,768 to 32,767
    // 2. int           %d or %i            -2,147,483,648 to 2,147,483,647 (its not fixed. it can vari some time)
    // 3. long          %ld, %li            -2,147,483,648 to 2,147,483,647 (almost same to int. but long int is fixed.)
    // 4. long long     %lld, %lli          -(2^63) to (2^63)-1
    // when we working with signed int type data we didn't have to add anything in front of it.

    // short
    short a = 45;
    printf("I am short - %hi\n", a);

    // int
    int b = 1000;
    printf("I am int - %d\n", b);

    // long
    // we have to add l or L at last of the float data so that compiler understand this a long data

    long c = 152000l;

    printf("I am long - %li\n", c);

    // long long
    // we have to add ll or LL at last of the float data so that compiler understand this a long long data

    long long d = 1502000ll;
    printf("I am long long - %lld\n", d);
    printf("\n");
    // Octal int - %o
    // Octal is 8 based number

    int o = 07777;
    // printf("I am Octal - %o\n", o);
    // printf("I am decimal of Octal - %d\n", o);

    // Hexadecimal Int - %x, %X

    int h = 0xfff;
    // printf("I am hexadecimal - %x\n", h);
    // printf("I am Octal of decimal - %d\n", h);

    // Unsigned int data

    printf("Unsigned Int: \n\n");

    // we can store only positive number into unsigned
    // we have 4 diffrent type of signed data
    // type of int:         format spacifire:     range:
    // 1. unsigned short          %hu             0 to 65535
    // 2. unsigned int            %u              0 to 4,294,967,295
    // 3. unsigned long           %lu             0 to 4,294,967,295 (same as signed)
    // 4. unsigned long long     %llu             0 to 18,446,744,073,709,551,615
    // when we working with unsigned int type data we  have to add unsigned in front of it.

    // short
    unsigned short uh = 45;
    printf("I am unsigned short - %hu\n", uh);

    // unsigned int
    unsigned int ui = 1000;
    printf("I am unsigned int - %d\n", ui);

    // unsigned long
    unsigned long ul = 152000l;
    printf("I am unsigned long - %lu\n", ul);

    // unsigned long long
    unsigned long long ull = 1502000ll;
    printf("I am unsigned long long - %lld\n", ull);

    return 0;
}
