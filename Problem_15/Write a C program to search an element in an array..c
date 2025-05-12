#include <stdio.h>

int main() {
    int n, i, element, found = 0;

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

    // Ask for the element to search
    printf("Enter the element to search: ");
    scanf("%d", &element);

    // Search for the element
    for(i = 0; i < n; i++) {
        if(arr[i] == element) {
            printf("Element %d found at position %d.\n", element, i + 1);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Element %d not found in the array.\n", element);
    }

    return 0;
}
