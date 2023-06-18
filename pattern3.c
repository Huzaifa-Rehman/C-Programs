#include<stdio.h>

int main(){

 char ch;
    int  i,j,rows,k = 0,half;

    printf("Enter rows\n");

    scanf("%d",&rows);//4

    half = (rows*2 -1) / 2 +1;//3

    for(i = 1;i<=rows;i++) {//

        char ch = 'A';

        for(j = 1;j<=rows + k;j++) {//1<=4

            if(j<=rows - i) {//1<=2
                printf("+");//++
            }
            else if(j < half) {//4<4

                printf("%c",ch++);//B
            }
            else{
                printf("%c",ch--);//
            }
        }printf("\n");
        k++;//1
    }
}