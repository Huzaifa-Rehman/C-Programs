/*1.	Ask user to enter 10 numbers and find 
the largest, 
smallest, 
Average, 
and Sum of the entered numbers. */
#include<stdio.h>

int main(){
	int num1,num2 = 0,sum = 0,average,mini = 999999999;
	printf("enter any ten numbers\n");
	int i = 1;
	while(i <= 10){
		scanf("%d",&num1);
		if(num1>num2){
			num2 = num1;
		}
		if(num1<num2){
		 mini = num1;
		}
		sum +=num1;
		i++;
	}
	
	average = sum/10;
	printf("%d\n",mini);
	printf("%d\n",num2);
	printf("%d\n",sum);
	printf("%d\n",average);
	

}
