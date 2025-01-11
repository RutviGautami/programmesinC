#include <stdio.h>

// Define structure for distance
struct Distance {
    int feet;
    int inches;
};

// Function to add two distances
struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;
    result.inches = d1.inches + d2.inches;
    result.feet = d1.feet + d2.feet + (result.inches / 12);
    result.inches = result.inches % 12; // Ensure inches < 12
    return result;
}

int main() {
    struct Distance d1, d2, sum;

    // Input first distance
    printf("Enter the first distance (feet inches): ");
    scanf("%d %d", &d1.feet, &d1.inches);

    // Input second distance
    printf("Enter the second distance (feet inches): ");
    scanf("%d %d", &d2.feet, &d2.inches);

    // Add distances
    sum = addDistances(d1, d2);

    // Display result
    printf("Sum of distances: %d feet %d inches\n", sum.feet, sum.inches);

    return 0;
}

