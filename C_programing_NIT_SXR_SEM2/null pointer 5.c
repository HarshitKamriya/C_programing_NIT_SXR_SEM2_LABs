//program to show relation between pointer and arrays
#include <stdio.h>

int main() {
    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    int *ptr = arr;
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *(ptr + i));
    }
for (int i = 0; i < 5; i++) {
    printf("Element %d: %d\n", i, *ptr);
    ptr++;}
    return 0;
}

