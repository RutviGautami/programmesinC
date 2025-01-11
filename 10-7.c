#include <stdio.h>

int main() {
int number, i = 2;
int isPrime = 1; // Flag variable

// Input the number
printf("Enter a number: ");
scanf("%d", &number);

// Check for prime using flag
if (number <= 1) {
isPrime = 0; // Numbers <= 1 are not prime
} else {
while (i <= number / 2) {
if (number % i == 0) {
isPrime = 0; // Number is not prime
break;
}
i++;
}
}
// Output the result
if (isPrime) {
printf("%d is a prime number.\n", number);
} else {
printf("%d is not a prime number.\n", number);
}

return 0;
}