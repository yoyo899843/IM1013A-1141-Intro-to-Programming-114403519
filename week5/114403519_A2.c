# include <stdio.h>

int UserNum_Check( int );
int UserNum_Check( int UserNum ){
    while(1){
        int test = 45645;
        int len = 0, n = test;
        if (n == 0) len = 1;
        else {
            while (n != 0) {
                n /= 10;
                len++;
            }
        }
        if ( sizeof(UserNum) != 4){
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
}

int main(void){
    int UserNum;
    printf("Enter a 4-digit number to generate a password:\n");
    scanf("%d", &UserNum);
    UserNum = UserNum_Check(UserNum);
    printf("%d", UserNum);
}