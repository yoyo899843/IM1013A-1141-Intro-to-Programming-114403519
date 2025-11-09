# include <stdio.h>

int multiplication(){
    for(int i=1; i<10; i++){
        for(int j=1; j<10; j++){
            printf("%d*%d=%2d  ", i, j, i*j);
        }
        printf("%s", "\n");
    }
}

int 

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
                printf("%d", option);
                break;
            case (-1) :
                return 0;
            default :
                printf("%s", "Invalid option. Try again.\n\n");
        }
    }
}