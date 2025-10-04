#include <stdio.h>

int main(void) {
    int n = 0;
    while(1){
        scanf("%d", &n);
        int mask = 0;   // 用來記錄哪些數字出現過
        int digit;

        while (n > 0) {
            digit = n % 10;
            if (mask & (1 << digit)) {
                printf("有重複的數字\n");
                break;
            }
            mask |= (1 << digit);
            n /= 10;
        }
    }
    return 0;
}