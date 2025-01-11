#include <stdio.h>
#include <ctype.h>

// Function to remove spaces and special characters
void removeSpacesAndSpecialChars(char *str) {
    char *src = str, *dest = str;
    while (*src != '\0') {
        if (isalnum(*src)) { // Check if the character is alphanumeric
            *dest = *src;   // Copy to destination pointer
            dest++;
        }
        src++;
    }
    *dest = '\0'; // Null-terminate the cleaned string
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf(" %[^\n]", str); // Reads a line of input, including spaces
    
    removeSpacesAndSpecialChars(str);
    printf("String after removing spaces and special characters: %s\n", str);
    
    return 0;
}
/*
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100], cleanedStr[100];
    printf("Enter a string: ");
    scanf(" %[^\n]", str); // Reads a line of input, including spaces

    int j = 0; // Index for cleanedStr
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalnum(str[i])) { // Check if the character is alphanumeric
            cleanedStr[j++] = str[i];
        }
    }
    cleanedStr[j] = '\0'; // Null-terminate the cleaned string

    printf("String after removing spaces and special characters: %s\n", cleanedStr);

    return 0;
}
*/

