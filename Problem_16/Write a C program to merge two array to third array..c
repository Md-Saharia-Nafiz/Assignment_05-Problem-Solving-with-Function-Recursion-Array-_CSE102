#include <stdio.h>

int main() {
    int n1, n2, i;

    // Ask the user for the size of the first array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);

    int arr1[n1]; // Declare the first array

    // Input elements for the first array
    printf("Enter %d elements for the first array:\n", n1);
    for(i = 0; i < n1; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    // Ask the user for the size of the second array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);

    int arr2[n2]; // Declare the second array

    // Input elements for the second array
    printf("Enter %d elements for the second array:\n", n2);
    for(i = 0; i < n2; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    // Declare the third array to hold the merged arrays
    int merged[n1 + n2];

    // Copy elements from the first array to the merged array
    for(i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy elements from the second array to the merged array
    for(i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    // Print the merged array
    printf("Merged array is:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
