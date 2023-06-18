#include<stdio.h>
int Prime_Function(int n1);
int main(){
	
	int num1;
	printf("Enter a number \n");
	scanf("%d",&num1);//3
    Prime_Function(num1);
 
}
int Prime_Function(int n1){
	
    int divisor = 2;
    int i;
    for(
	i = 2 ; i<=n1/2 ; i++){
     if(n1%i==0){
     	divisor++;
		 break;
	 }
	}
	
	if(divisor == 2){
		printf("The %d is prime",n1);
	}
	else{
		printf("The %d is composite",n1);
	}
}
