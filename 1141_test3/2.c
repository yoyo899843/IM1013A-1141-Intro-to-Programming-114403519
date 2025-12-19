# include<stdio.h>
# include<stdlib.h>
# include<time.h>

void flatten_2d_to_1d(int N, int M[N][N], int B[]){
    int count=0;
    printf("\n[Flattened 1D array B in row-major order]\n");
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
    printf("\n");
}

int main(void){
    printf("\nPlease enter the size of the matix(1~5):");
    int N;
    scanf("%d", &N);
    int n = N*N;
    int M[N][N], B[n];
    printf("[Matrix M ( %d x %d )]\n",N ,N);
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
}