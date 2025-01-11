#include <stdio.h>

int main() {
int i, n, sum = 0;

// Get input from user
printf("Enter the value of n: ");
scanf("%d", &n);

// Calculate sum of 1 to n
for(i = 1; i <= n; i++) {
sum += i;
}

// Print the sum
printf("Sum of numbers from 1 to %d is: %d\n", n, sum);

return 0;
}