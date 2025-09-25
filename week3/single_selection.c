#include<stdio.h>

int main(void){
    int Score;
    scanf("%d", &Score);
    if(Score>=90){
        printf("Grade A");
    }
    else if (Score>=80)
    {
        printf("Grade B");
    }
    else if (Score>=70)
    {
        printf("Grade C");
    }
    else
    {
        printf("Grade D");
    }
    
    
    
}