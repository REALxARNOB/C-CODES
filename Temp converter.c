#include <stdio.h>

int main()
{
    char unit;
    double temp;
    printf("Is your temperature in F or C? ");
    scanf("%c",&unit);
    if(unit=='C')
    {
        printf("Enter your temperature in Celcius: ");
        scanf("%lf",&temp);
        temp = (temp*9/5)+32;
        printf("Temperature is %.2lf° Farenheit.",temp);
    }
    else
    {
        printf("Enter your temperature in Farenheit: ");
        scanf("%lf",&temp);
        temp = ((temp-32)*5)/9;
        printf("Temperature is %.2lf° Celcius.",temp);
    }
}
