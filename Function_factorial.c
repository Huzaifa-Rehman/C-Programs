#include<stdio.h>
int factorial(int x);
int main()
{
    int num;
    printf("Enter a number to find factorial \n");
    scanf("%d",&num);
    printf("The factorial of %d is %d",num,factorial(num));
}
int factorial(int x){
    static int fact = 1;
    if (x > 0)
    {
        factorial(x-1);
        fact *= x;
    }
    return fact;
}
