#include <stdio.h>

// Define nested structures
struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    char name[50];
    int rollNumber;
    struct Date dob; // Nested structure for date of birth
};

int main() {
    struct Student student;

    // Input student details
    printf("Enter student's name: ");
    scanf(" %[^\n]", student.name);
    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);
    printf("Enter date of birth (DD MM YYYY): ");
    scanf("%d %d %d", &student.dob.day, &student.dob.month, &student.dob.year);

    // Display student details
    printf("\nStudent Details:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Date of Birth: %02d/%02d/%04d\n", student.dob.day, student.dob.month, student.dob.year);

    return 0;
}

