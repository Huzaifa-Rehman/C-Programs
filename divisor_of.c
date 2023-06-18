#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter a number : ");
    scanf("%d %d",&num1,&num2);
    int divisor = num2%num1;
    if (divisor==0)
    {
      printf("\n1st number is divisor of 2nd");
    }
    else{
        printf("\n1st number is not divisor of 2nd");
    }
}

