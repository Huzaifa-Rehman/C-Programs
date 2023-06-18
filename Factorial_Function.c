#include<stdio.h>
int factorial(int n1);
int main(){
	int num1,num2;
	
	printf("enter a number to find Factorial :");
	scanf("%d",&num1);
	printf("the factorial of %d is : %d",num1,factorial(num1));
    
} 

 int factorial(int n1){
 	 int fact = 1;
 	 while(n1 > 0){
 	 	fact *= n1;
 	 	n1--; 
	  }

     return fact;
 }
