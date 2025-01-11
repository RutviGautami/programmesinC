#include <stdio.h>

// Function to swap numbers (Call by Value)
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping (inside function): a = %d, b = %d\n", a, b);
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    swapByValue(num1, num2); // Call by Value
    printf("After swapping (in main): num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

/*
#include <stdio.h>

// Function to swap numbers (Call by Reference)
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    swapByReference(&num1, &num2); // Call by Reference
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
*/
