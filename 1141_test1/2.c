# include<stdio.h>
# include<math.h>

int main(){
    float Principal, Handling_Fee, Interest_Rate, Total_Repayment;
    int Period;

    while(1){
        while(1){
            printf("%s", "[Option 2] Enter principal in dollars (positive), or -1 to end:\n");
            scanf("%f", &Principal);
            if(Principal>0) break;
            printf("%s", "Please enter positive number\n");
        }
        
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

        Total_Repayment = Principal*pow(1+Interest_Rate,Period)+(Handling_Fee*Period);

        printf("%s", "\n----- Installment Plan Summary-----\n");
        printf("Principal: %.2f\n", Principal);
        printf("Number of Periods: %d\n", Period);
        printf("Handling Fee per Period: %.2f\n", Handling_Fee);
        printf("Interest Rate per Period: %.2f%% \n", Interest_Rate*100);
        printf("Repayment (Compound in Principle): %.2f\n", Principal*pow(1+Interest_Rate,Period));
        printf("Total Handling Fee: %.2f\n", Handling_Fee*Period);
        printf("Total Repayment (Including Handling Fee): %.2f\n", Total_Repayment);
        printf("Payment per Installment: %.2f\n\n", Total_Repayment/Period);
    }
}