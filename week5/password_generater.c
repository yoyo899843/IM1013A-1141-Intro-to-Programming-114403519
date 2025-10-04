# include<stdio.h>
int main(void){
    int guess[4];
    int num = 1234;
    for (i = 3; i >= 0; i--) {
            guess[i] = num % 10;
            num /= 10;
        }
    while(1){
        for (i = 3; i >= 0; i--) {
            guess[i] = num % 10;
            num /= 10;
        }
    }
}