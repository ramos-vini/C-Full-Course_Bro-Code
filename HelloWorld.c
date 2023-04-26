#include <stdio.h>

int main(){

    int age = 21;
    float gpa = 2.05;
    char grade = 'C';
    char name[] = "Bro";

    printf("Hello, %s!\n", name);
    printf("You are %d years old\n", age);
    printf("Your average grade is %c\n", grade);
    printf("And your gpa is %0.2f\n", gpa);
    return 0;
}