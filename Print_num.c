#include<stdio.h>
void print_number(int Num);
int main()
{
    int num ;
    printf("Enter a number \n");
    scanf("%d",&num);//3
    print_number(num);//3
}
void print_number(int Num){
    
    if (Num > 0)//3-->true
    {   
        print_number(Num-1);//2
        printf("%d  ",Num);
        
    }
    
}
