#include <stdio.h>

int main(void){
    int option;
    float Celsius, Fahrenheit;
    printf("This program converts temperature in Celsius into Fahrenheit and vice versa.\n");
    printf("Enter 1 or 2 for conversion\n1 Celsius to Fahrenheit\n2 Fahrenheit to Celsius\n");
    scanf("%d", &option);
    printf("Enter a temperature in Celsius\n");
    if (option==1)
    {
        scanf("%f", &Celsius);
        Fahrenheit = (Celsius*9/5)+32;
        printf("%.0f degrees Celsius is %.2f degrees in Fahrenheit.", Celsius, Fahrenheit);
    }
    else if (option==2)
    {
        scanf("%f", &Fahrenheit);
        Celsius = (Fahrenheit-32)/9*5;
        printf("%.0f degrees Fahrenheit is %.2f degrees in Celsius.", Celsius, Fahrenheit);
    }
}