# include <stdio.h>
# include<math.h>

void Option_1(){
    int Adult, Student;
    while(1){
        while(1){
            printf("%s", "\n[Option 1]Please enter how many adult ticket(s) you want to buy? (1-20, or -1 to end the program)\n");
            scanf("%d", &Adult);    
            if(Adult == -1) return 0;
            if(Adult>=1 && Adult<=20){
                break;
            }
            printf("%s", "The number should be a integer between 1 and 20\n");
        }
        if(Adult == -1) return 0;
        while(1){
            printf("%s", "[Option 1]Please enter how many student ticket(s) you want to buy? (1-20, or -1 to end the program)\n");
            scanf("%d", &Student);
            if(Student == -1) break;
            if(Student>=1 && Student<=20){
                break;;
            }
            printf("%s", "The number should be a integer between 1 and 20\n");
        }
        if(Student == -1) break;
        
        float Discount;
        if(Adult+Student<6){
            Discount = 1.00;
        }
        else if(Adult+Student<11){
            Discount = 0.95;
        }
        else if(Adult+Student<16){
            Discount = 0.90;
        }
        else if(Adult+Student<41){
            Discount = 0.85;
        }
        
        int Bonus = 0;
        if((Adult+Student) % 5 == 0) Bonus = 1;

        float Total_Amount;
        Total_Amount = ((Adult*200.0)+(Student*150.0))*Discount;
        if(Bonus == 1) Total_Amount = Total_Amount*0.95;

        printf("\n---Quotation Summary---\n");
        printf("Adult: %d, Student: %d, Total Ticket: %d\n", Adult, Student, Adult+Student);
        printf("Base Total: %.2f\n", Adult*200.0+Student*150.0);
        printf("Quantity Discount: %.2f\n", Discount);
        if(Bonus == 1) printf("Bonus Discount: Yes (you will have 0.95 discount)\n");
        else if(Bonus == 0) printf("Bonus Discount: No\n");
        printf("Final Payable Amount: %.2f\n", Total_Amount);
    }
}

void Option_2(){
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

int main(){
    while(1){
        int Option;
        printf("%s", "\n===== Future City Expo Ticket System =====\n");
        printf("%s", "1) Option 1 - Single-Order Quotation\n2) Option 2 - Group Total & Installments\n-1) End the Program\n");
        scanf("%d", &Option);
        if(Option == 1){
            Option_1();
            break;
        }
        else if(Option == 2){
            Option_2();
            break;
        }
        else if(Option == -1) return 0;
        else printf("%s", "Please enter 1, 2 or -1\n");
    }
    return 0;
}