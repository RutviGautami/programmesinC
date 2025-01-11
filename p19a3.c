#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    // strlen()
    printf("Length of str1: %lu\n", strlen(str1));
    printf("Length of str2: %lu\n", strlen(str2));

    // strcmp()
    if (strcmp(str1, str2) == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    // strcpy()
    strcpy(str2, str1);
    printf("After copying, str2: %s\n", str2);

    // strcat()
    strcat(str1, str2);
    printf("After concatenation, str1: %s\n", str1);

    // strrev() - Note: Not a standard function; on some compilers, use a loop to reverse.
    printf("Reverse of str1: %s\n", strrev(str1));

    // strlwr() - Converts to lowercase
    printf("Lowercase of str2: %s\n", strlwr(str2));

    // strupr() - Converts to uppercase
    printf("Uppercase of str1: %s\n", strupr(str1));

    return 0;
}

