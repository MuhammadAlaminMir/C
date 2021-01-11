/* 
File Handling is the storing of data in a file using a program. In C programming language,
 the programs store results, and other data of the program to a file using file handling in C.
 Also, we can extract/fetch data from a file to work with it in the program.
 
 * In c programming file is a place on disk where a group of related data is stored.
 * File is structure which is stored in stdio.h header
 The operations that you can perform on a File in C are −

    Creating a new file

    Opening an existing file

    Reading data from an existing file

    Writing data to a file

    Moving data to a specific location on the file

    Closing the file

    Functions to write something in a file (fputc(), fputw(), fputs(), fprintf(), fwrite()) 
    Functions to read something in a file (fgetc(), fgetw(), fgets(), fscanf(), fread()) 

    Opening file have some modes:
   
    Mode	Meaning of Mode             During Inexistence of file
    
     r	    Open for reading.	        If the file does not exist, fopen() returns NULL.
     rb	    Open for reading 
            in binary mode.	            If the file does not exist, fopen() returns NULL.
     w	    Open for writing.	        If the file exists, its contents are overwritten.
                                        If the file does not exist, it will be created.
     wb	    Open for writing
            in binary mode.	            If the file exists, its contents are overwritten.
                                        If the file does not exist, it will be created.
     a	    Open for append.            If the file does not exist, it will be created.
            Data is added to the 
            end of the file.	        
     ab	    Open for append             Data is added to the end of the file.	If the file does not exist, it will be created.
                 in binary mode.
            in binary mode. Data is added to the end of the file.	If the file does not exist, it will be created.
     r+	Open for both reading and writing.	If the file does not exist, fopen() returns NULL.
     rb+	Open for both reading and writing in binary mode.	If the file does not exist, fopen() returns NULL.
     w+	Open for both reading and writing.	If the file exists, its contents are overwritten.
     
     				If the file does not exist, it will be created.
     wb+	Open for both reading and writing in binary mode.	If the file exists, its contents are overwritten.
     
     				If the file does not exist, it will be created.
     a+	Open for both reading and appending.	If the file does not exist, it will be created.
     ab+	Open for both reading and appending in binary mode.	If the file does not exist, it will be created.

*/

#include <stdio.h>

int main()
{
    // Creating or Opening a text file

    FILE *file;
    file = fopen("test.text", "w");

    if (file == NULL)
    {
        printf("File doesn't exist \n");
    }
    else
    {
        printf("File is opened \n");
        fclose(file);
    }

    return 0;
}
