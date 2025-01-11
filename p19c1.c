#include <stdio.h>

// Recursive function to calculate the reverse of a number
int reverseNumber(int num, int rev) {
    if (num == 0) 
        return rev; // Base case: when all digits are processed
    return reverseNumber(num / 10, rev * 10 + num % 10); // Recursive step
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int reversed = reverseNumber(num, 0);
    printf("Reversed number: %d\n", reversed);
    return 0;
}

