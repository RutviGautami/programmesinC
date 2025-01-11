#include <stdio.h>

// Define the structure for book
struct Book {
    char title[100];
    char author[50];
    char publication[50];
    float price;
};

int main() {
    struct Book books[3]; // Array of 3 books

    // Read details of 3 books
    for (int i = 0; i < 3; i++) {
        printf("Enter details of book %d:\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]", books[i].title);
        printf("Author: ");
        scanf(" %[^\n]", books[i].author);
        printf("Publication: ");
        scanf(" %[^\n]", books[i].publication);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    // Display details of 3 books
    printf("\nBook Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Publication: %s\n", books[i].publication);
        printf("Price: %.2f\n", books[i].price);
        printf("\n");
    }

    return 0;
}

