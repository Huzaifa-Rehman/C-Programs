#include <stdio.h>

int main() {
    int n, i;
    int num, max = 0;

    printf("Enter the total number of integers: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter integer %d: ", i);
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
    }

    printf("Largest number is: %d\n", max);
    return 0;
}

