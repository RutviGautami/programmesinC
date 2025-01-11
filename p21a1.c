#include <stdio.h>

// Define the structure for employee
struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    // Declare and initialize a structure variable
    struct Employee emp = {101, "John Doe", 50000.00};

    // Display the structure's data
    printf("Employee Details:\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2f\n", emp.salary);

    return 0;
}

