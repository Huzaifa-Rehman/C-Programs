#include<stdio.h>
main(){
	
	int  row=10, space, k = 0;
	printf("enter the number of rows\n");
	scanf("%d",&row);
	
	for(int i=1 ; i<=row ; ++i , k = 0){
		
		for(space=1 ; space<=row-i ; ++space)
		{ printf("  "); }
		
		while(k!=2*i-1){
			printf("* ");
		    ++k;
		}
		printf("\n");
		
    }
	//	printf("\n");
		
	for(int i=row ; i>0 ; --i , k = 0){
		
		for(space=row ; space>i ; --space)
		{ printf("  "); }
		
		while(k!=2*i-1){
			printf("* ");
		    ++k;
		}
		printf("\n");
		
	}
	
	
}
