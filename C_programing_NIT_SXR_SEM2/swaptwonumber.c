#include<stdio.h>
int main(){
    int a,b;
    printf("enter the two no that you want to swap:\n");
    scanf("%d%d",&a,&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("their swaped value will be %d is a and %d is b",a,b);










    return 0;
}
