#include<stdio.h>
int fibonacci(int limit);
int main()
{
    int num;
    printf("Enter a limit of fibonacci series : ");
    scanf("%d",&num);//7;
    if(num<0)
	printf("You entered invalid limit");
    fibonacci(num);
}
int fibonacci(int limit){
    static int x = 0,y = 1;
    if ( 1 <= limit)//7//5//3
    {
    	printf("%d  ",y);
		x = x+y;
		printf("%d  ",x);
		y = x+y;
		fibonacci(limit-1);//5//3
    }   
}