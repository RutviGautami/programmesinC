#include <stdio.h>

int main() {
int number, reversedNumber = 0;

// Input the number
printf("Enter a number: ");
scanf("%d", &number);

// Reverse the number to process digits from left to right
int temp = number;
while (temp != 0) {
reversedNumber = reversedNumber * 10 + temp % 10;
temp /= 10;
}

// Print digits in words
printf("Number in words: ");
while (reversedNumber != 0) {
int digit = reversedNumber % 10;
switch (digit) {
case 0: printf("Zero "); break;
case 1: printf("One "); break;
case 2: printf("Two "); break;
case 3: printf("Three "); break;
case 4: printf("Four "); break;
case 5: printf("Five "); break;
case 6: printf("Six "); break;
case 7: printf("Seven "); break;
case 8: printf("Eight "); break;
case 9: printf("Nine "); break;
}
reversedNumber /= 10;
}

printf("\n");
return 0;
}