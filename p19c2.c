#include <stdio.h>

// Function to calculate factorial
long long factorial(int n) {
    if (n == 0 || n == 1) 
        return 1; // Base case: 0! = 1! = 1
    return n * factorial(n - 1); // Recursive step
}

// Function to calculate nCr (Combination)
long long nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// Function to calculate nPr (Permutation)
long long nPr(int n, int r) {
    return factorial(n) / factorial(n - r);
}

int main() {
    int n, r;
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter value of r: ");
    scanf("%d", &r);
    
    if (r > n) {
        printf("Invalid input! r cannot be greater than n.\n");
        return 1;
    }
    
    printf("nCr (Combination) = %lld\n", nCr(n, r));
    printf("nPr (Permutation) = %lld\n", nPr(n, r));
    return 0;
}

