# include <stdio.h>

int main(void){
    int Balance = 10000;
    int Withdrawal;
    printf("Balance setting: 10000\nCurrent balance: 10000\n");
    while (1){
        printf("\nEnter withdrawal amount (O to quit): ");
        scanf("%d", &Withdrawal);
        if (Withdrawal == 0){
            printf("Transaction ended.\nFinal balance: %d\n", Balance);
            break;
        }
        else{
            if ( Withdrawal < 0 ){
                printf("Invalid input, please try again.\n");
                continue;
            }
            if ( Withdrawal%100 == 0 ){
                if ( Withdrawal > Balance ){
                    printf("Insufficient balance.\n");
                    continue;
                }
                Balance =  Balance - Withdrawal;
                printf("Withdrawal successful!\nCurrent balance: %d\n", Balance);
            }
            else{
                printf("Withdrawal amount must be a multiple of 100.\n");
                continue;
            }
        }
        
    }
    
}