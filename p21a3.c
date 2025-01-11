#include <stdio.h>

// Define structure and union for demonstration
struct StructExample {
    int intVal;
    float floatVal;
    double a;
    char charVal[10];
};

union UnionExample {
    int intVal;
    float floatVal;
    double a;
    char charVal[10];
};

int main() {
	struct StructExample s1;
	union UnionExample s2;
	printf("%d\n",sizeof(s1));
	printf("%d",sizeof(s2));
  /* // Declare and initialize structure
    struct StructExample structVar = {10, 3.14, 'A'};
    printf("Structure Example:\n");
    printf("Int: %d, Float: %.2f, Char: %c\n", structVar.intVal, structVar.floatVal, structVar.charVal);

    // Declare and initialize union
    union UnionExample unionVar;
    unionVar.intVal = 10;
    printf("Union Example:\n");
    printf("Int: %d\n", unionVar.intVal);
    unionVar.floatVal = 3.14; // Overwrites intVal
    printf("Float: %.2f\n", unionVar.floatVal);
    unionVar.charVal = 'A'; // Overwrites floatVal
    printf("Char: %c\n", unionVar.charVal);
printf("Int: %d\n", unionVar.intVal);
    return 0;
    */
}

