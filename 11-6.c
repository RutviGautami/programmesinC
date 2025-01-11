#include <stdio.h>

int main() {
int n, i, t1 = 0, t2 = 1, nextTerm;

// Get input from user
printf("Enter the number of terms in the Fibonacci series: ");
scanf("%d", &n);

// Print the Fibonacci series
printf("Fibonacci Series: %d, %d", t1, t2);
for (i = 3; i <= n; i++) {
nextTerm = t1 + t2; // Calculate next term
printf(", %d", nextTerm);
t1 = t2; // Update t1 to t2
t2 = nextTerm; // Update t2 to nextTerm
}
printf("\n");
return 0;
}