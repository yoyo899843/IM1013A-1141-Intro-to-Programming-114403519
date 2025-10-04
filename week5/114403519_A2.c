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
    while(1){
        printf("a");
        Password = ((UserNum * 3) + 1357) % 10000;
        int mask = 0;
        int digit;
        int error = 0;

        while (Password > 0) {
            digit = Password % 10;
            if (mask & (1 << digit)) {
                error = 1;
                break;
            }
            mask |= (1 << digit);
            Password /= 10;
        }
        Password = UserNum;
        if( error == 0){
            printf("%d", Password);
            return Password;
        }
    }
}

int main(void){
    int Password;
    int UserNum;
    printf("Enter a 4-digit number to generate a password:\n");
    scanf("%d", &UserNum);
    UserNum = UserNum_Len_Check(UserNum);
    Password = Password_Generater(UserNum);
    printf("%d", UserNum);
}