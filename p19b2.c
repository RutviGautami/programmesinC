#include <stdio.h>
#include <ctype.h>

// Function to convert lowercase to uppercase
void toUpperCase(char str[]) {
	int i;
    for ( i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str); // Reads a line of input
    
    toUpperCase(str);
    printf("Uppercase String: %s\n", str);
    return 0;
}

