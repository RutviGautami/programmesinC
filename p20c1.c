#include <stdio.h>

// Manual implementation of strncmp
int myStrncmp(const char *str1, const char *str2, size_t n) {
    size_t i = 0;
    while (i < n && *str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return (*str1 > *str2) ? 1 : -1; // Return 1 if str1 > str2, -1 otherwise
        }
        str1++;
        str2++;
        i++;
    }
    if (i == n || (*str1 == '\0' && *str2 == '\0')) {
        return 0; // Strings are equal up to n characters
    }
    return (*str1 != '\0') ? 1 : -1; // Return 1 if str1 is longer, -1 otherwise
}

// Manual implementation of strncpy
void myStrncpy(char *destination, const char *source, size_t n) {
    size_t i = 0;
    while (i < n && *source != '\0') {
        *destination = *source;
        destination++;
        source++;
        i++;
    }
    while (i < n) { // Fill the remaining characters with null if n > source length
        *destination = '\0';
        destination++;
        i++;
    }
}

// Manual implementation of strncat
void myStrncat(char *destination, const char *source, size_t n) {
    // Move to the end of the destination string
    while (*destination != '\0') {
        destination++;
    }
    // Append up to n characters from source
    size_t i = 0;
    while (i < n && *source != '\0') {
        *destination = *source;
        destination++;
        source++;
        i++;
    }
    *destination = '\0'; // Null-terminate the result
}

int main() {
    char str1[100], str2[100], destination[100];
    int n;

    // Input strings and number of characters
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Testing myStrncmp
    int cmpResult = myStrncmp(str1, str2, n);
    if (cmpResult == 0) {
        printf("The strings are equal up to %d characters.\n", n);
    } else if (cmpResult > 0) {
        printf("The first string is greater than the second string up to %d characters.\n", n);
    } else {
        printf("The first string is less than the second string up to %d characters.\n", n);
    }

    // Testing myStrncpy
    myStrncpy(destination, str1, n);
    printf("After copying %d characters: %s\n", n, destination);

    // Testing myStrncat
    myStrncat(str1, str2, n);
    printf("After concatenating %d characters: %s\n", n, str1);

    return 0;
}

