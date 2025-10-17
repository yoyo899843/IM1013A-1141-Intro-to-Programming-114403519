# include <stdio.h>

int main(){
    int Adult, Student;
    while(1){
        printf("%s", "Please enter how many adult ticket(s) you want to buy? (1-20, or -1 to end the program)\n");
        scanf("%d", Adult);
        if(Adult == -1) break;
        printf("%s", "Please enter how many student ticket(s) you want to buy? (1-20, or -1 to end the program)\n");
        scanf("%d", Student);
        if(Student == -1) break;
        printf("---Quotation Summary---");
        printf("Adult: %d, Student: %d, Total Ticket: %d", Adult, Student, Adult+Student);
        printf("Base total")
    }
    
}