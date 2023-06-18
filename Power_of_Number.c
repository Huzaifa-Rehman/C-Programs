#include <stdio.h>
#include <math.h>

int main() {
    double base, exponent, result;

    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%lf", &exponent);

    // Calculate the result using the pow() function from the math library
    result = pow(base, exponent);

    printf("%.2lf^%.2lf = %.2lf\n", base, exponent, result);

    return 0;
}
