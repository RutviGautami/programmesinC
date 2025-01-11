#include <stdio.h>

int main() {
int number, firstDigit, lastDigit;

// Input the number
printf("Enter a number: ");
scanf("%d", &number);

// Find the last digit
lastDigit = number % 10;

// Find the first digit
while (number >= 10) {
number /= 10;
}
firstDigit = number;

// Output the sum of first and last digit
printf("Sum of first and last digit: %d\n", firstDigit + lastDigit);

return 0;
}