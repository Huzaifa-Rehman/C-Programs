#include<stdio.h>
main(){
	int num1 ,num2,result,operat;
	printf("enter the two numbers for arithematic operation\n");
	scanf(" %d %d",&num1,&num2);
	printf("enter 1 for addition ,2 for substraction, 3 for multiplication ,4 for division , 5 for modulus  \n");
	scanf(" %d",&operat);
	switch(operat){
		case 1:
		result = num1+num2;
		printf("the addition of %d and %d = %d",num1,num2,result);
		break;
		
		case 2:
		result = num1-num2;
		printf("the substraction of %d and %d = %d",num1,num2,result);
		break;
		
		case 3:
		result = num1*num2;
		printf("the multiplication of %d and %d = %d",num1,num2,result);
		break;
		
		case 4:
		result = num1/num2;
		printf("the division of %d and %d = %d",num1,num2,result);
		break;
		
		case 5:
		result = num1%num2;
		printf("the modulus of %d and %d = %d",num1,num2,result);
	    break;
	    
		default:
			printf("input error");
	}
}
