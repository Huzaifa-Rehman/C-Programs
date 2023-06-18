#include<stdio.h>
int main()
{
    

    int num1,num2;
    printf("Enter two different numbers to know greater one : ");
    scanf("%d %d",&num1,&num2);
    
    if (num1>num2)
    {
      printf("\n%d number is greater then  %d",num1,num2);
    }
    else{
        printf("\n%d number is greater then %d",num2,num1);
    }

}
