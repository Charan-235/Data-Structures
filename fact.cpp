#include <stdio.h>

int main() {
    int n;
    int fact = 1;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if the entered number is negative
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial using a for loop
        for (int i = 1; i <= n; ++i) {
            fact *= i;
        }

        // Print the factorial
        printf("Factorial of %d is %d\n", n, fact);
    }

    return 0;
}

