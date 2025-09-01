//Program to convert temperature in reverse order
#include<stdio.h>
int main()
{
    int celcius;
    int fahrenheit;
    printf("Celcius\tFahrenheit\n");
    for ( celcius = 300; celcius >=0; celcius-=20)
    {
        printf("%5d %9d\n",celcius,((9*celcius)/5)+32);
    }
    //printf("\n\n");
    printf("\nFahrenheit\tCelcius\n");
    for (fahrenheit=300 ; fahrenheit >= 0; fahrenheit-=20)
    {
        printf("%5d %15d\n",fahrenheit,(5*(fahrenheit-32))/9);
    }
    return 0;
}