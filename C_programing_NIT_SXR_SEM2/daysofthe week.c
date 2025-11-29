#include <stdio.h>
int main() {
    int a;
    printf("Enter the day number you want to print as day:\n");
    scanf("%d", &a);
    switch (a) {
        case 1:
            printf("The day is Monday\n");

        case 2:
            printf("The day is Tuesday\n");

        case 3:
            printf("The day is Wednesday\n");

        case 4:
            printf("The day is Thursday\n");

        case 5:
            printf("The day is Friday\n");

        case 6:
            printf("The day is Saturday\n");

        case 7:
            printf("The day is Sunday\n");

        default:
            printf("Wrong input\n");

    }
    return 0;
}
