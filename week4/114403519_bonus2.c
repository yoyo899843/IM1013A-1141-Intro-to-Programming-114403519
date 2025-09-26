#include <stdio.h>

int main(void){

    float fAverage;
    int iCounter = 0;
    int iTotal = 0;
    int iGrade = 0;
    int iFail = 0;
    int iPass = 0;
    
    // Tell if Grade is -1
    while (iGrade != -1){
        iTotal = iTotal + iGrade;
        iCounter = iCounter + 1;
        printf("Enter the Grade,  -1 to end the program:");
        scanf("%d", &iGrade);
        // Grade can only entered between 0 and 100
        if( iGrade>=0 && iGrade<=100){
            // Count passed students and failed student
            if(iGrade<60){
                iFail = iFail + 1;
            }
            else{
                iPass = iPass + 1;
            }
        }
        else{
            printf("The score must between 0 and 100\n");
            iCounter = iCounter - 1;
        }
    }

    if (iCounter != 0){
        fAverage = (float)iTotal / iCounter;
        printf("The average is %.2f\n", fAverage);
        printf("%d student(s) is/are passed, %d student(s) is/are Failed\nThere are %d students\nTotal grade is %d\nAverage grade is %.2f", iPass, iFail, iCounter, iTotal, fAverage);
    }
    else{
        printf("You didn't enter grades");
    }
}