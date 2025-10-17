# include<stdio.h>

int main(){
    float Principal, Handling_Fee, Interest_Rate;
    int Period;
    printf("%s", "[Option 2] Enter principal in dollars (positive), or -1 to end:\n");
    scanf("%d", &Principal);
    
    if(Principal<501 && Principal>0){
        Period = 1;
        Handling_Fee = 0.0;
        Interest_Rate = 0.0;
    }
    else if(Principal<1001 && Principal>500){
        Period = 3;
        Handling_Fee = 20.0;
        Interest_Rate = 0.03;
    }
    else if(Principal<2001 && Principal>1000){
        Period = 6;
        Handling_Fee = 17.0;
        Interest_Rate = 0.025;
    }
    else if(Principal>2000){
        Period = 12;
        Handling_Fee = 12;
        Interest_Rate = 0.015;
    }
    else if(Principal == -1) return 0;
    printf("%s", "\n----- Installment Plan Summary-----\n");
    printf("Principal: %.2f\n", Principal);
    printf("Number of Periods: %d\n", Period);
    printf("Handling Fee per Period: %.2f\n", Handling_Fee);
    printf("Interest Rate per Period: %.2f\n", Interest_Rate);
    printf("Repayment: %f", );
    printf("Total Handling Fee: %f", );
    printf("Total Repayment (Including Handling Fee): %d", );
    printf("Payment per Installment: %d", );
}