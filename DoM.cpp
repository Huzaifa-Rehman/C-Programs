#include <stdio.h>
int main() 
{
	int starting_day,total_days;
    printf("enter the starting day of month:\n");
	scanf("%d",&starting_day);
	
for(int j=1;j<=12;j++){
	
	printf("enter the total number of days of a month :\n");
	scanf("%d",&total_days);
	
	printf("MON\tTUE\tWED\tTHUR\tFRI\tSAT\tSUN\n");
	
	for(int i=1;i<=total_days;i++)
	{
		printf("%d\t",i);
		if((i+starting_day-1)%7==0)
		{
		printf("\n");
		}
	}
   
   printf("\n\n");

}
}
