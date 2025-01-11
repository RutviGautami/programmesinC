#include <stdio.h>

// Function to calculate power using recursion
int power(int base, int exp) {
    if (exp == 0) 
        return 1; // Base case: any number to the power of 0 is 1
    return base * power(base, exp - 1); // Recursive step
}

int main() {
    int base, exp;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);
    
    printf("%d^%d = %d\n", base, exp, power(base, exp));
    return 0;
}

