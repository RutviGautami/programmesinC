#include <stdio.h>

// Function to copy a string using pointers
void stringCopy(char *source, char *destination) {
    while (*source != '\0') {
        *destination = *source; // Copy character from source to destination
        source++;
        destination++;
    }
    *destination = '\0'; // Null-terminate the destination string
}

int main() {
    char source[100], destination[100];
    
    printf("Enter a string: ");
    scanf("%[^\n]", source); // Reads the source string
    
    stringCopy(source, destination); // Copy string
    
    printf("Source String: %s\n", source);
    printf("Copied String: %s\n", destination);
    
    return 0;
}

