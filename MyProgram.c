#include <stdio.h>
#include <math.h>

int main(){

    double n1, n2;
    char op;
    double result;

    printf("\nCalculator Program\n");
    printf("\nType in the first number:\n");
    scanf("%lf",&n1);

    printf("Type in the operator sign ('+', '-', '*' or '/'):\n");
    scanf("%s",&op);

    printf("Type in the second number:\n");
    scanf("%lf",&n2);

    switch (op)
    {
    case '+':
        result = n1 + n2;
        break;
    
    case '-':
        result = n1 - n2;
        break;

    case '*':
        result = n1 * n2;
        break;

    case '/':
        result = n1 / n2;
        break;

    default:
        break;
    }

    printf("\n%lf %c %lf = %lf\n", n1, op, n2, result);

    return 0;
}