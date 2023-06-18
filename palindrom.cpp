#include<stdio.h>
main(){
	int i,num,reverse=0,digit;
	
    printf("enter a number\n");
    scanf("%d",&num);        //123-->
    
    int x = num;            //x-->123
	
	for(i=num ; i > 0 ; i=i/10){//i = 123;-->12;-->1

	digit = i%10;           //digit = 3; --> 2; --> 1
	reverse = (reverse*10)+digit;//reverse = (0x10)+3= 3; (3x10)+2 = 32;  (32x10)+1 = 321; 
    }
    printf("the reverse of %d = %d \n",num,reverse);
    
	if(reverse==num){	
	printf("palindrome\n");
    }
    else{
	printf("not palindrome\n");
	}
}

