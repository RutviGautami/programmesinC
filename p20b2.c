#include <stdio.h>

// Manual implementation of strlen
int myStrlen(const char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

// Manual implementation of strcpy
void myStrcpy(char *destination, const char *source) {
    while (*source != '\0') {
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0';
}

// Manual implementation of strcmp
int myStrcmp(const char *str1, const char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return (*str1 > *str2) ? 1 : -1; // Return 1 if str1 > str2, -1 otherwise
        }
        str1++;
        str2++;
    }
    if (*str1 == '\0' && *str2 == '\0') {
        return 0; // Strings are equal
    }
    return (*str1 != '\0') ? 1 : -1; // Return 1 if str1 is longer, -1 otherwise
}

int main() {
    char str1[100], str2[100];
    
    printf("Enter the first string: ");
    scanf("%s", str1); // Reads the first string
    printf("Enter the second string: ");
    scanf("%s", str2); // Reads the second string
    
    // Testing myStrlen
    printf("Length of first string: %d\n", myStrlen(str1));
    printf("Length of second string: %d\n", myStrlen(str2));
    
    // Testing myStrcpy
    char copiedString[100];
    myStrcpy(copiedString, str1);
    printf("Copied string: %s\n", copiedString);
    
    // Testing myStrcmp
    int comparisonResult = myStrcmp(str1, str2);
    if (comparisonResult == 0) {
        printf("The strings are equal.\n");
    } else if (comparisonResult > 0) {
        printf("The first string is greater than the second string.\n");
    } else {
        printf("The first string is less than the second string.\n");
    }
    
    return 0;
}

