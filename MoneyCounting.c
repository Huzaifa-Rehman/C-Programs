#include<stdio.h>
int main()
{
    int C1,C2,C5,N10,N20,N50,total=0;
    printf("enter the number of coin 1\n");
    scanf("%d",&C1); 
    total += C1;
    printf("enter the number of coin 2\n");
    scanf("%d",&C2);
    total += C2*2;
    printf("enter the number of coin 5\n");
    scanf("%d",&C5);
    total += C5*5;
    printf("enter the number of note 10\n");
    scanf("%d",&N10);
    total += N10*10;
    printf("enter the number of note 20\n");
    scanf("%d",&N20);
    total += N20*20;
    printf("enter the number of note 50\n");
    scanf("%d",&N50);
    total += N50*50;
    printf("Your total money is : %d",total);
}

