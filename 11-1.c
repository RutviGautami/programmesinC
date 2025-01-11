#include <stdio.h>

int main() {
int i, n;

// Print numbers from 1 to 10
printf("Numbers from 1 to 10:\n");
for(i = 1; i <= 10; i++) {
printf("%d ", i);
}
printf("\n");

// Modify to print numbers from 1 to n
printf("Enter the value of n: ");
scanf("%d", &n);
printf("Numbers from 1 to %d:\n", n);
for(i = 1; i <= n; i++) {
printf("%d ", i);
}

return 0;
}