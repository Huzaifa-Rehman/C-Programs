//Write a program that inputs range i.e., starting and ending point 
//displays all perfect squares between given range.
//Program should also display the total number of perfect squares between that range. 
//
//Sample output: 
//Enter lower limit: 2
//Enter upper limit: 10
//4 is a perfect square
//9 is a perfect square. 
//Total number of perfect squares between 2 and 10 are 2.
 
#include<stdio.h>
main(){
	int count,low ,up;
	printf("enter lower limit of loop : \n");
	scanf("%d",&low);
	printf("enter upper limit of loop : \n");
	scanf("%d",&up);
	for(int i=low;i<=up;i++){
		 
		 if(i){
		 	
		 	printf("%d\n",i);
		    count +=1;
     	}	
	}
	printf("total number of perfect square are = %d",count);
}

