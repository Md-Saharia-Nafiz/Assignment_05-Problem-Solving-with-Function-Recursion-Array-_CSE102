
#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1; // Base case
    else
        return n * factorial(n - 1); // Recursive call
}

int main() {
    int number;

    // Input from user
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check for negative input
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Function call and display result
        printf("Factorial of %d is %d\n", number, factorial(number));
    }

    return 0;
}
