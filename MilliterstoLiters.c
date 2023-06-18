#include <stdio.h>
int main()
{

    float MilliLiters ,Liters;
    printf("enter the Water quantity in MilliLiters : ");
    scanf("%f",&MilliLiters);
    printf(" In MilliLiters : %.3f",MilliLiters);
    Liters = MilliLiters*1000;
    printf("In Liters : %.3f",Liters);

    return 0;

}
