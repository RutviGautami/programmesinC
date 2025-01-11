#include <stdio.h>

int main() {
int base, exponent, result = 1, i = 1;

// Input base and exponent
printf("Enter base: ");
scanf("%d", &base);
printf("Enter exponent: ");
scanf("%d", &exponent);

// Use a while loop to calculate base^exponent
while (i <= exponent) {
result *= base;
i++;
}

// Output the result
printf("%d^%d = %d\n", base, exponent, result);

return 0;
}