#include <stdio.h>

int main() {
int number, i = 1;
unsigned long long factorial = 1;

// Input the number
printf("Enter a number: ");
scanf("%d", &number);

// Use a while loop to calculate factorial
while (i <= number) {factorial *= i;
i++;
}

// Output the factorial
printf("Factorial of %d = %llu\n", number, factorial);

return 0;
}