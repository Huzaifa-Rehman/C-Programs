#include<stdio.h>
main(){
	int num;
	
    printf("enter a number\n");
    scanf("%d",&num);
    

    int org = num;
    int org1=num;
    int count=0;
    int count1=0;
    while(org>0){
        count++;
        org/=10;
        }
        int count2=count-2;
        int d1,d2;
        while(num>0){
            int d = num%10;
            
            if(count1==1){
                d1= d;
            }
            if(count1==count2){
                d2=d;
            }
            count1++;
            num=num/10;
        }
        if(d1==d2){
            printf("they are equal");
        }
        else{
            printf("asim");
        }

        }