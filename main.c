#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declare a few variables
    float fahrenheit, celcius = 0;


    printf("Enter current temperature in Fahrenheit: \n");
    scanf("%f", &fahrenheit); // Accepts floating point value from user

    celcius = (fahrenheit - 32)* 5/9; //conversion process

    //Output
    printf("The temperature in degrees celcius is: %f", celcius);


    return 0;
}
