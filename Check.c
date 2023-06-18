#include<stdio.h>
int main()
{
    float n;
    scanf("%f",&n);
    int count = 1;
    float sqrt;
   for (float i = 0.1 ; i <= n/2; i+=0.1)
   {count++;
    //printf("%.2f",a);
   // printf("hello\n");
   if(i*i==n){

   
sqrt=i;
   }
   }
    printf("%f",sqrt);
    printf("\n%d",count);
}
