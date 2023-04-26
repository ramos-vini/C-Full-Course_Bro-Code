#include <stdio.h>
#include <stdbool.h>

int main(){

    // bool op = true;

    char ascii = 126;
    printf("ASCII Char (%d): %c\n", ascii, ascii);

    unsigned long long int superBigNumber = 7253237273923729382U;
    printf("Huge number: %llu\n", superBigNumber);

    bool binary = true; // or 1
    printf("1(True) or 0(False): %d\n", binary);

    return 0;
}