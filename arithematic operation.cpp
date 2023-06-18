#include<stdio.h>
main(){
	int num1,num2,sum,subs,multi,mod;
    float divid;
printf("Enter two numbers  \n");
scanf("%f %f",&num1,&num2);

if(num1<num2){
	
	num1 = num1+num2;
	num2 = num1-num2;
	num1 = num1-num2;
}

sum = num1+num2;//addition
printf("the sum of %d and %d = %d \n\n",num1,num2,sum);

subs = num1-num2;//substraction
printf("the substraction of %d and %d = %d \n\n",num1,num2,subs);

multi =	num1*num2;//multiplication
printf("the multiplication of %d and %d = %d \n\n",num1,num2,multi);

divid = num1/num2;//division
printf("the division of %d and %d = %.1f \n\n",num1,num2,divid);

mod = num1%num2;//remainder
printf("the modulus of %d and %d = %d \n\n",num1,num2,mod);
	
}
