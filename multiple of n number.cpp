#include<stdio.h>
main()
{
	   int num,upto,multiple;
	   printf("enter the number\n");
	   scanf("%d",&num);
	   printf("enter the limit\n");
	   scanf("%d",&upto);
	   for(int i=1;i<=upto;i++)
	   {
	   	   multiple = num * i;
		   printf("   %d ",multiple);
	   }
}
