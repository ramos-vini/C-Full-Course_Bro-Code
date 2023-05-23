#include <stdio.h>
#include <string.h>

int main(){

    char string1[] = "Vini";
    char string2[] = "Ramos";

    strnset(string2, 'X', strlen(string1));

    printf("Result: %s", string2); 
    
    return 0;
}