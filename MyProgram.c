#include <stdio.h>
#include <string.h>

int main()
{
  
    char a[15] = "Water";
    char b[15] = "Lemonade";
    char temp[15];

    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b,temp);

    printf("a = %s\n", a);
    printf("b = %s\n", b);

    return 0;
}