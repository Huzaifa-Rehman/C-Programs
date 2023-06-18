#include<stdio.h>
main(){
	
	int num,cub;
	printf("enter numbers and 0 to terminate loop\n");
	do{
	
		scanf("%d",&num);
		cub = num*num*num;
        printf("the cube of %d = %d \n",num,cub);		
	}while(num != 0);

}
