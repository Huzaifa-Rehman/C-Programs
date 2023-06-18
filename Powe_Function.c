#include<stdio.h>
#include<math.h>
int Power(int n1,int n2);
int main(){
	int num1,num2;
	
	printf("enter two number first base and second power");
	scanf("%d %d",&num1,&num2);
    printf("The power of %d by %d  is %d",num1,num2,Power(num1,num2));	 
}
 int Power(int n1,int n2){
 	 
	  int p = pow(n1,n2);
	  return p;

 }
