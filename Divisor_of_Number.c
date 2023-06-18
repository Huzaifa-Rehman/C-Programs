//6.	Enter a number and display its divisors.  (e.g., divisors of 15 are: 1,3,5,15)
#include<stdio.h>
int main(){
	
	int num,divisor;
	printf("Enter a number \n");
	scanf("%d",&num);//20
	
	int counter = 1;
	printf("The divisor of %d are :",num);

	while(counter<=num){
		if(num%counter==0){   //20%2==0
		divisor = counter;
		printf(" %d,",divisor);
		}
		
		counter++;
	}
		
}
