#include<stdio.h>
int main(){
	int i,num,reverse=0,digit;
	
    printf("enter a number\n");
    scanf("%d",&num);        //123-->
    
    int x = num;            //x-->123
	
	for(i=num ; i>0;i=i/10){//i = 123;-->
	digit = i%10;           //digit = 3;
    digit = digit + 1;
	reverse = (reverse*10)+digit;//reverse = (0x10)+4= 4
    
    }
    printf("the reverse of %d = %d \n",num,reverse);
}
