#include <stdio.h>

int main() {
    int x = 5;
    int *ptr = &x;

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Value of ptr (address of x): %p\n", ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);
    printf("Value pointed to by ptr: %d\n", *(&x));
    printf("Address of ptr: %p\n", &ptr);

      return 0;
}
