# include <stdio.h>

int main(void){
	int integer1,integer2;
	printf("Enter first integer:");
	scanf("%d",&integer1);
	//prompt user to enter first integer
	printf("Enter second integer:");
        scanf("%d",&integer2);
	//prompt user to enter second integer
	int sum;
	sum = integer1 + integer2;
	printf("Sum is %d\n",sum);
	//print sum on the screen
}

