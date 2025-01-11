#include <stdio.h>

int main() {
char ch;

// Print all uppercase alphabets
printf("Uppercase alphabets:\n");
ch = 'A';
while (ch <= 'Z') {
printf("%c ", ch);
ch++;
}

printf("\n");

// Print all lowercase alphabets
printf("Lowercase alphabets:\n");
ch = 'a';
while (ch <= 'z') {
printf("%c ", ch);
ch++;
}

printf("\n");

return 0;
}