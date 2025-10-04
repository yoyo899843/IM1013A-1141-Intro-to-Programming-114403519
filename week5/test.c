#include <stdio.h>

int main(void) {
    int n = 0;
    while(1){
    scanf("%d", &n);
    int mask = 0;   // 用來記錄哪些數字出現過
    int digit;

    if (n < 0) n = -n; // 處理負數

    while (n > 0) {
        digit = n % 10;
        if (mask & (1 << digit)) {
            printf("有重複的數字\n");
            conti
        }
        mask |= (1 << digit);
        n /= 10;
    }

    printf("沒有重複的數字\n");}
    return 0;
}