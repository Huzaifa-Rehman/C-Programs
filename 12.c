#include <stdio.h>

int main() {
    int rows, i, j,k;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < 2 * rows - 1; j++) {
            k = j;
            if (j >= i && j < 2 * rows - 1 - i)
                printf("%d",k);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
