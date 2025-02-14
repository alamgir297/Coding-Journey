/*temperature conversions*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variables
    float celsiusEntered=0.0;
    float fahrenheit=0.0;
    float kelvin=0.0;

    //asking user to enter temperature
    printf("Enter temperature in celsius:");
    scanf("%f", &celsiusEntered);

    //conversion
    fahrenheit = (celsiusEntered*9+160)/5;
    kelvin=celsiusEntered+273;


    printf("\n%f celsius is = %f fahrenheit", celsiusEntered, fahrenheit);
    printf("\n%f celsius is = %f kelvin", celsiusEntered, kelvin);

    return 0;
}
