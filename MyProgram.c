#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    // Initializing the empty tictactoe matrix
    char *tictac[3][3];

    for (int i = 0; i < sizeof(tictac) / sizeof(tictac[0]); i++)
    {
        for (int j = 0; j < sizeof(tictac[0]) / sizeof(tictac[0][0]); j++)
        {
            tictac[i][j] = ' ';
        }
    }

    // Initializing the game
    bool gameOver = false;
    int player = 1;

    // callGameOver(player, tictac);

    while (!gameOver)
    {
        // Printing the game table
        for (int i = 0; i < sizeof(tictac) / sizeof(tictac[0]); i++)
        {
            if (i == 0)
            {
                printf("\n");
            }

            for (int j = 0; j < sizeof(tictac[0]) / sizeof(tictac[0][0]); j++)
            {
                switch (j)
                {
                case 1:
                    printf("| %c |", tictac[i][j]);
                    break;

                default:
                    printf(" %c ", tictac[i][j]);
                    break;
                }
            }

            if (i < sizeof(tictac) / sizeof(tictac[0]) - 1)
            {
                printf("\n---|---|---\n");
            }
            else
            {
                printf("\n\n");
            }
        }

        // Player Input
        // TODO: Verify if slot is empty
        char symbol = player == 1 ? 'X' : 'O';

        int row, col;
        do{
        printf("Player %d's turn!\n", player);
        printf("\nInsert a row [1-3]: ");
        scanf("%d", &row);
        row--;
        printf("Insert a column [1-3]: ");
        scanf("%d", &col);
        col--;

        if(tictac[row][col] != ' '){
            printTable(tictac);
            printf("*Unavailable position!*\n\n");
        }
        } while (tictac[row][col] != ' ');

        tictac[row][col] = symbol;

        // Game Over checking

        // full row: [i][0], [i][1], [i][2]
        for (int i = 0; i < sizeof(tictac) / sizeof(tictac[0]); i++)
        {
            int counter = 0;
            for (int j = 0; j < sizeof(tictac[0]) / sizeof(tictac[0][0]); j++)
            {
                if (tictac[i][j] == symbol)
                {
                    counter++;
                }
            }

            if (counter == 3)
            {
                gameOver = true;
                callGameOver(player, tictac);
                break;
            }
        }

        if(gameOver){
            break;
        }

        // full col: [0][j], [1][j], [2][j]
        for (int i = 0; i < sizeof(tictac) / sizeof(tictac[0]); i++)
        {
            int counter = 0;
            for (int j = 0; j < sizeof(tictac[0]) / sizeof(tictac[0][0]); j++)
            {
                if (tictac[j][i] == symbol)
                {
                    counter++;
                }
            }

            if (counter == 3)
            {
                gameOver = true;
                callGameOver(player, tictac);
                break;
            }
        }

        if(gameOver){
            break;
        }

        // diag 1: [0][0], [1][1], [2][2]
        int counterDiag1 = 0;
        for (int i = 0; i < sizeof(tictac) / sizeof(tictac[0]); i++)
        {
            for (int j = 0; j < sizeof(tictac[0]) / sizeof(tictac[0][0]); j++)
            {
                if (i == j)
                {
                    if (tictac[i][j] == symbol)
                    {
                        counterDiag1++;
                    }
                }
            }

            if (counterDiag1 == 3)
            {
                gameOver = true;
                callGameOver(player, tictac);
                break;
            }
        }

        if(gameOver){
            break;
        }

        // diag 2: [0][2], [1][1], [2][0]
        int counterDiag2 = 0;
        for (int i = 0; i < sizeof(tictac) / sizeof(tictac[0]); i++)
        {
            for (int j = 0; j < sizeof(tictac[0]) / sizeof(tictac[0][0]); j++)
            {
                if (i + j == 2)
                {
                    if (tictac[i][j] == symbol)
                    {
                        counterDiag2++;
                    }
                }
            }

            if (counterDiag2 == 3)
            {
                gameOver = true;
                callGameOver(player, tictac);
                break;
            }
        }

        if(gameOver){
            break;
        }    

        player = player == 1 ? 2 : 1;
    }

    return 0;
}

void callGameOver(int player, char *tictac[3][3])
{
    printTable(tictac);
    
    printf("\n****************");
    printf("\nPlayer %d wins!!\n", player);
    printf("****************\n");
}

void printTable(char *tictac[3][3]){

    for (int i = 0; i < sizeof(*tictac) / sizeof(*tictac[0]); i++)
    {
        if (i == 0)
        {
            printf("\n");
        }

        for (int j = 0; j < sizeof(tictac[0]) / sizeof(tictac[0][0]); j++)
        {
            switch (j)
            {
            case 1:
                printf("| %c |", tictac[i][j]);
                break;

            default:
                printf(" %c ", tictac[i][j]);
                break;
            }
        }

        if (i < sizeof(*tictac) / sizeof(*tictac[0]) - 1)
        {
            printf("\n---|---|---\n");
        }
        else
        {
            printf("\n\n");
        }
    }

}