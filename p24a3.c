#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *numbers;
    int sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory for n integers using calloc
    numbers = (int *)calloc(n, sizeof(int));
    if (numbers == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input numbers
    //printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
    	printf("%d",numbers[i]);
        //scanf("%d", &numbers[i]);
    //    sum += numbers[i];
    }

    // Display sum
    //printf("Sum = %d\n", sum);

    // Free memory
    free(numbers);

    return 0;
}

