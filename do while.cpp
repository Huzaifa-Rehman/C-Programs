#include<stdio.h>
main(){
	int x,num1,num2;
	printf("enter a number for table and 2nd for limit\n");
	scanf("%d%d",&num1,&num2);
	x=1;
	do{
         
		printf("%d x %d = %d\n",num1,x,num1*x);
		x++;
	}while(x<=num2);
}
