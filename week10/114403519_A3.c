# include<stdio.h>
# include<stdlib.h>
# include<time.h>

void separate_even_odd(int a[],int n,int even[],int odd[],int counts[]){
    for (int i=0; i<n; i++){
        if(a[i]%2 == 0){
            even[counts[0]++] = a[i];
        }
        else{
            odd[counts[1]++] = a[i];
        }
    }
    
    printf("%s", "\n\n");
}

void sum_upper_triangle(int n , int matrix[n][n]){
    srand(time(NULL));
    for(int i = 0; i<n ;i++){
        for(int j=0; j<n; j++){
            matrix[i][j] = rand()%51;
        }
    }
}

int main(void){
    int option;
    while(1){
        printf("===== MENU =====\n1) Option 1 - Split into even and odd number array\n2) Option 2 - Calculate Sum of Elements in the Upper Triangle\n(-1) End program\n\nPlease select an option: ");
        scanf("%d", &option);
        switch(option){
        case 1:{
            printf("\nEnter array n (1-20): ");
            int n;
            scanf("%d", &n);
            if(n<1 | n>20){
                printf("Invalid number!\n\n");
                break;
            }
            printf("Original array:\n");
            int a[n];
            srand(time(NULL));
            for(int i=0; i<n; i++){
                a[i] = rand()%11 ;
                printf("%d ", a[i]);
            }
            int even[n], odd[n];
            int counts[2] = {0,0};
            separate_even_odd(a, n, even, odd, counts);
            printf("Total even numbers: %d\nEven numbers: ", counts[0]);
            if(counts[0]==0){
                printf("None");
            }
            else{
                for(int i=0; i<counts[0]; i++){
                    printf("%d ", even[i]);
                }
            }
            printf("\n\nTotal odd numbers: %d\nOdd numbers: ", counts[1]);
            if(counts[1]==0){
                printf("None");
            }
            else{
                for(int i=0; i<counts[1]; i++){
                    printf("%d ", odd[i]);
                }
            }
            printf("\n\n");
            break;
        }
        case 2:{
            printf("\nEnter matrix size N (1 - 5) : ");
            int n;
            int sum=0;
            scanf("%d", &n);
            if(n<1 | n>5){
                printf("Invalid number!\n\n");
                break;
            }
            int matrix[n][n];
            sum_upper_triangle(n, matrix);
            printf("\nOriginal 2D array (3x3): \n\n");
            for(int i = 0; i<n ;i++){
                for(int j=0; j<n; j++){
                    sum = sum + matrix[i][j];
                    printf("%2d ", matrix[i][j]);
                }
                printf("\n");
            }
            printf("\nTotal sum of upper triangle elements : %d\n\n",sum);
            break;
        }
        case (-1):
            printf("\nProgram terminated.\n");
            return 0;
        default:
            printf("\nInvalid option. Try again.\n\n");
        }
    }
}