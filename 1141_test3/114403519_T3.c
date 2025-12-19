# include<stdio.h>
# include<stdlib.h>
# include<time.h>

void ring_traversre(int N, int Matrix[N][N],int top, int left, int bottom, int right){
    while (top<((N/2)+1))
    {
        for(int i = left; i<=right; i++){
            printf("%d ", Matrix[top][i]);
        }
        top++;
        for(int i = top; i<=bottom; i++){
            printf("%d ", Matrix[i][right]);
        }
        right--;
        for(int i = right; i>=left; i--){
            printf("%d ", Matrix[bottom][i]);
        }
        bottom--;
        for(int i = bottom; i>=top; i--){
            printf("%d ", Matrix[i][left]);
        }
        left++;
    }
    printf("\n\n");
}

int main(void){
    int option;
    while (1){
        printf("==== MENU ====\n1)Option 1 - Ring Traversal of a Square Matrix\n2)Option 2 - Flatten and Sort\n3) Option 3 - Maximum Resource Block Finder\n(-1) End Program\nSelect:");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
        {
            printf("\nPlease enter the size of the matix(1~5):");
            int N;
            scanf("%d", &N);
            if(N<1|N>5){
                printf("Invalid input!\n\n");
                break;
            }
            int Matrix[N][N];
            printf("[Matrix A]\n");
            srand(time(NULL));
            for(int i=0; i<N; i++){
                for(int j=0; j<N; j++){
                    Matrix[i][j]=rand()%10 ;
                    printf("%d ", Matrix[i][j]);
                }
                printf("\n");
            }
            printf("\n[Ring traversal output]\n");
            int top = 0, right=N-1, left = 0, bottom = N-1;
            ring_traversre(N, Matrix, top, left, bottom, right);
            break;
        }
        case 2:
            break;
        case 3:
            break;
        case -1:
            printf("Program ends.\n");
            return 0;
        default:
            printf("Invalid input!\n\n");
            break;
        }
    }
}