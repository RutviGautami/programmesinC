#include <stdio.h>

int main() {
int number, reversedNumber = 0;

// Input the number
printf("Enter a number: ");
scanf("%d", &number);

// Reverse the number
while (number != 0) {
reversedNumber = reversedNumber * 10 + number % 10;
number /= 10;
}

// Output the reversed number
printf("Reversed number: %d\n", reversedNumber);
return 0;
}