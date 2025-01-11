#include <stdio.h>

// Function to generate Fibonacci series
void fibbo(int n) {
    int a = 0, b = 1, next,i;
    
    printf("Fibonacci Series: ");
    
    for ( i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int n;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    fibbo(n);  // Calling Fibonacci function
    
    return 0;
}

