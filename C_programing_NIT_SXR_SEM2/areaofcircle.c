#include<stdio.h>
int main(void){
    float r=9;
    printf("Enter radius:");
    scanf("%f", &r);

    float A = 3.14159*r*r;
    printf("The area of the circle is : %f", A);
    return 0;

}