#include <stdio.h>

// Function to calculate the factorial of a number
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // 0! and 1! are both 1
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    // Get input from the user
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num);

    // Check for negative input
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate and print the factorial
        printf("Factorial of %d is: %llu\n", num, factorial(num));
    }

    return 0;
}

