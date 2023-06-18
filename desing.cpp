#include<stdio.h>
main(){
	
	for(int i=9;i>=1;i--){

		for(int j=9;j>=i;j--){
        printf("\t");		
		}
		printf("%d",i);
		printf("\n");
	}

}
