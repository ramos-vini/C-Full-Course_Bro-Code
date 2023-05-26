#include <stdio.h>

enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

int main()
{
    enum Day today = Sat;

    if(today == Sun || today == 7){
        printf("It's weekend!");
    } else{
        printf("I have to work :(");
    }

    return 0;
}