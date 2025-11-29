//program to use void pointer
#include <stdio.h>

int main() {
    int data = 42;
    void *ptr = &x;  // void pointer holding address of an int

    // Must cast to appropriate type before dereferencing
    printf("Value of x: %d\n", *(int *)ptr);

    return 0;
}

