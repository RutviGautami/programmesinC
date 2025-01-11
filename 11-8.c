#include <stdio.h>
int main() {
int i;
// Print ASCII characters and their values
printf("ASCII Characters and their values:\n");
for (i = 0; i < 128; i++) {
printf("ASCII value %d: %c\n", i, i);
}

return 0;
}