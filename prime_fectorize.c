#include <stdio.h>

// Function to perform prime factorization
void primeFactorization(int num) {
    printf("Prime factorization of %d is: ", num);

    // Print 2 as a factor while the number is divisible by 2
    while (num % 2 == 0) {
        printf("2 ");
        num /= 2;
    }

    // Check for odd prime factors starting from 3
    for (int i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            printf("%d ", i);
            num /= i;
        }
    }

    // If the remaining number is a prime greater than 2
    if (num > 2) {
        printf("%d ", num);
    }

    printf("\n");
}

int main() {
    int number;

    // Get input from the user
    printf("Enter a number for prime factorization: ");
    scanf("%d", &number);

    // Perform prime factorization and print the result
    primeFactorization(number);

    return 0;
}
