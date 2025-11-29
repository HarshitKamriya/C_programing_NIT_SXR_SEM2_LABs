//program to print NULL pointer
#include <stdio.h>
int main() {
    int *ptr = NULL;  // Declare and initialize a null pointer
    if (ptr == NULL) {
        printf("The pointer is NULL. \n");
    } else {
        // This block won't execute because ptr is NULL
        printf("Value at ptr = %d\n", *ptr);
    }
    return 0;
}

