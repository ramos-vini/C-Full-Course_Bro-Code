#include <stdio.h>
#include <string.h>

int main()
{
    char cars[][10] = {"Mustang", "Corvette", "Camaro"};

    // cars[0] = "Tesla" --> Doesn't work!
    strcpy(cars[0], "Tesla");

    for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }

    printf("---------\n");

    char letters[][3][4] = {{"abc", "def", "ghi"}, {"jkl", "mno", "pqr"}, {"stu", "vws", "yzz"}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%s ", letters[i][j]);
        }
        printf("\n");
    }

    return 0;
}