#include <stdio.h>

int main() {
    int n, i;

    // Ask the user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr1[n], arr2[n]; // Declare two arrays

    // Input elements into the first array
    printf("Enter %d elements for the first array:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    // Copy elements from arr1 to arr2
    for(i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    // Print the elements of the second array
    printf("Elements copied to the second array are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
