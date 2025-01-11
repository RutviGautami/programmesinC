#include <stdio.h>

// Function to find the length of a string
int strLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Function to copy one string into another
void strCopy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';  // Null-terminate the destination string
}

// Function to compare two strings
int strCompare(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i])
            return str1[i] - str2[i];
        i++;
    }
    return str1[i] - str2[i];
}

// Function to concatenate two strings
void strConcat(char dest[], char src[]) {
    int i = 0, j = 0;
    // Find end of destination string
    while (dest[i] != '\0') {
        i++;
    }
    // Append the source string to destination
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';  // Null-terminate the result
}

int main() {
    char str1[100], str2[100], result[200];
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. String Length\n");
        printf("2. String Copy\n");
        printf("3. String Compare\n");
        printf("4. String Concatenate\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a string: ");
                scanf("%s", str1);
                printf("Length of the string: %d\n", strLength(str1));
                break;

            case 2:
                printf("Enter the source string: ");
                scanf("%s", str1);
                strCopy(str2, str1);
                printf("Copied string: %s\n", str2);
                break;

            case 3:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                if (strCompare(str1, str2) == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;

            case 4:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                strConcat(str1, str2);
                printf("Concatenated string: %s\n", str1);
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice, please try again.\n");
                break;
        }
    } while (choice != 5);

    return 0;
}

