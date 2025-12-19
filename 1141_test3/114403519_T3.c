# include<stdio.h>
# include<stdlib.h>
# include<time.h>

void ring_traversre(int N, int Matrix[N][N],int top, int left, int bottom, int right){
    // Print content from top to right to bottom to left
    // Use >=, <= to print the corner's content
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

void flatten_2d_to_1d(int N, int M[N][N], int B[]){
    int count=0;
    printf("\n[Flattened 1D array B in row-major order]\n");
    // Print array content one by one
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            printf("%d ", M[i][j]);
            B[count] = M[i][j];
            count++;
        }
    }
    printf("\n");
}

void sort_ascending(int n, int B[n]){
    int TMP;
    // Using Bubble Sort
    for(int i=0; i<n ;i++){
        for(int j=0; j<n-1; j++){
            if(B[j]>B[j+1]){
                TMP = B[j];
                B[j] = B[j+1];
                B[j+1] = TMP;
            }
        }
    }
    printf("\n[Sorted 1D array B (ascending)]\n");
    for(int i=0; i<n; i++){
        printf("%d ", B[i]);
    }
    printf("\n\n");
}

void find_max_resource_block(int N, int map[N][N]){
    int sum=0, tmp=0, top=0, left=0;
    for(int i=0; i<=N-3; i++){
        for(int j=0; j<=N-3; j++){
            sum = 0;
            // Check the 3*3 block's sum through whole matrix
            for(int k=i; k<i+3; k++){
                for(int l=j; l<j+3; l++){
                    sum = sum + map[k][l];
                }
            }
            // Check the greatest sum and record the location
            if(sum>tmp){
                tmp = sum;
                top = i;
                left = j;
            }
        }
    }
    printf("\nMaximum resource sum: %d\nTop-left coordinate: (%d, %d)\nMax resource block:\n", tmp, top, left);
    for(int i=top; i<top+3; i++){
        for(int j=left; j<left+3; j++){
            printf("%d ", map[i][j]);
        }
        printf("\n");
    }
    printf("\n");
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
            // Check if user's input is valid
            if(N<1|N>5){
                printf("Invalid input!\n\n");
                break;
            }
            int Matrix[N][N];
            printf("[Matrix A]\n");
            // Generate ramdon num in Matrix
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
        {
            printf("\nPlease enter the size of the matix(1~5):");
            int N;
            scanf("%d", &N);
            // Check if user's input is valid
            if(N<1|N>5){
                printf("Invalid input!\n\n");
                break;
            }
            int n = N*N;
            int M[N][N], B[n];
            printf("[Matrix M ( %d x %d )]\n",N ,N);
            // Generate ramdon num in Matrix
            srand(time(NULL));
            for(int i=0; i<N; i++){
                for(int j=0; j<N; j++){
                    M[i][j]=rand()%10 ;
                    printf("%d ", M[i][j]);
                }
                printf("\n");
            }
            flatten_2d_to_1d(N ,M ,B);
            sort_ascending(n, B);
            break;
        }
        case 3:
        {
            printf("\nPlease enter the size of the matix(3~10):");
            int N;
            scanf("%d", &N);
            // Check if user's input is valid
            if(N<3|N>10){
                printf("Invalid input!\n\n");
                break;
            }
            int n = N*N;
            int map[N][N];
            printf("Matrix M ( %d x %d )\n",N ,N);
            // Generate ramdon num in Matrix
            srand(time(NULL));
            for(int i=0; i<N; i++){
                for(int j=0; j<N; j++){
                    map[i][j]=rand()%10 ;
                    printf("%d ", map[i][j]);
                }
                printf("\n");
            }
            find_max_resource_block(N, map);
            break;
        }
        case -1:
            printf("Program ends.\n");
            return 0;
        default:
            printf("Invalid input!\n\n");
            break;
        }
    }
}