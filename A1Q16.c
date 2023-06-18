#include<stdio.h>
int main()
{
    float length ,width;
    printf("enter the length and width of a rectangle\n");
    scanf("%f %f",&length,&width);
    float  area = length*width;
    printf("the are of rectangle is : %0.2f",area);
}
