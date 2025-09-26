#include <stdio.h>

int main(void){
    float fAverage;
    int iCounter = -1;
    int iTotal,iGrade = 0;
    while (iGrade != -1){
        iTotal = iTotal + iGrade;
        iCounter = iCounter + 1;
        printf("Enter the Grade,  -1 to end the program:");
        scanf("%d", &iGrade);
        printf("%d %d",iTotal,iCounter);
    }
    
    if (iCounter != 0){
        fAverage = (float)iTotal / iCounter;
        printf("The average is %.2f\n", fAverage);
    }
    else{
        printf("You didn't enter grades");
    }
}