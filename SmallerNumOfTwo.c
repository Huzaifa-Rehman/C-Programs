#include<stdio.h>
int main()
{
  
    int num1,num2;
    printf("Enter two different numbers to know smaller one : ");
    scanf("%d %d",&num1,&num2);
    
    if (num1>num2)
    {
      printf("\n%d number is smaller then  %d",num2,num1);
    }
    else{
        printf("\n%d number is smaller then %d",num1,num2);
    }
   
}
