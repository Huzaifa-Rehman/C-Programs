#include<stdio.h>
main(){
	int num;
	
    printf("enter a number\n");
    scanf("%d",&num);
    int count=0;
    int digit1,d;
    while(num>0){
         d = num%10;
        if(count==0)
        {
            digit1=d;
            count++;
        }
        num/=10;
    }
    if(d==digit1){
        printf("these are equal");
    }
}
