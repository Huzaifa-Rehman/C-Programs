#include<stdio.h>
main(){
	int a=1,b=2,c=3,d;
	
	printf(" %d\n %d\n %d\n\n",a,b,c);
	
	c = a+b+c;//6
	b = c-b-a;//3
	a = c-b-a;//2
	c = c-b-a;//1
	
	printf(" %d\n %d\n %d\n",a,b,c);
	
}
