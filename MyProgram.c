#include <stdio.h>
#include <math.h>

void hello(char[], int); // Function Prototype

int main(){

    hello("Vini", 21);
    
    return 0;
}

void hello(char name[], int age){
    printf("\nHello %s, you are %d years old.\n", name, age);
}