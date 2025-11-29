#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

void displayBook(struct Book b) {
    printf("\nBook Details:\n");
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);
}

int main() {
    struct Book b1;

    printf("Enter book title: ");
    scanf("%s", b1.title);
    printf("Enter author: ");
    scanf("%s", b1.author);
    printf("Enter price: ");
    scanf("%f", &b1.price);

    displayBook(b1);

    return 0;
}

