#include <stdio.h>
#include <string.h>

int main()
{
    struct Player{
        char name[15];
        int score;
    };

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Billy");
    player1.score = 70;

    strcpy(player2.name, "Johnny");
    player2.score = 80;

    printf("Name: %s\nScore: %d\n\n", player1.name, player1.score);
    printf("Name: %s\nScore: %d\n\n", player2.name, player2.score);

    return 0;
}