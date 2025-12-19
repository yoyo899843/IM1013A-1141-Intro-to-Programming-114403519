# include<stdio.h>
# include<stdlib.h>
# include<time.h>

void find_max_resource_block(int N, int map[][N]){

}

int main(void){
    printf("\nPlease enter the size of the matix(3~10):");
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
}