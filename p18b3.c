#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

// Function to print all prime numbers between two numbers
void printPrimeInInterval(int start, int end) {
    printf("Prime numbers between %d and %d: ", start, end);
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start, end;
    
    printf("Enter the start of the interval: ");
    scanf("%d", &start);
    
    printf("Enter the end of the interval: ");
    scanf("%d", &end);
    
    printPrimeInInterval(start, end);  // Call the function
    
    return 0;
}

