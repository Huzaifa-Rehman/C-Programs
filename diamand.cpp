#include <stdio.h>

int main() {
    
    int n ,p; // Number of rows in the diamond  ; p is  Number of characters to print in each row
    int s = n / 2; // Number of spaces to print at the beginning of each row
    printf("enter number of rows");
    scanf("%d",&n);
    if (n%2==0)
    {
        p = n / 2 + 1;
    }
    else{
        p = n / 2 -1 ;
    }
    
    for (int i = 1; i <= n; i++) { // Loop for each row
         int k = i;
        for (int j = 1; j <= p; j++) { // Loop to print characters in each row
            if (j <= s) {
                printf(" "); // Print spaces if the current column is before the middle point of the row
            } else {
                printf("k"); // Print asterisks if the current column is at or after the middle point of the row
            }
        }
        
        if (i <= n / 2) { // Check if the current row is before the middle row
            s--; // Decrease the number of spaces for the next row
            p++; // Increase the number of characters to print for the next row
        } else {
            s++; // Increase the number of spaces for the next row
            p--; // Decrease the number of characters to print for the next row
        }
        
        printf("\n"); // Move to the next line after printing each row
    }
    
    return 0;
}


