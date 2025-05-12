#include <stdio.h>

int main() {
    int n, i, evenCount = 0;

    // Ask the user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare the array

    // Input elements from the user
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Count even elements
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            evenCount++;
        }
    }

    // Print the result
    printf("The total number of even elements is: %d\n", evenCount);

    return 0;
}
