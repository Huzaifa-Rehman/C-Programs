#include<stdio.h>
main(){
	int a=1,b=2,c=3,d;
	d=a;
	b=a;
	c=b;
	a=b;
	printf("%d    %d    %d   %d",a,b,c,d);
	
}
