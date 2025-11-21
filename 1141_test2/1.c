# include<stdio.h>
# include<string.h>
# include<stdlib.h>

int main(void){
    int N, len;
    printf("%s", "Please Enter a Decimal Number Between 0-127\n");
    scanf("%d", &N);
    char ans[8];
    ans[7] = '\0';
    for(int i = 7; i>=0; i--){
        printf("%d", N);
        ans[i]= N % 2;
        N = N/2;
        printf("%d", N);
        if(N=0){
            len = 7-i;
        }
    }
    /*for(int i=7; i>=len; i--){
        printf("%d", ans[i]);
    }*/
}