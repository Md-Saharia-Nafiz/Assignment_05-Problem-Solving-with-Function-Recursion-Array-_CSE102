#include <stdio.h>

// Function to check even or odd
void checkEvenOdd(int num) {
    if (num % 2 == 0) {
        printf("%d is Even.\n", num);
    } else {
        printf("%d is Odd.\n", num);
    }
}

int main() {
    int number;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Function call
    checkEvenOdd(number);

    return 0;
}
