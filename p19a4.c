#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    char *pos;

    printf("Enter a string: ");
    gets(str);

    printf("Enter a character to find: ");
    scanf("%c", &ch);

    pos = strchr(str, ch); // strchr returns a pointer to the first occurrence of ch in str

    if (pos != NULL) {
        printf("Character '%c' found at position: %ld\n", ch, pos - str + 1);
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }

    return 0;
}

