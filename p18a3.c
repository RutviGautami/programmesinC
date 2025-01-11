#include <stdio.h>

// Function to calculate simple interest
float simpleInterest(float principal, float rate, float time) {
    return (principal * rate * time) / 100;
}

int main() {
    float principal, rate, time, interest;

    printf("Enter principal, rate, and time: ");
    scanf("%f %f %f", &principal, &rate, &time);

    interest = simpleInterest(principal, rate, time); // Calling the function

    printf("Simple Interest: %.2f\n", interest);

    return 0;
}

