#include <stdio.h>

int main(void){
    float fAverage;
    int iCounter = 0;
    int iTotal = 0;
    int iGrade = 0;
    while (iGrade != -1){
        iTotal = iTotal + iGrade;
        iCounter = iCounter + 1;
        printf("Enter the Grade,  -1 to end the program:");
        scanf("%d", &iGrade);
    }
    
    if (iCounter != 0){
        fAverage = (float)iTotal / iCounter;
        printf("The average is %.2f\n", fAverage);
    }
    else{
        printf("You didn't enter grades");
    }
}