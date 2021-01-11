#include <stdio.h>
#include <string.h>
int main()
{

    FILE *file;
    char name[20] = "Alamin";
    int length = strlen(name);
    file = fopen("test.text", "w");

    if (file == NULL)
    {
        printf("File doesn't exist \n");
    }
    else
    {
        printf("File is opened \n");
        for (short i = 0; i < length; i++)
        {
            fputc(name[i], file);
        }
        printf("File is written successfully \n");
        fclose(file);
    }

    return 0;
}
