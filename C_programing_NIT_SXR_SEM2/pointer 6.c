//program to print array using pointer
#include <stdio.h>
int main() {
    int numbers[3] = { 5, 10, 15 };
    int length = sizeof(numbers) / sizeof(numbers[0]);

    // Declare pointer variable
    int (*arrayPtr)[3];

    // Assign address of numbers to pointer
    arrayPtr = &numbers;

    for (int index = 0; index < length; index++)
        printf("%d ", (*arrayPtr)[index]);

    return 0;
}

