#include <stdio.h>

// Function to find the maximum
int findMax(int a, int b) {
    return (a > b) ? a : b;
}

// Function to find the minimum
int findMin(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Maximum: %d\n", findMax(num1, num2)); // Calling max function
    printf("Minimum: %d\n", findMin(num1, num2)); // Calling min function

    return 0;
}

