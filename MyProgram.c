#include <stdio.h>
#include <math.h>

int main(){

    double a, b, c;

    printf("\nLet's build a triangle.\nEnter the size (m) of the side A: ");
    scanf("%lf", &a);

    printf("\nNow enter side B: ");
    scanf("%lf", &b);

    c = sqrt(a*a + b*b);
    printf("\nThe side of the hypotenuse (side C) is: %.2lf", c);

    return 0;
}