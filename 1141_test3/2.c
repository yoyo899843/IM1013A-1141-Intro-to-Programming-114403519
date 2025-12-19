# include<stdio.h>
# include<stdlib.h>
# include<time.h>

void flatten_2d_to_1d(int M[][N], int N, int B[]){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            Matrix[i][j]=rand()%10 ;
            printf("%d ", Matrix[i][j]);
        }
        printf("\n");
    }
}

void sort_ascending(int B[n], int n){

}

int main(void){
    printf("\nPlease enter the size of the matix(1~5):");
    int N;
    scanf("%d", &N);
    int Matrix[N][N], B[N*N];
    printf("[Matrix M ( %d x %d )]\n",N ,N);
    srand(time(NULL));
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            Matrix[i][j]=rand()%10 ;
            printf("%d ", Matrix[i][j]);
        }
        printf("\n");
    }
    flatten_2d_to_1d(Matrix,N,B);
}