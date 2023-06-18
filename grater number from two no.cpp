#include<stdio.h>
main(){
	int num1,num2,result;
	printf("enter two number\n");
	scanf("%d%d",&num1,&num2);
	if(num1>num2)
	{
		printf("First is greater value \n",num1,num2);
		result = num1*num2;
		printf("the multiplication result is %d",result);
	}
	else
	{
		printf("Second is greater value\n",num2,num1);
		result = num1+num2;
		printf("the addition result is %d",result);
	}
}

