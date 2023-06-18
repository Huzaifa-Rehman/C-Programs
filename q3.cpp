#include <stdio.h>

int square(int n);
int cube(int n);

int main() {
    int i;

    printf("N \tN^2 \tN^3 \tN^4\n");
    for (i = 1; i <= 10; i++) {
        printf("%d \t%d \t%d \t%d\n", i, square(i), cube(i), square(square(i)));
    }

    return 0;
}

int square(int n) {
    return n * n;
}

int cube(int n) {
    return n * n * n;
}

