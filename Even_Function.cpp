#include<stdio.h>
int Even_Odd(int n1);
int main(){
	
	int num1;
	printf("Enter a number \n");
	scanf("%d",&num1);//3
    Even_Odd(num1);

}
int Even_Odd(int n1){
	
    if (n1%2==0)
    printf("the entered  value %d is even",n1);
    else
	printf("the entered value %d is odd ",n1);	
}
