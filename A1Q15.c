/*Ask a user to enter her basic salary. 
Add a 15% house rent,
10% medical allowance, 
and 5% convince allowance on basic salary. 
Print the total salary of the user.*/
#include<stdio.h>
int main()
{  float bsalary,rent,medical,othercost;
    printf("Enter your basic salary \n");
    scanf("%f",&bsalary);//20000
    printf("Enter your House rent \n");
    scanf("%f",&rent);//8000
    bsalary += rent*0.15;
    printf("Enter your medical allowence \n");
    scanf("%f",&medical);//10000
    bsalary = medical*0.1;
    printf("Enter your convince allowance \n");
    scanf("%f",&othercost);//6000
    bsalary = medical*0.05;
    printf("your total salary is : %f",bsalary);

      
     
}
