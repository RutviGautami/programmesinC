#include <stdio.h>

// Define the structure for student
struct Student {
    char name[50];
    float percentage;
    int age;
};

int main() {
    struct Student students[5]; // Array of 5 students

    // Read details of 5 students
    for (int i = 0; i < 5; i++) {
        printf("Enter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Percentage: ");
        scanf("%f", &students[i].percentage);
        printf("Age: ");
        scanf("%d", &students[i].age);
    }

    // Display details of 5 students
    printf("\nStudent Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Percentage: %.2f\n", students[i].percentage);
        printf("Age: %d\n", students[i].age);
        printf("\n");
    }

    return 0;
}

