# include <stdio.h>

int main(void){
    double Celsius,Fahrenheit ;
    //Initialize variable we need
    printf("Please enter the temperature in Celsuis:");
    scanf("%lf",&Celsius) ;
    //Read the temperature user entered
    Fahrenheit = (Celsius*9/5)+32 ;
    //Use the covertion formular
    printf("It's %.2lf °F\n", Fahrenheit);
    //Format the answer and output
    return 0;
}//Main function