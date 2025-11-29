#include <stdio.h>

struct MyStruct {
    int i;
    float f;
    char c;
};

union MyUnion {
    int i;
    float f;
    char c;
};

int main() {
    printf("Size of structure: %lu\n", sizeof(struct MyStruct));
    printf("Size of union: %lu\n", sizeof(union MyUnion));

    return 0;
}

