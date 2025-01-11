#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int sum = 0, temp, remainder, n = 0;
    temp = num;
    
    // Count the number of digits
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, n);
        temp /= 10;
    }

    return (num == sum);
}

// Function to check if a number is a perfect number
int isPerfect(int num) {
    int sum = 0;
    
    for (int i = 1; i < num; i++) {
        if (num % i == 0) sum += i;
    }
    
    return (sum == num);
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Check prime
    if (isPrime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);
    
    // Check Armstrong
    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    
    // Check perfect
    if (isPerfect(num))
        printf("%d is a perfect number.\n", num);
    else
        printf("%d is not a perfect number.\n", num);
    
    return 0;
}

