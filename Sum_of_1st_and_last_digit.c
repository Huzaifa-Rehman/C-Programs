#include <stdio.h>

int main() {
    int num, digit, first, last, sum;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Extract first digit
    first = num;
    while (first >= 10) {
        first /= 10;
         }
    
    // Extract last digit
    last = num % 10;
    
    // Calculate sum of first and last digits
    sum = first + last;
    printf("The sum of first and last digit is: %d\n", sum);
    
    return 0;
}
