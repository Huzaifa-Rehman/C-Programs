#include<stdio.h>
main(){
	int marks;
	printf("enter your marks\n");
	scanf("%d",&marks);
	if(marks>90)
	{
		printf("your grade is A+\n");
	}
	else if(marks>80)
	{
		printf("your grade is B+\n");
	}
	else if(marks>65)
	{
		printf("your grade is c+\n");
	}
	else if(marks>55)
	{
		printf("your grade is d+\n");
	}
	else{
		printf("sorry you are failed");
	}
}


