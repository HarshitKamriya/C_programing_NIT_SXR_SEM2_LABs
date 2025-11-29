#include <stdio.h>

struct Car {
    char model[50];
    int year;
};

int main() {
    struct Car c, *ptr;
    ptr = &c;

    printf("Enter car model: ");
    scanf("%s", ptr->model);
    printf("Enter car year: ");
    scanf("%d", &ptr->year);

    printf("\nCar Details:\n");
    printf("Model: %s\n", ptr->model);
    printf("Year: %d\n", ptr->year);

    return 0;
}

