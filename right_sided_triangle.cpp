#include<stdio.h>
main(){
	int row,space,k=0;
	printf("enter limit of loon\n");
	scanf("%d",&row);
	
	for(int i=row ; i>=1 ; i--, k = 0){
		
		for(space=1 ; space<=row-i ; space++)
		{ printf("  "); }
		
		while(k!=2*i-1){
			printf("* ");
		    k++;
		}
		printf("\n");
		
    }

		

	
}
