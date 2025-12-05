# include<stdio.h>
# include<stdlib.h>

int main(void){
    int option;
    printf("%s", "===== MENU =====\n1) Option 1 - Split into even and odd number array\n2) Option 2 - Calculate Sum of Elements in the Upper Triangle\n(-1) End program\nPlease select an option: ");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        break;
    case 2:
        break;
    case (-1):
        printf("%s", "Program terminated.\n");
    default:
        printf("%s", "Invalid option. Try again.\n");
    }

}