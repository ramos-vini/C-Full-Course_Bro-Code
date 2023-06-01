#include <stdio.h>

int main()
{
    int x = 12; // x = 0001100
    int y = 6; // y = 00000110
    int z = x ^ y; // z = 00001010

    z = z << 1; // z = 00010100

    printf("%d", z);
    
    return 0;
}