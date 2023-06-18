#include<stdio.h>
main(){

int num1,num2,num3;

printf("Enter two numbers  \n");

scanf("%d %d",&num1,&num2);

printf("the values before swaping \n num1 = %d\n num2 = %d \n",num1,num2);

num3 = num1;
num1 = num2;
num2 = num3;
printf("the values after swaping \n num1 = %d\n num2 = %d \n",num1,num2);
	
}
