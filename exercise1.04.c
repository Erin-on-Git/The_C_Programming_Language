//Program to convert celcius into fahrenheit
#include<stdio.h>
int main()
{
    int celcius;
    int fahrenheit;
    printf("Celcius\tFahrenheit\n");
    for ( celcius = 0; celcius < 300; celcius+=20)
    {
        printf("%5d %9d\n",celcius,((9*celcius)/5)+32);
    }
    return 0;
}