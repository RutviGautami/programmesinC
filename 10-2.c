#include <stdio.h>

int main() {
int number, sum = 0, count = 0;
char choice;

// Loop to accept multiple numbers
do {
printf("Enter a number: ");
scanf("%d", &number);
sum += number;
count++;

// Ask the user if they want to continue
printf("Do you want to enter another number (y/n)? ");
scanf(" %c", &choice);
} while(choice == 'y' || choice == 'Y');

// Calculate average
float average = (float) sum / count;

// Output the sum and average
printf("Sum: %d\n", sum);
printf("Average: %.2f\n", average);
return 0;
}