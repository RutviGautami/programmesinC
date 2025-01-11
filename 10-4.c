#include <stdio.h>

int main() {
int number;

// Input the number
printf("Enter a number: ");
scanf("%d", &number);

// Reverse the number for correct digit order display
int reversedNumber = 0;
while (number > 0) {
reversedNumber = reversedNumber * 10 + number % 10;
number /= 10;
}

// Print digits of the number
while (reversedNumber > 0) {
printf("%d ", reversedNumber % 10);
reversedNumber /= 10;
}
printf("\n");

return 0;
}