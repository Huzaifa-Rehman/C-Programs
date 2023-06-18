#include<stdio.h>
main(){
	int i,num,num1,num2=0;
	
    printf("enter numbers\n");
    scanf("%d",&num);
    

	do{
	
	scanf("%d",&num);
	if(num%2==0){

     printf("%d",num);
	}
	else
	{
	printf("you entered odd number\n");
	}
	i++;
}while(i>=0);

}
