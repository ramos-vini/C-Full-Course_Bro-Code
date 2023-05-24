#include <stdio.h>
#include <string.h>

int main()
{

    double numbers[] = {5, 7.5, 10, 12.5, 15, 17.5, 20};

    // printf("%d bytes\n",sizeof(numbers));

    for (int i = 0; i < (sizeof(numbers) / sizeof(numbers[0])); i++)
    {
        printf("$%.2lf\n", numbers[i]);
    }

    return 0;
}