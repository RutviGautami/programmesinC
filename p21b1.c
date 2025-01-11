#include <stdio.h>

// Define the structure for employee
struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp = {101, "Alice", 75000.50}; // Create and initialize a structure
    struct Employee *ptr = &emp; // Pointer to the structure

    // Access structure members using the pointer
    printf("Accessing Structure Members via Pointer:\n");
    printf("ID: %d\n", (*ptr).id);
    printf("Name: %s\n", ptr->name);
    printf("Salary: %.2f\n", ptr->salary);

    return 0;
}

