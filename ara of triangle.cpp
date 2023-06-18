#include<stdio.h>
main(){
	int height,base,area;
	
	printf("enter height of triangle : ");
	scanf("%d",&height);
	printf("enter base of triangle  :  ");
	scanf("%d",&base);
	
	printf(" height of triangle : %d\n",height);
	printf("base of triangle : %d\n",base);
	
	area = base*height/2;
	
	printf("area of triangle = %d\n",area);
	
}

