#include <stdio.h>
#include <string.h>

void replaceCharacter(char *str, char oldChar, char newChar) {
	int i;
    for ( i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
    }
}

int main() {
    char str[100], oldChar, newChar;

    printf("Enter a string: ");
    gets(str);

    printf("Enter the character to be replaced: ");
    scanf("%c", &oldChar);
    getchar(); // To consume newline character left by scanf

    printf("Enter the new character: ");
    scanf("%c", &newChar);

    replaceCharacter(str, oldChar, newChar);

    printf("Modified string: %s\n", str);

    return 0;
}

