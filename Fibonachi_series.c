#include<stdio.h>
int main()
{
    int num1 = 1,num2 = 1,num3 = num1 + num2;
    printf("%d %d",num1,num2);
    while (num3 <= 1000)
    {
        printf("  %d",num3);
        num1 = num2;
        num2 = num3;
        num3 = num1 + num2;
    }
    
    return 0;
}
