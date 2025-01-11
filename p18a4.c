#include <stdio.h>

// Function to find the maximum of three floating-point numbers
float findMaxOfThree(float a, float b, float c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    float num1, num2, num3;

    printf("Enter three floating-point numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    printf("Maximum of the three numbers is: %.2f\n", findMaxOfThree(num1, num2, num3));

    return 0;
}

