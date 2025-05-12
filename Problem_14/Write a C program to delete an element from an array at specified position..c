
#include <stdio.h>

int main() {
    int n, i, pos;

    // Ask the user for the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare the array

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Ask for the position of the element to delete
    printf("Enter the position (1 to %d) to delete the element: ", n);
    scanf("%d", &pos);

    // Check if the position is valid
    if(pos < 1 || pos > n) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the left to fill the gap created by deletion
    for(i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrease the size of the array
    n--;

    // Print the updated array
    printf("Array after deletion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
