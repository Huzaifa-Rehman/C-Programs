#include<stdio.h>
int swap(int n1,int n2);
int main(){
	int num1,num2;
	
	printf("Enter two numbers to swap them \n");
	scanf("%d %d",&num1,&num2);//3,4
	printf("the  value before swaping of n1  = %d\n",num1);
    printf("the  value before swaping of n2  = %d\n",num2);
    swap(num1,num2);

}
int swap(n1,n2){
	
	n1 = n1+n2;//7
	n2 = n1-n2;//3
	n1 = n1-n2;//4
    printf("the swaped value of n1  = %d\n",n1);
    printf("the swaped value of n2  = %d\n",n2);
	
}
