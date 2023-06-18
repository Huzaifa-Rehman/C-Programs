/*Enter 3 numbers and 
find largest and*/    
#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // Find the largest number
    int largest = num1;
    if (num2 > largest) {
        largest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }
    printf("Largest number is: %d\n", largest);
    
    // Find the smallest number
    int smallest = num1;
    if (num2 < smallest) {
        smallest = num2;
    }
    if (num3 < smallest) {
        smallest = num3;
    }
    printf("Smallest number is: %d\n", smallest);

    return 0;
}
