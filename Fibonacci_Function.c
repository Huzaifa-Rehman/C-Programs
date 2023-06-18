#include<stdio.h>
int fibonacci(int limit);
int main()
{
    int num;
    printf("Enter a limit of fibonacci series : ");
    scanf("%d",&num);//7;
    fibonacci(num);
}
int fibonacci(int limit){
    static int x = 0,y = 1;
    printf("%d  ",y);
    if ( 1 < limit)//7//5//3
    {
        x = x+y;
        printf("%d  ",x);
        y = x+y;
        fibonacci(--limit);//5//3
    }
}