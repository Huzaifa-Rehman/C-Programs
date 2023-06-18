#include<stdio.h>
#include<math.h>
float Sq_Root(float n);
int main(){
	float num;
	
	printf("enter a number to find square root : ");
	scanf("%f",&num);
    printf("The square root of %.0f is %.2f",num,Sq_Root(num));	 
}
float Sq_Root(float n){
 	 
	  int Sq_Root = sqrt(n);
	  return Sq_Root;
 }
