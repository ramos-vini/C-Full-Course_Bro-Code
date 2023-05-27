#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int answer = rand() % 100 + 1;
    int guess;
    int guesses = 0;

    printf("Number Guessing Game!\n\n");

    do
    {
        printf("Pick a number between 1-100:");
        scanf("%d", &guess);
        guesses++;

        if (guess > answer)
        {
            printf("Too high!\n");
        }
        else if (guess != answer)
        {
            printf("Too low!\n");
        }

    } while (guess != answer);

    printf("\nCORRECT!\n");
    printf("\n**************\n");
    printf("Answer: %d\n", answer);
    printf("Guesses: %d\n", guesses);
    printf("**************");

    return 0;
}