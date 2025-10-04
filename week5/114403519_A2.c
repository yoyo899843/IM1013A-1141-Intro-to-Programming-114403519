# include <stdio.h>

int UserNum_Check( int );
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

int Password_Generater( int );
int Password_Generater( int UserNum ){
    int Password;
    Password = ((UserNum * 3) + 1357) % 10000;
    int mask = 0;
    int digit;

    while (Password > 0) {
        digit = Password % 10;
        if (mask & (1 << digit)) {
            printf("有重複的數字\n");
            return 0;
        }
        mask |= (1 << digit);
        Password /= 10;
    }

    printf("沒有重複的數字\n");
    return 0;
}

int main(void){
    int UserNum;
    printf("Enter a 4-digit number to generate a password:\n");
    scanf("%d", &UserNum);
    UserNum = UserNum_Len_Check(UserNum);
    printf("%d", UserNum);
}