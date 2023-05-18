#include <stdio.h>
#include <math.h>

int main(){

    // C/5 = (F-32)/9

    // C = (F-32)/9*5
    // F = C/5*9+32

    char unit;
    int temperature;
    int temperatureConverted;

    printf("\n~Temperature Converter Program~\n\n");
    printf("Type in \"F\" for Fahrenheit or \"C\" for Celsius:\n");
    scanf("%c", &unit);

    printf("Type in the temperature in %c:", unit);
    scanf("%d", &temperature);

    if(unit == 'F'){
        temperatureConverted = (temperature-32)/9*5;
        printf("The temperature converted is: %d C", temperatureConverted);
    } else{
        temperatureConverted = temperature/5*9+32;
        printf("The temperature converted is: %d F", temperatureConverted);
    }

    return 0;
}