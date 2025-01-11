#include <stdio.h>

int main() {
int number, i = 1;

// Input the number
printf("Enter a number: ");
scanf("%d", &number);

// Output the factors
printf("Factors of %d are: ", number);
while (i <= number) {
if (number % i == 0) {
printf("%d ", i);
}
i++;
}
printf("\n");

return 0;
}