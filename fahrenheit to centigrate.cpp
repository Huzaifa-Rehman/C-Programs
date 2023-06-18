#include<stdio.h>
main(){
	float Fahrenheit,centigrate;
printf("enter the temperature in Fahrenheit \n");
scanf("%f",&Fahrenheit);

printf("temperature in Fahrenheit = %f\n",Fahrenheit);

centigrate = (Fahrenheit-32)/1.8;//conversion

printf("temperature in centigrate = %f\n",centigrate);	
	
	
}
