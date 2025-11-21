# include<stdio.h>
# include<string.h>


int main(void){
    int N;
    int count=0;
    char ans[8];
    ans[strlen(ans)]='\0';
    scanf("%d", &N);
    for (int i=7; i>0; i--){
        if(N>0){
            ans[i] = N%2;
            count = count + 1;
        }
        N = N/2;
    }
    for(int i=7-count; i<=7; i++){
        printf("%d", ans[i]);
    }
}