#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocate memory
    int *intPtr ;
	intPtr= (int *)malloc(sizeof(int));
    char *charPtr ;
	charPtr= (char *)malloc(sizeof(char));
    float *floatPtr ;
	floatPtr= (float *)malloc(sizeof(float));

    // Check if memory allocation was successful
    if (intPtr == NULL || charPtr == NULL || floatPtr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Assign values
    intPtr[0] = 42;
    charPtr [0]= 'A';
    floatPtr [0]= 3.1;

    // Display values
    printf("Integer: %d\n", intPtr[0]);
    printf("Character: %c\n", charPtr[0]);
    printf("Float: %.2f\n", floatPtr[0]);

    // Free memory
    free(intPtr);
    free(charPtr);
    free(floatPtr);

    return 0;
}
/*#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocate memory
    int *intPtr = (int *)malloc(sizeof(int));
    char *charPtr = (char *)malloc(sizeof(char));
    float *floatPtr = (float *)malloc(sizeof(float));

    // Check if memory allocation was successful
    if (intPtr == NULL || charPtr == NULL || floatPtr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Assign values
    *intPtr = 42;
    *charPtr = 'A';
    *floatPtr = 3.14;

    // Display values
    printf("Integer: %d\n", *intPtr);
    printf("Character: %c\n", *charPtr);
    printf("Float: %.2f\n", *floatPtr);

    // Free memory
    free(intPtr);
    free(charPtr);
    free(floatPtr);

    return 0;
}
*/
