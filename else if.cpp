#include<stdio.h>
int main()
{   int marks;
	printf("enter your marks\n");
	scanf("%d",&marks);
	if(marks>75){
		printf("you are in section A\n");
	}
	else if(marks>65){
		printf("\n");
	}
	else if(marks>55){
		printf("Third class");
	}
	else{
		printf("Fourth class");
	}
	return 0;
}
