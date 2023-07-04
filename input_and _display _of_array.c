#include<stdio.h>
int input_display(int a1[]);
int main()
{
    int a1[] = {1,2,3,4,5};
    input_display(a1[5]);
    
    }
int input_display(int a1[]){
    printf("Enter the 5 number for an array \n");
    for (int  i = 0; i < 5; i++)
    {
        scanf(" %d",&a1[i]);
    }
    //dilplay
    for ( int i = 0; i < 5; i++)
    {
        printf("%d",a1[i]);
    }
} 