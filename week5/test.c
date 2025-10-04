#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int secret[4];  // 存電腦生成的密碼
    int guess[4];   // 存玩家輸入
    int i, j;

    // 初始化隨機數
    srand(time(NULL));

    // 生成 4 位不重複的數字
    for (i = 0; i < 4; ) {
        int num = rand() % 10;
        int duplicate = 0;
        for (j = 0; j < i; j++) {
            if (secret[j] == num) {
                duplicate = 1;
                break;
            }
        }
        if (!duplicate) {
            secret[i] = num;
            i++;
        }
    }

    // 遊戲開始
    printf("歡迎來玩 Bulls and Cows！\n");
    printf("請猜 4 位不重複的數字。\n");

    int bulls, cows;
    while (1) {
        bulls = cows = 0;
        printf("你的猜測: ");
        int num;
        scanf("%d", &num);

        // 將玩家輸入拆成數字陣列
        for (i = 3; i >= 0; i--) {
            guess[i] = num % 10;
            num /= 10;
        }

        // 計算 Bulls 和 Cows
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 4; j++) {
                if (guess[i] == secret[j]) {
                    if (i == j) bulls++;
                    else cows++;
                }
            }
        }

        printf("Bulls: %d, Cows: %d\n", bulls, cows);

        if (bulls == 4) {
            printf("恭喜，你猜對了！\n");
            break;
        }
    }

    return 0;
}
