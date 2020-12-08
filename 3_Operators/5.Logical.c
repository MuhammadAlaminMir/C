#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    /* 
    logical And :
    
     A      B       result
    true    False   false
    false   true    false
    false   false   false
    true    true    true

    Logical Or : 
    A       B       result
    true    false   true
    false   true    true
    true    true    true
    false   false    false


 */

    bool have_nid = false;
    bool has_passport = true;
    bool has_Identity = true;
    bool is_adult = true;

    bool is_permitted = have_nid || has_passport;

    printf("permission - %d \n", is_permitted);

    return 0;
}