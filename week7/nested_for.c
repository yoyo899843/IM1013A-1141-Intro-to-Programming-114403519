#include <stdio.h>

int main(void){
    int row, col;
    
    printf("%s", "Enter the row you want\n");
    scanf("%d", &row);

    printf("%s", "Enter the column you want\n");
    scanf("%d", &col);

    for(int i=row; i>=0; i--){
        for(int j=col; j>=0; j--){
            printf("%s", "*");
        }
        printf("%s", "\n");
        col = col-1;
    }
}