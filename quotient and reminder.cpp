#include<stdio.h>
main(){

int num1,num2;

printf("Enter two numbers  \n");

scanf("%d %d",&num1,&num2);

printf("you entered %d and %d \n\n",num1,num2);
	
int quotient = num1/num2;//quotient
printf("the quotient of %d and %d = %d \n\n",num1,num2,quotient);

int reminder = num1%num2;//reminder
printf("the reminder of %d and %d = %d \n",num1,num2,reminder);	
}
