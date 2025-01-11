#include <stdio.h>

// Function to swap elements of two arrays
void swapArrays(int arr1[], int arr2[], int size) {
	int i;
    for ( i = 0; i < size; i++) {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}

int main() {
    int size,i;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int arr1[size], arr2[size];
    
    printf("Enter elements of first array:\n");
    for ( i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter elements of second array:\n");
    for ( i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }
    
    // Swapping elements
    swapArrays(arr1, arr2, size);
    
    printf("After swapping:\n");
    printf("First array: ");
    for ( i = 0; i < size; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nSecond array: ");
    for ( i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    
    return 0;
}

