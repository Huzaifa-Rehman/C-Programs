

#include<stdio.h>
main(){
    int num,k,digit;
	printf("enter a number : ");
	scanf("%d",&num);
	
	printf("enter a required location : ");
	scanf("%d",&k);
	for(int i=1;i<=k;i++){
		
	    digit = num%10;
	    num = num/10;
	}
	printf("the %d digit from right is : %d",k,digit);
}
