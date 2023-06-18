/*Temperature of a city in Fahrenheit degrees is input through the keyboard. 
Write a program to convert this temperature into Centigrade degrees. 
(Formula: C = (F-32) * 5/9)
*/
#include<stdio.h>
int main()
{
    float temp;
    printf("Enter the temperature of city infahrenheit\n");
    scanf("%f",&temp);
    float tempinC = (temp-32) * 5/9;
    printf("The temperature of city in centigrade is : %f",tempinC);
    
    
}
