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
    char lnumber[7],R[7];
    int N;

    while (1) {
        printf("Enter a positive integer between 1 and 100000:\n");
        scanf("%d", &N);

        if (N > 0 && N < 100000) {
            break;  // Go to reverse step
        }
        else {
            printf("Invalid input!\n\n");  // Stay in the loop until the input is valid
        }
    }

    sprintf(lnumber, "%d", N);  // Turn the integer into a list
    int len = strlen(lnumber);

    for (int i = 0; i < len; i++) {
        R[i] = lnumber[len - i - 1];  // Add numbers in the N from left to right to R
    }
    R[len] = '\0';  // Add the end symbol avoid odd symbol

    printf("--- REVERSAL RESULT ---\nOriginal Number N: %s\nReversed Number R: %s\n", lnumber, R);  
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