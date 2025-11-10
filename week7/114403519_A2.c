# include <stdio.h>
# include <string.h>
# include <stdlib.h>


void multiplication(){
    for(int i=1; i<10; i++){
        for(int j=1; j<10; j++){
            printf("%d*%d=%2d  ", i, j, i*j); // Formating output
        }
        printf("%s", "\n"); // After finished a row, change a line
    }
}

void reverse_number(){
    char lnumber[7],ans[7];

    while (1) {
        printf("Enter a positive integer between 1 and 100000:\n");
        scanf("%6s", lnumber); // The number will have digitals less than 6

        int inumber = atoi(lnumber);  //Integer character to integer, in the library <stdlib.h>

        if (inumber > 0 && inumber < 100000) {
            break;  //Go to reverse step
        }
        else {
            printf("Invalid input!\n");  //Stay in the loop until the input is valid
        }
    }

    int len = strlen(lnumber);

    for (int i = 0; i < len; i++) {
        ans[i] = lnumber[len - i - 1];
    }
    ans[len] = '\0';  //Add the end symbol avoid odd symbol

    printf("--- REVERSAL RESULT ---\nOriginal Number N: %s\nReversed Number: %s\n", lnumber, ans);  
}

int main(void){
    int option;
    while(1){
        printf("%s","==== MENU ====\n1) Option 1 - times table\n2) Option 2 - reverse the number\nPlease select an option: ");
        scanf("%d", &option);
        switch(option){
            case 1 :
                multiplication();  // Use the function we defined
                printf("%s", "\n");
                break;
            case 2 :
                reverse_number();  // Use the function we defined
                printf("%s", "\n");
                break;
            case (-1) :
                return 0;  // End the program
            default :
                printf("%s", "Invalid option. Try again.\n\n");
        }
    }
}