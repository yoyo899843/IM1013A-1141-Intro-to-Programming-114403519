#include<stdio.h>

int main(void){
    int Num1, Num2;

    printf("Please enter two integers\n");
    scanf("%d %d", &Num1, &Num2);

    if (Num1 == Num2){
        printf("%d is equal to %d\n", Num1, Num2);
    }//end if Num1 == Num2

    if (Num1 > Num2){
        printf("%d is greater than %d\n", Num1, Num2);
    }//end if Num1 > Num2

    if (Num1 < Num2){
        printf("%d is less than %d\n", Num1, Num2);
    }//end if Num1 < Num2

    if (Num1 >= Num2){
        printf("%d is greater than or equal to %d\n", Num1, Num2);
    }//end if Num1 >= Num2

    if (Num1 <= Num2){
        printf("%d is less than or equal to %d\n", Num1, Num2);
    }//end if Num1 <= Num2

    if (Num1 != Num2){
        printf("%d is not equal to %d\n", Num1, Num2);
    }//end if Num1 != Num2
}