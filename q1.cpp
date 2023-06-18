#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5;
    int sum, avg, product;

    printf("Enter five integers: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    sum = num1 + num2 + num3 + num4 + num5;
    avg = sum / 5;
    product = num1 * num2 * num3 * num4 * num5;

    printf("Sum of integers: %d\n", sum);
    printf("Average of integers: %d\n", avg);
    printf("Product of integers: %d\n", product);

    
}

