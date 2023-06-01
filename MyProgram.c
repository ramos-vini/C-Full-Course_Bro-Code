#include <stdio.h>

void myFunction(int *pointer){
    printf("Value printed in myFunction(): %d\n", *pointer);
}

int main()
{
    int age = 21;

    int *pAge = &age;
    // int *pAge = NULL;
    // pAge = &age;

    printf("Address stored in pAge: %p\n", pAge);
    printf("Value stored in pAge's address: %d\n", *pAge);

    myFunction(pAge);

    return 0;
}