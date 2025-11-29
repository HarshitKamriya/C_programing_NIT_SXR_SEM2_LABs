#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data d;

    d.i = 10;
    printf("Integer: %d\n", d.i);

    d.f = 3.14;
    printf("Float: %.2f\n", d.f);  // overwrites d.i

    strcpy(d.str, "Hello");
    printf("String: %s\n", d.str);  // overwrites d.f

    // Only one value is preserved at a time in union
    return 0;
}
