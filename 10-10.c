#include <stdio.h>

int main() {
int num1, num2, hcf, lcm, remainder, numerator, denominator;
// Input two numbers
printf("Enter two numbers: ");
scanf("%d %d", &num1, &num2);

numerator = num1;
denominator = num2;

// Find HCF using Euclidean algorithm
while (denominator != 0) {
remainder = numerator % denominator;
numerator = denominator;
denominator = remainder;
}

hcf = numerator;
lcm = (num1 * num2) / hcf; // Using the relation: LCM * HCF = num1 * num2

printf("HCF: %d\n", hcf);
printf("LCM: %d\n", lcm);

return 0;
}