#include<stdio.h>

int main(){

    int i,j,rows,col = 1,half;

    printf("Enter rows\n");
    scanf("%d",&rows);//5
 
   half = rows /2 + 1;//3
      
   for(i = 1;i<=rows;i++) {//2<=5

    for(j = 1;j <= rows;j++) {//4<=5

        if(j <= col || j > rows - col) {//1<=2 || 5>2
         
         printf("*");//*+++*
                     //**+**
                     //*****
        }
        else {
            printf(" ");//+++
        }
    }printf("\n");
    if(i < half) {//3!<3
        col++;//3
    }
    else{
        col--;//2
    }
   }

}