#include <stdio.h>
int main() {
int num, digit, i;
int frequency[10] = {0}; // Array to store frequency of digits
// Get input from user
printf("Enter an integer: ");
scanf("%d", &num);

// Count frequency of digits
while (num != 0) {
digit = num % 10; // Get last digit
frequency[digit]++; // Increment frequency of the digit
num /= 10; // Remove last digit
}

// Print frequency of each digit
printf("Frequency of digits:\n");
for (i = 0; i < 10; i++) {

printf("Digit %d: %d times\n", i, frequency[i]);

}

return 0;
}