#include <stdio.h>

int main() {
int number, remainder;
unsigned long long binary = 0;
int place = 1; // to keep track of the place value in binary (1, 10, 100, ...)

// Input the decimal number
printf("Enter a decimal number: ");
scanf("%d", &number);

// Convert decimal to binary using while loop
while (number > 0) {
remainder = number % 2;
binary += remainder * place;
number /= 2;
place *= 10; // shift to the next place value in binary
}

// Print binary number
printf("Binary representation: %llu\n", binary);

return 0;
}