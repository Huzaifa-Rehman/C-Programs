#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read input number from user
    
    int num = n; // Store the input number in a separate variable
    int pus = 0; // Counter for the position of the current digit
    
    while (num > 0) {
        pus++; // Increment the position counter
        int digit = num % 10; // Extract the last digit of the number
        int count = 0; // Counter for the occurrences of the digit
        
        num /= 10; // Remove the last digit from the number
        
        int temp = n; // Create a temporary variable to traverse the number
        int p = 0; // Counter for the position while traversing
        
        while (temp > 0) {
            p++; // Increment the position counter while traversing
            int x = temp % 10; // Extract the last digit of the temporary number
            
            if (digit == x) { // Compare the extracted digit with the current digit being checked
                if (pus > p) {
                    break; // If the position of the current digit is greater than the position being checked, exit the loop
                }
                count++; // Increment the count of occurrences of the digit
            }
            
            temp /= 10; // Remove the last digit from the temporary number
        }
        
        if (count > 0) {
            printf("%d is %d times\n", digit, count); // Print the digit and the count of its occurrences
        }
    }
    
    return 0;
}

