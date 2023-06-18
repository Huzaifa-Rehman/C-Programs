#include<stdio.h>
int main()
{
    int digit,num,sum = 0;
    printf("Enter a number \n");
    scanf("%d",&num);
    while (num != 0)
    {
     digit = num %10;
     sum +=digit; 
     num /=10;  
    }
    printf("the sum of digits of number is : %d",sum);
    return 0;
}
