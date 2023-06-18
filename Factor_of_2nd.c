#include<stdio.h>
int main()
{
    

    int num1,num2;
    printf("Enter a number : ");
    scanf("%d %d",&num1,&num2);
    int fact = num2%num1;
    if (fact==0)
    {
      printf("\n1st number is factor of 2nd");
    }
    else{
        printf("\n1st number is not factor of 2nd");
    }

}
