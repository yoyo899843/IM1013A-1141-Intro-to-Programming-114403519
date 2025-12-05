# include<stdlib.h>
# include<stdio.h>

int main(void){
    int i, seed;
    scanf("%u", &seed);
    srand(seed);
    for (i = 1; i<=5; i++){
        printf("%u\n", rand());
    }
}