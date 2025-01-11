#include <stdio.h>

int main() {
int number, reversed = 0, remainder, original;

// Input the number
printf("Enter a number: ");
scanf("%d", &number);

original = number; // Store original number

// Reverse the number
while (number != 0) {
remainder = number % 10;
reversed = reversed * 10 + remainder;
number /= 10;
}
// Check if the original number is equal to the reversed number
if (original == reversed) {
printf("%d is a palindrome.\n", original);
} else {
printf("%d is not a palindrome.\n", original);
}

return 0;
}