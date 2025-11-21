# include<stdio.h>
# include<string.h>


int main(void){
    int N;
    int col=1;
    int row=1;
    scanf("%d", &N);
    for(col; col<=(2*N)+1; col++){
        if(col<=N){
            for(row=0; row<=(2*N)+1; row++){
                if(row<=N){
                    printf("%s", "@");
                }
                else if(row=N+1){
                    printf("%s", "|");
                }
                else{
                    printf("%s", "#");
                }
            }
        }
        else if(col=N+1){
            for(row=0; row<=(2*N)+1; row++){
                if(row<=N){
                    printf("%s", "-");
                }
                else if(row=N+1){
                    printf("%s", "+");
                }
                else{
                    printf("%s", "-");
                }
            }
        }
        else{
            for(row=0; row<=(2*N)+1; row++){
                if(row<=N){
                    printf("%s", "%");
                }
                else if(row=N+1){
                    printf("%s", "|");
                }
                else{
                    printf("%s", "&");
                }
            }
        }
    }
}