#include <stdio.h>

int main(void){
    int row, col, counter;
    
    printf("%s", "Enter the row you want\n");
    scanf("%d", &row);

    printf("%s", "Enter the column you want\n");
    scanf("%d", &col);
    printf("%s", "=====================================\n");

    counter = 1;
    for(int i=row; i>=1; i--){
        for(int j=col; j>=1; j--){
            printf("%3d ", counter);
            counter++;
        }
        printf("%3d\n", counter);
        counter++;
    }
}