#include<stdio.h>
int main()
{
int num1,num2,num3;
printf("Enter three  numbers:");
scanf("%d %d %d",&num1,&num2,&num3);
switch(num1==num2 || num1==num3)
{
	case 1:
		switch(num1==num2){
			case 1:
			printf("num1 is equal to num2\n");
			break;
			case 0:
			printf("num1 is equal to num3 \n");
			break;
	}
}
switch(num2==num3){
	case 1:
	printf("num2 is equal to num3 \n");
}
switch(num1==num2|| num1==num3|| num2==num3)
{
	case 0:
	printf("not equal");
}
}

