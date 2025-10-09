# include <stdio.h>

// Define a function to check if user's input is 4-digit 
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

// Define a function to check if user's input is 4-digit 
int UserGuess_Len_Check( int UserNum ){
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
            printf("Enter your guess:");
            scanf("%d", &UserNum);
        }
        else{
            break;
        }
    }
    return UserNum;
}

// Generate password
int Password_Generater( int UserNum ){
    int Password;
    Password = (UserNum*3)+1357;
    Password = Password%10000;
    
    // Check if any number is duplicate in password (用字元位移 from cgatgpt but been modified by myself)
    while (1) {
        int mask = 0;
        int digit;
        int temp = Password;
        int duplicate = 0;  
        int count = 0;  // Count how many numbers
        while (temp > 0) {
            int digit_bin = 0000000000;
            digit = temp % 10;  // Take rightmost bits
            // Use 10 bit memory to save the number, for example:3 will be save as 0000001000, 1 will be put at 4th digit from right
            digit_bin = 1 << digit;
            // Check if the number is been used, use AND to check
            if (mask & digit_bin) {
                duplicate = 1;
                break;
            }
            // Use OR to merge new number and old number
            mask |= digit_bin;
            temp /= 10;
            count++;
        }

        // If it's duplicate, generate password again
        if (duplicate) {
            Password = (Password * 3) + 1357;
            Password = Password % 10000;
        } 
        else {
            return Password;
        }
    }
}

int main(void){

    int Password, Password_Backup;
    int UserNum;
    printf("Enter a 4-digit number to generate a password:\n");
    scanf("%d", &UserNum);
    UserNum = UserNum_Len_Check(UserNum);
    Password_Backup = Password = Password_Generater(UserNum);
    
    printf("A secret password has been generated.\n");
    
    // Read user's input and then turn into list
    int lPassword[4];
    int guess[4];
    int i, j;
    int k = 1;
    for (i = 3; i >= 0; i--) {
            lPassword[i] = Password % 10;
            Password /= 10;
        }

    int bulls, cows;
    while (1) {
        printf("--- ROUND %d ---\nEnter a 4-digit number:",k );
        
        bulls = cows = 0;
        scanf("%d", &UserNum);
        UserNum = UserGuess_Len_Check(UserNum);
        for (i = 3; i >= 0; i--) {
            guess[i] = UserNum % 10;
            UserNum /= 10;
        }

        // Use nested loops to count cows and bulls 
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 4; j++) {
                if (guess[i] == lPassword[j]) {
                    if (i == j) bulls++;
                    else cows++;
                }
            }
        }

        printf("Bulls: %d, Cows: %d\n\n", bulls, cows);

        // If 4 numbers are correct, user wins
        if (bulls == 4) {
            printf("GAME ENDS.\nYOU WIN THE GAME!!\n");
            break;
        }

        // If 4 numbers are wrong, user wins
        if (bulls == 0 && cows == 0){
            printf("The correct password is %d.\nGAME OVER.\nYOU LOSE THE GAME.\n", Password_Backup);
            break;
        }
        k += 1;
    }

    return 0;
}