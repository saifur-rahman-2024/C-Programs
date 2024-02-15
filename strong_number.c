#include <stdio.h>
#include <math.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Function to check if a number is a Strong number
int isStrong(int num) {
    int originalNum = num;
    int sum = 0;

    while (num != 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    return (sum == originalNum);
}

int main() {
    int number;

    // Get input from the user
    printf("Enter a number to check if it's a Strong number: ");
    scanf("%d", &number);

    // Check and print the result
    if (isStrong(number)) {
        printf("%d is a Strong number.\n", number);
    } else {
        printf("%d is not a Strong number.\n", number);
    }

    return 0;
}

