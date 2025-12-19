# include<stdio.h>
# include<stdlib.h>
# include<time.h>

void find_max_resource_block(int N, int map[N][N]){
    int sum=0, tmp=0, top=0, left=0;
    for(int i=0; i<=N-3; i++){
        for(int j=0; j<=N-3; j++){
            sum = 0;
            for(int k=i; k<i+3; k++){
                for(int l=j; l<j+3; l++){
                    sum = sum + map[k][l];
                }
            }
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
}

int main(void){
    printf("\nPlease enter the size of the matix(3~10):");
    int N;
    scanf("%d", &N);
    int n = N*N;
    int map[N][N];
    printf("Matrix M ( %d x %d )\n",N ,N);
    srand(time(NULL));
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            map[i][j]=rand()%10 ;
            printf("%d ", map[i][j]);
        }
        printf("\n");
    }
    find_max_resource_block(N, map);
}