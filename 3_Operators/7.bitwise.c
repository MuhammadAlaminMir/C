#include <stdio.h>

int main(void)
{
    unsigned char a = 12;
    unsigned char b = 25;
    /* 
    Bitwise And Operator
    12 -> 0 0 0 0 1 1 0 0
    25 -> 0 0 0 1 1 0 0 1
    & ->  0 0 0 0 1 0 0 0 = (8)dec
*/

    unsigned char c = a & b;
    printf("AND Operation - %d\n", c);

    /* 
    Bitwise Or Operator
    12 -> 0 0 0 0 1 1 0 0
    25 -> 0 0 0 1 1 0 0 1
    |  -> 0 0 0 1 1 1 0 1 = (29)dec
    */
    unsigned char d = a | b;
    printf("OR Operation - %d\n", d);

    /*
    Bitwise XOR Operator
    12 -> 0 0 0 0 1 1 0 0
    25 -> 0 0 0 1 1 0 0 1
    ^  -> 0 0 0 1 0 1 0 1 = (21)dec
    */
    unsigned char e = a ^ b;
    printf("XOR Operation - %d\n", e);

    /* 
    Bitwise Complement Operator
    
    25 -> 0 0 0 1 1 0 0 1
    ~  -> 1 1 1 0 0 0 1 0 = (230)dec
    */
    unsigned char f = ~b;
    printf("Complement Operation - %d\n", f);

    /* 
    Right Shift 
    212 -> 1 1 0 1 0 1 0 0
    >>1 -> 0 1 1 0 1 0 1 0  (106)dec
    >>2 -> 0 0 1 1 0 1 0 1  (53)dec
    >>3 => 0 0 0 1 1 0 1 0  (26)dec
     */

    unsigned char rs1 = 212 >> 1;
    unsigned char rs2 = 212 >> 2;
    unsigned char rs3 = 212 >> 3;
    printf("Right Shift 1 - %d\n", rs1);
    printf("Right Shift 2 - %d\n", rs2);
    printf("Right Shift 3 - %d\n", rs3);

    /* 
    Left Shift 
    212 -> 1 1 0 1 0 1 0 0
    <<1 -> 1 1 0 1 0 1 0 0 (168)dec
    <<2 -> 1 1 0 1 0 1 0 0 (80)dec
    <<3 => 1 1 0 1 0 0 0 0 (160)dec
     */

    unsigned char ls1 = 212 << 1;
    unsigned char ls2 = 212 << 2;
    unsigned char ls3 = 212 << 3;
    printf("Left Shift 1 - %d\n", ls1);
    printf("Left Shift 2 - %d\n", ls2);
    printf("Left Shift 3 - %d\n", ls3);

    return 0;
}