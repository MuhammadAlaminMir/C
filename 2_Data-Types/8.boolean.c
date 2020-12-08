#include <stdio.h>
#include <stdbool.h>

int main(){
    // By defult C didn't have any boolean data type 
    // c use 0 or 1 to define a boolean data 
    // we can use third party libary to work directly with boolean data

    printf("\n");

    short is_logged_in = 0;
   bool is_loggedIn =  true;

    if (is_logged_in)
    {
        printf("User logged In \n");
    }else{
        printf("User Logged Out\n");
    };

    if (is_loggedIn)
    {
        printf("User logged In \n");
    }else{
        printf("User Logged Out\n");
    };
    

    return 0;
}