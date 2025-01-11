#include <stdio.h>

// Function to calculate factorial (iterative)
int factorial_iterative(int n) {
    int fact = 1,i;
    for ( i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate factorial (recursive)
int factorial_recursive(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial_recursive(n - 1);
    }
}

int main() {
    int num;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    printf("Factorial (Iterative): %d\n", factorial_iterative(num));
    printf("Factorial (Recursive): %d\n", factorial_recursive(num));

    return 0;
}

