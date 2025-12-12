# include <stdio.h>

void admin_mode();

void order_system(item, quantity, total, size){
    printf("===== Welcome to C Cafe =====\n");
    printf("%2s %10s %8s %8s %8s\n","","","Small","Medium","Large");
    printf("%2d %10s %8d %8d %8d\n",1,"Americano",45,55,65);
    printf("%2d %10s %8d %8d %8d\n",2,"Latte",50,60,70);
    printf("%2d %10s %8d %8d %8d\n",3,"Mocha",55,65,75);
    printf("==========\nEnter item :");
    scanf("%d", &item);
    char size, yesno;
    printf("Size (S/M/L):");
    scanf("%s", &size);
    printf("Quantity:");
    scanf("%d", &quantity);
}

int main(void){
    int item, quantity, total[3][3];
    char size, yesno;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            total[i][j]=0;
        }
    }
    while (1){
        order_system(item, quantity, total, size);
        printf("Order complete? (y/n):");
        scanf("%s", &yesno);
    }
    switch (item)
    {
    case 1:
        if(size== ("s" || "S")){
            total[0][0]+= quantity;
        }
        if(size==("m" || "M")){
            total[0][1]+= quantity;
        }
        if(size==("l" || "L")){
            total[0][2]+= quantity;
        }
        break;
    case 2:
        if(size== ("s" || "S")){
            total[1][0]+= quantity;
        }
        if(size==("m" || "M")){
            total[1][1]+= quantity;
        }
        if(size==("l" || "L")){
            total[1][2]+= quantity;
        }
        break;
    case 3:
        if(size== ("s" || "S")){
            total[2][0]+= quantity;
        }
        if(size==("m" || "M")){
            total[2][1]+= quantity;
        }
        if(size==("l" || "L")){
            total[2][2]+= quantity;
        }
        break;
    case 1234:
    default:
        break;
    }
    
}