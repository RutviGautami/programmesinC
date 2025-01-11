#include <stdio.h>

int main() {
int n, i;
unsigned long long factorial = 1;

// Get input from user
printf("Enter a number to find its factorial: ");
scanf("%d", &n);

// Calculate factorial
for(i = 1; i <= n; i++) {
factorial *= i;
}

// Print result
printf("Factorial of %d = %llu\n", n, factorial);

return 0;
}