# include <stdio.h>

int UserNum_Check(UserNum){
    while(1){
        if (length(UserNum) != 4){
            printf("Invalid input! Please enter a 4-digit number.\n");
            printf("Enter a 4-digit number to generate a password:\n");
            scanf("%d", UserNum);
        }
        else{
            return UserNum;
        }
    }
}


int Password_Generater(UserNum){
    Password = ((UserNum * 3) + 1357) % 10000
}

int main(void){
    int UserNum;
    printf("Enter a 4-digit number to generate a password:\n");
    scanf("%d", UserNum);
    UserNum = UserNum_Check(UserNum);

}