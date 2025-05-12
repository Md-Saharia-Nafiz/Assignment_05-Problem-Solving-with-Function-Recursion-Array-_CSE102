#include <stdio.h>

// Function to calculate cube
int cube(int num) {
    return num * num * num;
}

int main() {
    int number, result;

    // Input from user
    printf("Enter any number: ");
    scanf("%d", &number);

    // Function call
    result = cube(number);

    // Display result
    printf("The cube of %d is %d\n", number, result);

    return 0;
}
