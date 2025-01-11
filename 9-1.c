#include <stdio.h>

int main() {
int n, i = 1, sum = 0;

// Input the value of n
printf("Enter the value of n: ");
scanf("%d", &n);

while (i <= n) {
if (i % 2 == 0) {
sum -= i; // Subtract even numbers
} else {
sum += i; // Add odd numbers
}
i++;
}

// Output the result
printf("Sum of the series 1 - 2 + 3 - 4 + ... %d = %d\n", n, sum);

return 0;
}