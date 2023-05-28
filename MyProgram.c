#include <stdio.h>
#include <string.h>

int main()
{
    char questions [][100] =
        {
            "1. What year did the C language debut?",
            "2. Who is credited with creating C?",
            "3. What is de predecessor of C?"};

    char options [][4][25] = {
        {"a) 1969", "b) 1972", "c) 1985", "d) 1999"},
        {"a) Dennis Ritchie", "b) Nikola Tesla", "c) John Carmack", "d) James Gosling"},
        {"a) Objective C", "b) B", "c) C++", "d) C#"}};

    char answers[] = {'B', 'A', 'B'};

    char guesses[sizeof(answers) / sizeof(answers[0])];

    printf("Quiz Time!\n");
    int points = 0;

    for (int i = 0; i < sizeof(questions) / sizeof(questions[0]); i++)
    {
        printf("\n%s\n\n", questions[i]);

        for (int j = 0; j < sizeof(options[j]) / sizeof(options[j][0]); j++)
        {
            printf("%s\n", options[i][j]);
        }

        scanf(" %c", &guesses[i]);

        guesses[i] = toupper(guesses[i]);

        if (guesses[i] == answers[i])
        {
            points++;
        }
    }

    printf("\nYou did %d/3!\n", points);
    printf("Your guesses: ");
    for (int i = 0; i < sizeof(guesses) / sizeof(guesses[0]); i++)
    {
        printf("%c ", guesses[i]);
    }

    printf("\nAnswers: ");
    for (int i = 0; i < sizeof(answers) / sizeof(answers[0]); i++)
    {
        printf("%c ", answers[i]);
    }

    return 0;
}