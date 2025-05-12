#include <stdio.h>

// Function to calculate diameter
float calculateDiameter(float radius) {
    return 2 * radius;
}

int main() {
    float radius, diameter;

    // Input from user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Function call
    diameter = calculateDiameter(radius);

    // Display result
    printf("The diameter of the circle is: %.2f\n", diameter);

    return 0;
}
