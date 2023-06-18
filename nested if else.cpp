#include<stdio.h>
int main()
{	int num;
	printf("enter a number \n");
	scanf("%d",&num);
	if(num<10)
	{
		if(num==1)
		{
			printf("The value is:%d\n",num);
		}
		else
		{
			printf("The value is greater than 1");
		}
	}
	else
	{
		printf("The value is greater than 10");
	}
}
