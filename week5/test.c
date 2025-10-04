#include <stdio.h>

int main(void) {
    int test = 45645;
    int len = 0, n = test;

    if (n == 0) len = 1;
    else {
        while (n != 0) {
            n /= 10;
            len++;
        }
    }

    printf("%d\n", len);  // 會印出 3
    return 0;
}