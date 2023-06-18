#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= rows; j++) {
            if(i%2 != 0 || j%2 !=0 ) {
                printf("*");
            } else {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}
