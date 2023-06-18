#include<stdio.h>
main(){
    
    float kilometers ,meters;
    printf("enter the distance in kilometers : ");
    scanf("%f",&kilometers);
    printf("Distance in kilometers : %.3f\n",kilometers);
    meters = kilometers*1000;
    printf("distance in meters : %.3f",meters);

}
