#include <stdio.h>

int main() {
   int num, remainder, new_num = 0, factor = 1;
   
   printf("Enter a number: ");
   scanf("%d", &num);//123
   
   while(num != 0) {
      remainder = num % 10;//3
      new_num = new_num + (remainder + 1) * factor;
      num = num / 10;
      factor = factor * 10;
   }
   
   printf("The result is %d\n", new_num);
   
   return 0;
}
