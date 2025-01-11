#include <stdio.h>

int main() {
int base, exponent, i, result = 1;

// Get base and exponent from user
printf("Enter the base: ");
scanf("%d", &base);
printf("Enter the exponent: ");
scanf("%d", &exponent);

// Calculate base^exponent
for(i = 1; i <= exponent; i++) {
result *= base;
}
// Print result
printf("%d^%d = %d\n", base, exponent, result);

return 0;
}