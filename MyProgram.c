#include <stdio.h>
#include <string.h>

int main(){

    char name[25];
    printf("\nHello! What's your name?");
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';

    int age;
    printf("\nHow old are you?");
    scanf("%d", &age);

    printf("\nNice to meet you, %s, you are %d years old.", name, age);

    return 0;
}