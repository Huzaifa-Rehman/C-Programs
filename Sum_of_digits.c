#include<stdio.h>
int main()
{
    int num,digit = 0,sum = 0;
    printf("Ente a Number : ");
    scanf("%d",&num);
    while (num!=0)
    {//123
    
        digit = num%10;//3
        sum += digit ;//sum = 0+3;
        num = num/10;//12
    }
    printf("The sum of Digits are : %d\n",digit)
   
}
