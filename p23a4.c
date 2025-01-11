#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student *stu;

    // Allocate memory for the structure
    stu = (struct Student *)malloc(sizeof(struct Student));
    if (stu == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input data
    printf("Enter student's name: ");
    scanf("%s", stu->name);
    printf("Enter student's age: ");
    scanf("%d", &stu->age);
    printf("Enter student's marks: ");
    scanf("%f", &stu->marks);

    // Display data
    printf("\nStudent Information:\n");
    printf("Name: %s\n", stu->name);
    printf("Age: %d\n", stu->age);
    printf("Marks: %.2f\n", stu->marks);

    // Free memory
    free(stu);

    return 0;
}

