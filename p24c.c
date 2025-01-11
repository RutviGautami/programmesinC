#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;

    // Input size of array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the input array
    int *nums = (int *)malloc(n * sizeof(int));
    if (nums == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input elements of nums array
    printf("Enter %d elements of the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Dynamically allocate memory for the result array
    int *ans = (int *)malloc(2 * n * sizeof(int));
    if (ans == NULL) {
        printf("Memory allocation failed.\n");
        free(nums);
        return 1;
    }

    // Create the concatenated array
    for (i = 0; i < n; i++) {
        ans[i] = nums[i];
        ans[i + n] = nums[i];
    }

    // Output the concatenated array
    printf("Concatenated array:\n");
    for (i = 0; i < 2 * n; i++) {
        printf("%d ", ans[i]);
    }
    printf("\n");

    // Free allocated memory
    free(nums);
    free(ans);

    return 0;
}

