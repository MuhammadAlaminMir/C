#include <stdio.h>

int main()
{
    printf("\n");
    // when we conver a data to another type data that time its call type convertion
    // we have two type of convertion
    // 1. Implosive  2. expletive

    // Implosive conversion
    char ch = 'T';
    int r = ch + 100;
    printf("%c \t %d \t %x\n", ch, ch, ch);
    printf("Result:\n");
    printf("%d \t %x\n", r, r, r);

    // expletive conversion

    int result = (short)ch + 100;
    printf("Result2:\n");
    printf("%d \t %x\n", result, result);

    // float f = result;

    printf("float: %f\n", (float)result);

    float a = 4.5;
    float b = 5.3;
    float c = 6.2;

    int result3 = (int)a + (int)b + (int)c;
    printf("Total : %d\n", result3);

    return 0;
}