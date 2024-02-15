#include <stdio.h>

// Function to print left triangle pattern
void leftTriangle(int rows) {
    printf("Left Triangle Pattern:\n");
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// Function to print right triangle pattern
void rightTriangle(int rows) {
    printf("\nRight Triangle Pattern:\n");
    for (int i = 1; i <= rows; i++) {
        for (int j = rows; j > i; j--) {
            printf("  ");
        }
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }
}

// Function to print up arrow pattern
void upArrow(int rows) {
    printf("\nUp Arrow Pattern:\n");
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = rows - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// Function to print down arrow pattern
void downArrow(int rows) {
    printf("\nDown Arrow Pattern:\n");
    for (int i = 1; i <= rows; i++) {
        for (int j = rows; j >= i; j--) {
            printf("* ");
        }
        printf("\n");
    }
}

// Function to print star pattern
void starPattern(int rows) {
    printf("\nStar Pattern:\n");
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = rows - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int rows;

    printf("Enter the number of rows for the patterns: ");
    scanf("%d", &rows);

    leftTriangle(rows);
    rightTriangle(rows);
    upArrow(rows);
    downArrow(rows);
    starPattern(rows);

    return 0;
}
