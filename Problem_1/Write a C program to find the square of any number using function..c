
#include <stdio.h>

// Function to calculate square
int square(int num) {
    return num * num;
}

int main() {
    int number, result;

    // Input from user
    printf("Enter any number: ");
    scanf("%d", &number);

    // Function call
    result = square(number);

    // Display result
    printf("The square of %d is %d\n", number, result);

    return 0;
}
