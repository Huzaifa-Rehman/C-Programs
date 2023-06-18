#include<stdio.h>
int f1(int num,int x = 1);
int main()
{
    int Num;
    printf("enter a number or limit \n");
    scanf("%d",&Num);//3
    f1(Num);
}
int f1(num , x = 1){
    if (num != x)//true
    {
        printf("%d",num);//3
        f1(num-1);//2
    }
    else{
        return x;
    }
    
}