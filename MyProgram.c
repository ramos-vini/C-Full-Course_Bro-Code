#include <stdio.h>
#include <math.h>

int main(){

    float r;
    printf("Enter the circle radius: ");
    scanf("%f", &r);

    const float PI =  3.14;
    
    float circumference = 2*PI*r;
    float area = PI*pow(r,2);

    printf("\nThe circle circunference is: %fm", circumference);
    printf("\nThe circle area is: %fm2", area);

    return 0;
}