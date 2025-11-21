# include<stdio.h>


void Triangle(int N){
    int count=1;
    printf("%s","\n");
    for(int i=1; i<=N; i++){
        for(int j=1; j<=i; j++){
            printf("%d ", count);
            count = count + 1;
        }
        printf("%s", "\n");
    }
    printf("%s","\n");
}

void dectobin(int N){
    int count=0;
    char ans[8];
    if(N==0){
        printf("%d%s", 0,"\n\n");
    }
    else{
        for (int i=7; i>0; i--){
            if(N>0){
                ans[i] = N%2;
                count = count + 1;
            }
            N = (N-N%2)/2;
        }
        printf("%s", "The binary number is ");
        for(int i=8-count; i<8; i++){
            printf("%d", ans[i]);
        }
        printf("%s", "\n\n");
    }
}

void Four_Quadrant(int N, int row, int col){
    for(col=0; col<N; col++){
        for(row=0; row<N; row++){
            printf("%s", "@");
        }
        printf("%s", "|");
        for(row=0; row<N; row++){
            printf("%s", "#");
        }
        printf("%s", "\n");
    }
    for(row=0; row<N; row++){
        printf("%s", "-");
    }
    printf("%s", "+");
    for(row=0; row<N; row++){
        printf("%s", "-");
    }
    printf("%s", "\n");
    for(int col=0; col<N; col++){
        for(int row=0; row<N; row++){
            printf("%s", "%");
        }
        printf("%s", "|");
        for(int row=0; row<N; row++){
            printf("%s", "&");
        }
        printf("%s", "\n");
    }
    printf("%s", "\n");
}

int main(void){
    int option;
    while (1){
        printf("%s", "=====Menu=====\n1) Option 1 - Increasing Number Triangle Pattern\n2) Option 2 - Decimal to Binary Using Recursion\n3) Option 3 - Printing a Four-Quadrant Pattern\n(-1) End Program\nSelect：");
        scanf("%d", &option);
        switch (option){
            case 1:
                int N;
                printf("%s", "Please enter the size of the triangle (1~20)：");
                scanf("%d", &N);
                if (N>20|N<1){
                    printf("%s", "Invalid input\n\n");
                    break;
                }
                Triangle(N);
                break;

            case 2:
                printf("%s", "Please enter a decimal number (0~127)：");
                scanf("%d", &N);
                if (N>127|N<0){
                    printf("%s", "Invalid input\n\n");
                    break;
                }
                dectobin(N);
                break;
            case 3:
                printf("%s", "Please enter the size of each quadrant (1~20)：");
                scanf("%d", &N);
                if (N>20|N<1){
                    printf("%s", "Invalid input\n\n");
                    break;
                }
                Four_Quadrant(N,0,0);
                break;
            case (-1):
                printf("%s","\n");
                printf("%s", "Program Ends\n");
                return 0;
            default:
                printf("%s", "Invalid input\n\n");
                break;
        }   
    }
}