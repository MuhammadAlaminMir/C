//  In c by default we didn't have any string like js or java or python
#include <stdio.h>

int main()
{
    printf("\n");

    // C gives us some way to write a string
    // string print formater %s

    // 1.
    char name[20];
    // name [];
    name[0] = 'a';
    name[1] = 'l';
    name[2] = ' ';
    name[3] = 'a';
    name[4] = 'm';
    name[5] = 'i';
    name[6] = 'n';

    printf("%s\n", name);

    // 2.
    char friend[20] = {'M', 'y', ' ', 'f', 'r', 'i', 'e', 'n', 'd', ' ', 'i', 's', ' ', 'a', 'l', 'a', 'm', 'i', 'n'};

    printf("%s\n", friend);

    // 3.
    char friend_name[40] = "sahadat, likhon, turan, bappi";

    printf("%s\n", friend_name);

    char my_name[20];
    printf("What is your name?\n");
    scanf("%s", &my_name);
    printf("Thank you %s\n", my_name);

    return 0;
}