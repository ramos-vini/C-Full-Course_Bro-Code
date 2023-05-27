#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int random= rand() % 6 + 1;

    printf("%d", random);

    return 0;
}