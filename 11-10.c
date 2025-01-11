#include <stdio.h>

int main() {
int base, exp, result = 1,i,j;

// Get input from user
printf("Enter base: ");
scanf("%d", &base);
printf("Enter exponent: ");
scanf("%d", &exp);
// Calculate power using addition
for ( i = 0; i < exp; i++) {
int temp = 0;
// Multiply base by result using addition
for ( j = 0; j < result; j++) {
temp += base; // Add base to itself 'result' times
}
result = temp; // Update result to new value
}

printf("%d raised to the power of %d is %d\n", base, exp, result);

return 0;
}