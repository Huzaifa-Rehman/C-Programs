#include<stdio.h>
main(){
	int num;
	
    printf("enter a number\n");
    scanf("%d",&num);
    	
	do{

    scanf("%d",&num);

    }while(num%2==0);
    
	printf("you entered odd number\n");
    
}
