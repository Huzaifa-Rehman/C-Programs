#include<stdio.h>
main(){
	int num;
	printf("enter a number\n");
	scanf("%d",&num);
	if(num>0)
	{
		printf("positive number\n");
		num+=10;               //num=num+10;
		printf("%d is your number",num);
	}
	else
	{
		printf("negative number\n");
		num-=10;               //num=num-10;
		printf("%d is your number",num);
	}
}

