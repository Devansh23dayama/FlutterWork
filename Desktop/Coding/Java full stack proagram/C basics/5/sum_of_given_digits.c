#include <stdio.h>

int main() {
    int number, temp, digit, sum = 0, count = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number; 
    
    while (temp != 0) {
        digit = temp % 10;  // Extract the last digit
        sum += digit;       // Add the digit to the sum
        count++;          // Increment the digit count
        temp /= 10;        // Remove the last digit
    }

    printf("Sum of digits: %d\n", sum);
    printf("Number of digits: %d\n", count);

    return 0;
}