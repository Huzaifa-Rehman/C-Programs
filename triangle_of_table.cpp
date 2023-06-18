#include<stdio.h>
main(){
	int i,j,limit;
	printf("enter the loop limit\n");
	scanf("%d",&limit);

	for(i=1;i<=limit;i++){
	   for(j=1;j<=i;j++){
	   	   if(i%2 != 0)	    
		   printf("   %d",i*j);		   
	   }   
	 printf("\n");
	}	
}
