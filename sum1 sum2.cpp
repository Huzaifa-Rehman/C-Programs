#include<stdio.h>
main(){
	int num1,num2,num3,num4,sum1,sum2;
	printf("enter two number\n");
	scanf("%d%d",&num1,&num2);
	sum1 = num1+num2;
	
	printf("enter two number\n");
	scanf("%d%d",&num3,&num4);
	sum2 = num3+num4;
	if(sum1>sum2)
	{
		printf("first set of values are greater than second set\n");
	}
	else
	{
		printf("second set of values are greater\n");
	}
}

