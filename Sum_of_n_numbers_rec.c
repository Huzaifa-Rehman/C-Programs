#include<stdio.h>
int printsum(int x){
    static int sum = 0;
    if (x>0)//3-->true,2-->true,1-->true,0-->false
    {
        printsum(x-1);//2-->1-->0
        sum += x; 
    }
   return sum;
}
int main()
{
    int num;
    printf("enter a number \n");
    scanf("%d",&num);  //3
     int res = printsum(num);//3
    printf("The sum is %d",res);
}
