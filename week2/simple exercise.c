# include <stdio.h>

int main(void){
    float temp = 0.0 ;
    printf("please enter the temperature:");
    scanf("%f",&temp) ;
    temp = (temp*9/5)+32 ;
    printf("%.2f\n", temp);
}