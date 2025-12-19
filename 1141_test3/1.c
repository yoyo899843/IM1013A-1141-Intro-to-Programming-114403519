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
}

int main(void){
    int N;
    scanf("%d", &N);
    int Matrix[N][N];
    srand(time(NULL));
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            Matrix[i][j]=rand()%10 ;
            printf("%d ", Matrix[i][j]);
        }
        printf("\n");
    }
    int top = 0, right=N-1, left = 0, bottom = N-1;
    ring_traversre(N, Matrix, top, left, bottom, right);
}