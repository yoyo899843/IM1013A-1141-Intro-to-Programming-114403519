# include<stdio.h>


void Triangle(int N){
    int count=1;
    printf("%s","\n");
    for(int i=1; i<=N; i++){
        for(int j=1; j<=i; j++){
            printf("%2d ", count);
            count = count + 1;
        }
        printf("%s", "\n");
    }
    printf("%s","\n");
}

void Four_Quadrant(int N){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            printf("%s", "@");
        }
        printf("%s", "|");
        for(int j=0; j<N; j++){
            printf("%s", "#");
        }
        printf("%s", "\n");
    }
    for(int j=0; j<N; j++){
        printf("%s", "-");
    }
    printf("%s", "+");
    for(int j=0; j<N; j++){
        printf("%s", "-");
    }
    printf("%s", "\n");
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            printf("%s", "%");
        }
        printf("%s", "|");
        for(int j=0; j<N; j++){
            printf("%s", "&");
        }
        printf("%s", "\n");
    }
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
            case 3:
                printf("%s", "Please enter the size of the triangle (1~20)：");
                scanf("%d", &N);
                if (N>20|N<1){
                    printf("%s", "Invalid input\n\n");
                    break;
                }
                Four_Quadrant(N);
                break;
            case (-1):
                printf("%s","\n");
                printf("%s", "Program Ends\n");
                return 0;
            default:
                printf("%s", "Invalid input");
                break;
        }   
    }
}