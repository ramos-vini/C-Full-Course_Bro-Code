#include <stdio.h>

void sort(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

void print(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", array[i]);
    }
}

int main()
{
    int array[] = {6, 5, 7, 2, 4, 8, 0, 3, 1, 9};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);
    print(array, size);

    return 0;
}