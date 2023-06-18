/*Write a program for temperature conversion. 
Program should include all 6 types of conversions,
using character data type for choice variable.*/
#include<stdio.h>
main(){
	float celsius ,fahrenheit,kelvin;
	char choice;
	
	printf("enter 1 for celsius to fahrenheit conversion \n");
	printf("enter 2 for celsius to kelvin conversion \n");
	printf("enter 3 for fahrenheit to celsius conversion \n");
	printf("enter 4 for fahrenheit to kelvin conversion \n");
	printf("enter 5 for kelvin to celsius conversion \n");
	printf("enter 6 for kelvin to fahrenheit conversion \n");
	
	scanf(" %c",&choice);

	switch(choice){
	
		case '1':
		printf("enter temperature in celsius\n");
       	scanf(" %f",&celsius);
        fahrenheit =(1.8*celsius)+32;//conversion
        printf("%.1f C  = %.1f F\n",celsius,fahrenheit);
		break;
		
		case '2':
		printf("enter temperature in celsius\n");
       	scanf(" %f",&celsius);
		kelvin = celsius + 273.15;
		printf("%.1f C  = %.1f k\n",celsius,kelvin);
		break;
		
		case '3':
		printf("enter temperature in fahrenheit\n");
       	scanf(" %f",&fahrenheit);
		celsius = (fahrenheit-32)/1.8;
		printf("%.1f f  = %.1f c\n",fahrenheit,celsius);
		break;
		
		case '4':
		printf("enter temperature in fahrenheit\n");
       	scanf(" %f",&fahrenheit);
		kelvin = 5/9*fahrenheit + 459.67;
		printf("%.1f f  = %.1f k\n",fahrenheit,kelvin);
		break;
		
		case '5':
		printf("enter temperature in kelvin\n");
       	scanf(" %f",&kelvin);
		celsius = kelvin - 273.15;
		printf("%.1f k  = %.1f c\n",kelvin,celsius);
		break;
		 
		case '6':
		printf("enter temperature in kalvin\n");
       	scanf(" %f",&kelvin);
	    fahrenheit = 1.8*(kelvin-273) + 32;
		printf("%.1f k  = %.1f f\n",kelvin,fahrenheit);
		break;	
		
		default:
			printf("you enter wrong character\n");
	}
}
