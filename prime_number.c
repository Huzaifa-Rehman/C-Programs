#include <stdio.h>

int main() {
    int num;

    printf("enter a number\n");
    scanf("%d",&num);
    int count = 2;//count is 2 because of number itself and the 1 are divisor of every number.
    int divisor = 0;
    while (count <= num/2)
    {
        if (num % count == 0)
        {
            divisor++;
            break;
        }
        count++;
    }
    if ( divisor == 0)
    {
      printf("the %d is prime ",num);
    }
    else{
      printf("the %d is not prime ",num);
    }
    
    
}
