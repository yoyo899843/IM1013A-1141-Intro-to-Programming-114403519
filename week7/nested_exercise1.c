#include <stdio.h>

int main(void){
    int row, col, counter;
    
    printf("%s", "Enter the row you want\n");
    scanf("%d", &row);

    printf("%s", "Enter the column you want\n");
    scanf("%d", &col);

    counter = 1;
    for(int i=row; i>=1; i--){
        for(int j=col; j>=2; j--){
            printf("%-2d ", counter);
            counter++;
        }
        printf("%-2d\n", counter);
        counter++;
    }
}