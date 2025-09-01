//Program to convert fahrenheit into celcius
#include<stdio.h>
int main()
{
    int celcius;
    int fahrenheit;
    printf("Fahrenheit\tCelcius\n");
    for (fahrenheit=0 ; fahrenheit < 300; fahrenheit+=20)
    {
        printf("%5d %15d\n",fahrenheit,(5*(fahrenheit-32))/9);
    }
    return 0;
}