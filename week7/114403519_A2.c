# include <stdio.h>
# include <string.h>
# include <math.h>


void multiplication(){
    for(int i=1; i<10; i++){
        for(int j=1; j<10; j++){
            printf("%d*%d=%2d  ", i, j, i*j);
        }
        printf("%s", "\n");
    }
}

void reverse_number(){
    int inumber;
    char lnumber[6];
    char ans[6];
    while (1){
        printf("%s", "Enter a positive integer between 1 and 100000:\n");
        scanf("%6s", &inumber);
        inumber = lnumber;
        if(inumber>0 && inumber<1000000){
            break;
        }
        else{
            printf("%s", "Invalid input!");
        }
    }
    for(int i=0; i<strlen(lnumber); i++){
        ans[i] = inumber%(10, i);
    }
    printf("%d", ans);
}

int main(void){
    int option;
    while(1){
        printf("%s","==== MENU ====\n1) Option 1 - times table\n2) Option 2 - reverse the number\nPlease select an option: ");
        scanf("%d", &option);
        switch(option){
            case 1 :
                multiplication();
                printf("%s", "\n");
                break;
            case 2 :
                reverse_number();
                printf("%s", "\n");
                break;
            case (-1) :
                return 0;
            default :
                printf("%s", "Invalid option. Try again.\n\n");
        }
    }
}