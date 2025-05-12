
#include <stdio.h>

// Recursive function to print natural numbers from 1 to n
void printNaturalNumbers(int current, int n) {
    if (current > n)
        return; // Base case: stop when current exceeds n
    printf("%d ", current);
    printNaturalNumbers(current + 1, n); // Recursive call
}

int main() {
    int n;

    // Input from user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Check for valid input
    if (n < 1) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Natural numbers from 1 to %d are:\n", n);
        printNaturalNumbers(1, n); // Start from 1
    }

    return 0;
}
