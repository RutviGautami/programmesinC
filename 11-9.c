#include <stdio.h>

int main() {
int num, temp, firstDigit, lastDigit, divisor = 1, swappedNum;

// Input the number
printf("Enter a number: ");
scanf("%d", &num);

// Store the original number in a temporary variable
temp = num;

// Extract the last digit
lastDigit = num % 10;
// Find the divisor for the first digit using a for loop
while (temp >= 10) {
temp /= 10;divisor *= 10; // This is equivalent to pow(10, digits - 1)
}

// The first digit is the most significant digit (temp now holds the first digit)
firstDigit = temp;

// Swap the first and last digits
swappedNum = (num % divisor) / 10; // Remove first and last digits
swappedNum = lastDigit * divisor + swappedNum * 10 + firstDigit; // Rebuild the number

// Output the result
printf("Number after swapping first and last digits: %d\n", swappedNum);

return 0;
}