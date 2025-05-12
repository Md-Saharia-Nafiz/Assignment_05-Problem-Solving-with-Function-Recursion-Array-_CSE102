
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Ask the user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare the array

    // Input elements from the user
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add each element to sum
    }

    // Print the sum
    printf("The sum of all array elements is: %d\n", sum);

    return 0;
}
