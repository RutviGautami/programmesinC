#include <stdio.h>

int main() {
int number, sum = 0, i = 1;

// Input the number
printf("Enter a number: ");
scanf("%d", &number);

// Calculate the sum of divisors
while (i < number) {
if (number % i == 0) {
sum += i;
}
i++;
}

// Check if the number is perfect
if (sum == number) {
printf("%d is a perfect number.\n", number);
} else {
printf("%d is not a perfect number.\n", number);
}
return 0;
}