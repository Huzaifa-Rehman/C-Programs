/*If the three sides of a triangle are entered through the keyboard, 
write a program to check whether the triangle is valid or not. 
The triangle is valid if the sum of two sides is greater than the largest of the three sides.*/
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && b + c > a && c + a > b) {
        printf("The triangle is valid.\n");
    }
    else {
        printf("The triangle is not valid.\n");
    }
    return 0;
}
