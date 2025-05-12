#include <stdio.h>

int main() {
    int n, i, pos, element;

    // Ask the user for the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n + 1]; // Declare an array with space for one additional element

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Ask for the position and the element to insert
    printf("Enter the position where you want to insert the element (1 to %d): ", n + 1);
    scanf("%d", &pos);

    // Check if the position is valid
    if(pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return 1;
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Shift elements to the right to make space for the new element
    for(i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the specified position
    arr[pos - 1] = element;

    // Print the updated array
    printf("Updated array is:\n");
    for(i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
