#include<stdio.h>
int main()
{
    int sum,average,counter = 1,num;
   printf("Enter ten numbers : ");
while(counter<=10){
 	    
		scanf("%d",&num);
		counter++;     	
		sum +=num;
}   

printf("The sum of  number you entered are : %d\n",sum);
printf("The average of  number you entered are : %d\n",sum/10);


}
