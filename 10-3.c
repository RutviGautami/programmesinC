#include <stdio.h>

int main() {
int number, i = 2, isPrime = 1;

// Input the number
printf("Enter a number: ");
scanf("%d", &number);

// Check if the number is prime
if (number <= 1) {
isPrime = 0; // Numbers <= 1 are not prime
} else {
while (i <= number / 2) {
if (number % i == 0) {
isPrime = 0; // Not a prime number
break;
}
i++;
}
}

// Output the result
if (isPrime==1) {
printf("%d is a prime number.\n", number);
} else {
printf("%d is not a prime number.\n", number);
}

return 0;
}