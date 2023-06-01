#include <stdio.h>

int main()
{
    char x = 'X';
    char y = 'Y';

    printf("\nSize of 'x': %d bytes\n", sizeof(x));
    printf("Memory Address of 'x': %p\n", &x);

    printf("\nSize of 'y': %d bytes\n", sizeof(y));
    printf("Memory Address of 'y': %p\n", &y);

    return 0;
}