#include <stdio.h>

// Function to find the sum of the series
int sumOfSeries(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of the series
    int result = sumOfSeries(n);

    // Print the sum
    printf("Sum of the series from 1 to %d is: %d\n", n, result);

    return 0;
}
