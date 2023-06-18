/*Given that f(x) = |x^3 - 20|, find f(-3). 
Ask user to entr value of X and 
find the result*/
#include<stdio.h>
int main()
{
  int x;
  printf("enter the value of x\n");
  scanf("%d",&x);
  int function = (x*3)-20;
  if (function < 0)
  {
    function = -1*function;
  }
  printf("The result is : %d",function);
}
