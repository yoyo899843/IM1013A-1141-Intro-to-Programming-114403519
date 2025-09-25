#include <stdio.h>

int main(void){
    int total = 0;
    int counter = 1;
    int grade = 0;
    float avg = 0;

    while (counter <= 10)
    {
        grade = 0;
        printf("Enter the grade %d:\n", counter);
        scanf("%d", &grade);
        total = total + grade;
        counter = counter + 1;
    }
    avg = (float)total/10;
    printf("Average score is %.2f\n", avg);    
}