#include <stdio.h>
#include <math.h>

int main() {
int number, original, remainder, result = 0, n = 0;

// Input the number
printf("Enter a number: ");
scanf("%d", &number);

original = number;

// Find the number of digits
while (original != 0) {
original /= 10;
n++;
}

original = number;

// Compute the sum of nth power of its digits
while (original != 0) {
remainder = original % 10;
result += pow(remainder, n);
original /= 10;
}

// Check if the number is Armstrong
if (result == number) {
printf("%d is an Armstrong number.\n", number);
} else {
printf("%d is not an Armstrong number.\n", number);
}

return 0;
}