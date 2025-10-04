# include <stdio.h>

int UserNum_Len_Check( int UserNum ){
    while(1){
        int len = 0, n = UserNum;
        if (n == 0) len = 1;
        else {
            while (n != 0) {
                n /= 10;
                len++;
            }
        }
        if ( len != 4){
            printf("Invalid input! Please enter a 4-digit number.\n");
            printf("Enter a 4-digit number to generate a password:\n");
            scanf("%d", &UserNum);
        }
        else{
            break;
        }
    }
    return UserNum;
}

int UserGuess_Len_Check( int UserNum ){
    while(1){
        int len = 0, n = UserNum;
        if (n == 0) len = 1;
        else {
            while (n != 0) {
                n /= 10;
                len++;
            }
        }
        if ( len != 4){
            printf("Invalid input! Please enter a 4-digit number.\n");
            printf("Enter your guess:");
            scanf("%d", &UserNum);
        }
        else{
            break;
        }
    }
    return UserNum;
}

int Password_Generater( int UserNum ){
    int Password;
    Password = (UserNum*3)+1357;
    Password = Password%10000;

    while (1) {
        int mask = 0;   // 紀錄哪些數字出現過
        int digit;
        int temp = Password;
        int isDuplicate = 0;
        while (temp > 0) {
            digit = temp % 10;
            if (mask & (1 << digit)) {
                isDuplicate = 1;
                break;
            }
            mask |= (1 << digit);
            temp /= 10;
        }

        if (isDuplicate) {
            Password = (Password * 3) + 1357;
            Password = Password % 10000;
        } 
        else {
            return Password;
        }
    }
}

int main(void){
    int Password, Password_Backup;
    int UserNum;
    printf("Enter a 4-digit number to generate a password:\n");
    scanf("%d", &UserNum);
    UserNum = UserNum_Len_Check(UserNum);
    Password_Backup = Password = Password_Generater(UserNum);
    
    printf("A secret password has been generated.\n");

    int secret[4];
    int guess[4];
    int i, j;
    int k = 1;
    for (i = 3; i >= 0; i--) {
            secret[i] = Password % 10;
            Password /= 10;
        }

    int bulls, cows;
    while (1) {
        printf("--- ROUND %d ---\nEnter a 4-digit number:",k );
        
        bulls = cows = 0;
        scanf("%d", &UserNum);
        UserNum = UserGuess_Len_Check(UserNum);
        for (i = 3; i >= 0; i--) {
            guess[i] = UserNum % 10;
            UserNum /= 10;
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

        printf("Bulls: %d, Cows: %d\n\n", bulls, cows);

        if (bulls == 4) {
            printf("GAME ENDS.\nYOU WIN THE GAME!!\n");
            break;
        }
        if (bulls == 0 && cows == 0){
            printf("The correct password is %d.\nGAME OVER.\nYOU LOSE THE GAME.\n", Password_Backup);
            break;
        }
        k += 1;
    }

    return 0;
}