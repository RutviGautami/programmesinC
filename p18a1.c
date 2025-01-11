#include <stdio.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = add(num1, num2); // Calling the function

    printf("Sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}

