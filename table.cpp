#include<stdio.h>
main(){
	int x=1,num1,num2;

	printf("enter 1st number for table and 2nd for uper limit\n");
	scanf("%d%d",&num1,&num2);
	
	while(x<=num2){
         
		printf("%d x %d = %d\n",num1,x,num1*x);
		x++;
	}
}
