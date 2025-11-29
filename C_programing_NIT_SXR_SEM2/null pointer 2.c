//Program to print size of pointer
#include <stdio.h>
int main() {
    int A=10;
    char B='x';
    float C=20.5;
    int *ptrA;
    char *ptrB;
    float *ptrC;
    // Finding size using sizeof()
    printf("Variables size:\n int:%zu\n", sizeof(A));
    printf("char:%zu\n", sizeof(B));
    printf("float:%zu\n", sizeof(C));
    // Finding size using sizeof()
    printf("Pointer size:\n int:%zu\n", sizeof(ptrA));
    printf("float:%zu\n", sizeof(ptrB));
    printf("char:%zu\n", sizeof(ptrC));
    return 0;
}

