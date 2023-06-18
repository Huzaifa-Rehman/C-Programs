#include <stdio.h>
#include <stdlib.h>

int main() {
     int i,j,n,k;
     
	 printf("enter number of rows : ");
	 scanf("%d",&n);//4

	 for (i = 1; i <= n ; i++)//1
	 {
		k = i*2-1;
		for ( j = 1; j <= n*2-1 ; j++)//
		{
			if ( j <= n-i || j >= n+i)
			{
				printf(" ");
			}
			else{
				printf("%d",k--);
			}
		}
		printf("\n");
	 }
}