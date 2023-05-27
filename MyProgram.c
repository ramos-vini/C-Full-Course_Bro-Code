#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int random= rand() % 10 + 1;
    int number;

    printf("Choose a number between 1-10:\n");
    scanf("%d", &number);

    printf("\nRandom Number: %d\n", random);
    printf("Chosen Number: %d\n", number);
    
    if(number == random){
        printf("\nCongratulations! You got it right :)");
    } else{
        printf("\nMaybe next time...");
    }

    return 0;
}