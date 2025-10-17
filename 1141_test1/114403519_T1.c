# include <stdio.h>

void Option_1(){
    int Adult, Student;
    while(1){
        while(1){
            printf("%s", "[Option 1]Please enter how many adult ticket(s) you want to buy? (1-20, or -1 to end the program)\n");
            scanf("%d", &Adult);    
            if(Adult == -1) break;
            if(Adult>=1 && Adult<=20){
                break;
            }
            printf("%s", "The number should be a integer between 1 and 20\n");
        }
        if(Adult == -1) break;
        while(1){
            printf("%s", "[Option 1]Please enter how many student ticket(s) you want to buy? (1-20, or -1 to end the program)\n");
            scanf("%d", &Student);
            if(Student == -1) break;
            if(Student>=1 && Student<=20){
                break;
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

        printf("---Quotation Summary---\n");
        printf("Adult: %d, Student: %d, Total Ticket: %d\n", Adult, Student, Adult+Student);
        printf("Base Total: %.2f\n", Adult*200.0+Student*150.0);
        printf("Quantity Discount: %.2f\n", Discount);
        if(Bonus == 1) printf("Bonus Discount: Yes (you will have 0.95 discount)\n");
        else if(Bonus == 0) printf("Bonus Discount: No\n");
        printf("Final Payable Amount: %.2f\n", Total_Amount);
    }
}

int main(){
    while(1){
        int Option;
        printf("%s", "===== Future City Expo Ticket System =====\n");
        printf("%s", "1) Option 1 - Single-Order Quotation\n2) Option 2 - Group Total & Installments\n-1) End the Program\n");
        scanf("%d", &Option);
        if(Option == 1);
        else if(Option == 2);
        else if(Option == -1) return 0;        
    }
    
}